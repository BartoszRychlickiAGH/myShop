#include "LoginForm.h"
#include "Users.h"
#include "CustomerForm.h"
#include "RegisterForm.h"
#include "AdminForm.h"

#include <regex>
//#include <iostream>

using namespace System;
using namespace System::Windows::Forms;

void main(array<String^>^ args) {

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	

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
		MessageBox::Show("Authentication succesful", "Logging in...", MessageBoxButtons::OK);
		
		if (user->username != "Admin" || user->username != "admin") {
			myShop::CustomerForm customerForm;
			customerForm.ShowDialog();
		
		}
		else {
			myShop::AdminForm adminForm;
			adminForm.ShowDialog();

		}
	}
	else {
		MessageBox::Show("Authentication canceled", "Logging canceled", MessageBoxButtons::OK);
	}



}