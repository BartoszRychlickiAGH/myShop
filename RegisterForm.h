#pragma once
#include "Users.h"
#include <regex>
#include <string>



namespace myShop {
	using std::string;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for RegisterForm
	/// </summary>
	public ref class RegisterForm : public System::Windows::Forms::Form
	{
	public:
		RegisterForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~RegisterForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::LinkLabel^ llLogin;

	private: System::Windows::Forms::TextBox^ tbName;
	private: System::Windows::Forms::TextBox^ tbSurname;
	private: System::Windows::Forms::TextBox^ tbUsername;
	private: System::Windows::Forms::TextBox^ tbPassword;
	private: System::Windows::Forms::TextBox^ tbConfirmPassword;
	private: System::Windows::Forms::TextBox^ tbAge;
	private: System::Windows::Forms::Button^ btnOK;
	private: System::Windows::Forms::Button^ btnCancel;











	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->llLogin = (gcnew System::Windows::Forms::LinkLabel());
			this->tbName = (gcnew System::Windows::Forms::TextBox());
			this->tbSurname = (gcnew System::Windows::Forms::TextBox());
			this->tbUsername = (gcnew System::Windows::Forms::TextBox());
			this->tbPassword = (gcnew System::Windows::Forms::TextBox());
			this->tbConfirmPassword = (gcnew System::Windows::Forms::TextBox());
			this->tbAge = (gcnew System::Windows::Forms::TextBox());
			this->btnOK = (gcnew System::Windows::Forms::Button());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(59, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(540, 61);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Register";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(13, 77);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(104, 32);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Name: ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(13, 127);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(137, 32);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Surname:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(13, 174);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(152, 32);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Username:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(13, 218);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(146, 32);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Password:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(12, 262);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(252, 32);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Confirm Password:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(13, 306);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(73, 32);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Age:";
			// 
			// llLogin
			// 
			this->llLogin->AutoSize = true;
			this->llLogin->Location = System::Drawing::Point(547, 421);
			this->llLogin->Name = L"llLogin";
			this->llLogin->Size = System::Drawing::Size(85, 32);
			this->llLogin->TabIndex = 8;
			this->llLogin->TabStop = true;
			this->llLogin->Text = L"Login";
			this->llLogin->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &RegisterForm::llLogin_LinkClicked);
			// 
			// tbName
			// 
			this->tbName->Location = System::Drawing::Point(193, 77);
			this->tbName->Name = L"tbName";
			this->tbName->Size = System::Drawing::Size(439, 38);
			this->tbName->TabIndex = 9;
			// 
			// tbSurname
			// 
			this->tbSurname->Location = System::Drawing::Point(193, 124);
			this->tbSurname->Name = L"tbSurname";
			this->tbSurname->Size = System::Drawing::Size(439, 38);
			this->tbSurname->TabIndex = 10;
			// 
			// tbUsername
			// 
			this->tbUsername->Location = System::Drawing::Point(193, 168);
			this->tbUsername->Name = L"tbUsername";
			this->tbUsername->Size = System::Drawing::Size(439, 38);
			this->tbUsername->TabIndex = 11;
			// 
			// tbPassword
			// 
			this->tbPassword->Location = System::Drawing::Point(193, 212);
			this->tbPassword->Name = L"tbPassword";
			this->tbPassword->PasswordChar = '*';
			this->tbPassword->Size = System::Drawing::Size(439, 38);
			this->tbPassword->TabIndex = 12;
			// 
			// tbConfirmPassword
			// 
			this->tbConfirmPassword->Location = System::Drawing::Point(263, 256);
			this->tbConfirmPassword->Name = L"tbConfirmPassword";
			this->tbConfirmPassword->PasswordChar = '*';
			this->tbConfirmPassword->Size = System::Drawing::Size(369, 38);
			this->tbConfirmPassword->TabIndex = 13;
			// 
			// tbAge
			// 
			this->tbAge->Location = System::Drawing::Point(193, 300);
			this->tbAge->Name = L"tbAge";
			this->tbAge->Size = System::Drawing::Size(439, 38);
			this->tbAge->TabIndex = 14;
			// 
			// btnOK
			// 
			this->btnOK->Location = System::Drawing::Point(193, 355);
			this->btnOK->Name = L"btnOK";
			this->btnOK->Size = System::Drawing::Size(208, 48);
			this->btnOK->TabIndex = 16;
			this->btnOK->Text = L"OK";
			this->btnOK->UseVisualStyleBackColor = true;
			this->btnOK->Click += gcnew System::EventHandler(this, &RegisterForm::btnOK_Click);
			// 
			// btnCancel
			// 
			this->btnCancel->Location = System::Drawing::Point(425, 355);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(207, 48);
			this->btnCancel->TabIndex = 17;
			this->btnCancel->Text = L"Cancel";
			this->btnCancel->UseVisualStyleBackColor = true;
			this->btnCancel->Click += gcnew System::EventHandler(this, &RegisterForm::btnCancel_Click);
			// 
			// RegisterForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(16, 31);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->ClientSize = System::Drawing::Size(644, 473);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnOK);
			this->Controls->Add(this->tbAge);
			this->Controls->Add(this->tbConfirmPassword);
			this->Controls->Add(this->tbPassword);
			this->Controls->Add(this->tbUsername);
			this->Controls->Add(this->tbSurname);
			this->Controls->Add(this->tbName);
			this->Controls->Add(this->llLogin);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"RegisterForm";
			this->Text = L"RegisterForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void progressBar1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
public: User^ user;
private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
public: bool switchToLogin = false;
private: System::Void llLogin_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	switchToLogin = true;
	this->Close();
}
	   bool isInteger(String^ input) {
		   int result;
		   return Int32::TryParse(input, result);
	   
	   };

private: System::Void btnOK_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ name = this->tbName->Text;
	String^ surname = this->tbSurname->Text;
	String^ username = this->tbUsername->Text;
	String^ password = this->tbPassword->Text;
	String^ confirmPassword = this->tbConfirmPassword->Text;
	String^ age = this->tbAge->Text;

	if (name == "" || surname == "" || username == "" || password == "" || confirmPassword == "" || age == "") {
		MessageBox::Show("Fill all fields", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		
	}
	if (confirmPassword != password) { // if instruction is checking if user enetered confirmatiom password correctly
		MessageBox::Show("Passwords do not match", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	if (!isInteger(age)) { // isIntegral is a outer function, wich were built to check if the entered age is a number
		MessageBox::Show("Age must be a number", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	
	}

	try {
		String^ stringConn{ "Data Source=(localdb)\\ProjectModels;Initial Catalog=mydb;Integrated Security=True;Encrypt=False" };
		
		//Open connection
		SqlConnection conn{stringConn};
		conn.Open();

		//Handle query
		String^ sqlQuery = "INSERT INTO Users(Name,Surname,Login,Pwd,Age) VALUES (@name,@surname,@login,@password,@age)";
		SqlCommand^ command = gcnew SqlCommand(sqlQuery, % conn);
		command->Parameters->AddWithValue("@name",name );
		command->Parameters->AddWithValue("@surname",surname);
		command->Parameters->AddWithValue("@login",username);
		command->Parameters->AddWithValue("@password",password);
		command->Parameters->AddWithValue("@age",Convert::ToInt32(age));

		command->ExecuteNonQuery();

		//updating user data
		user = gcnew User;
		user->name = name;
		user->surname = surname;
		user->username = username;
		user->password = password;
		user->age = Convert::ToInt32(age);

		this->Close();

	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message,"Error",MessageBoxButtons::OK,MessageBoxIcon::Error);
		return;
		
	}
}
};
}
