#include "LoginForm.h"
#include "Users.h"
#include "CustomerForm.h"
#include "RegisterForm.h"
#include "AdminForm.h"

#include <regex>
#include <iostream>

//#include <msclr/marshal.h>
//#include <msclr/marshal_cppstd.h>

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Data::SqlClient;

using std::regex, std::regex_match,std::string;

/* string ConvertStringToStdString(String^ managedString)
{
	return msclr::interop::marshal_as<string>(managedString); // handling conversion from String^ type to std::string
}

template<typename T>
std::string as_bytes(T& s) {

	void* adds = &s;

	return static_cast<std::string>(adds);
}*/

void main(array<String^>^ args) {

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	int numberofUsername{0};
	int isAdmin{ 0 };

	User^ user = nullptr;

	while (true) {
		myShop::LoginForm loginForm;
		loginForm.ShowDialog();
		if (loginForm.switchToRegister) {
			myShop::RegisterForm registerForm;
			registerForm.ShowDialog();

			if (registerForm.switchToLogin) {
				continue;
			}else{
				user = registerForm.user;
				break;
			}
		}
		else {
			user = loginForm.user;
			break;

		}
	}
	
	if (user != nullptr) {
		try {
			String^ connString{"Data Source=(localdb)\\ProjectModels;Initial Catalog=mydb;Integrated Security=True"};
			SqlConnection sqlConn{ connString };
			sqlConn.Open();

			String^ sqlQuery{"SELECT COUNT(*) FROM ( SELECT Id, CASE WHEN @username = ANY (SELECT Login FROM users WHERE Login LIKE 'Admin%') THEN 0 ELSE 1 END AS INFO FROM users ) AS subquery WHERE INFO = 0;"};
			SqlCommand command(sqlQuery, % sqlConn);
			command.Parameters->AddWithValue("@username", user->username);

			SqlDataReader^ reader = command.ExecuteReader();


			if (reader->Read()) {
				isAdmin = reader->GetInt32(0);
			}
			else {
				MessageBox::Show("Invalid database read", "Error"
					, MessageBoxButtons::OK, MessageBoxIcon::Error);
			}

			if (isAdmin == 0) { // check if user is not admin
				myShop::CustomerForm customerForm(user);
				customerForm.ShowDialog();

			}
			else {
				myShop::AdminForm adminForm(user);
				adminForm.ShowDialog();

			}

		}
		catch (Exception^ e) {
			MessageBox::Show(e->Message, "error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}	
	}
	else {
		MessageBox::Show("Authentication canceled", "Logging canceled", MessageBoxButtons::OK);
	}
}