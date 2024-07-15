#pragma once
#include "users.h"
#include "RegisterForm.h"

namespace myShop {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for LoginForm
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		LoginForm(void)
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
		~LoginForm()
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
	private: System::Windows::Forms::TextBox^ tbUsername;
	private: System::Windows::Forms::TextBox^ tbPassword;
	private: System::Windows::Forms::LinkLabel^ llRegister;



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
			this->tbUsername = (gcnew System::Windows::Forms::TextBox());
			this->tbPassword = (gcnew System::Windows::Forms::TextBox());
			this->llRegister = (gcnew System::Windows::Forms::LinkLabel());
			this->btnOK = (gcnew System::Windows::Forms::Button());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(12, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(549, 66);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Login";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->Location = System::Drawing::Point(-1, 134);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(177, 38);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Username:";
			this->label2->Click += gcnew System::EventHandler(this, &LoginForm::label2_Click);
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label3->Location = System::Drawing::Point(-1, 200);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(193, 42);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Password:";
			// 
			// tbUsername
			// 
			this->tbUsername->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tbUsername->Location = System::Drawing::Point(193, 136);
			this->tbUsername->Name = L"tbUsername";
			this->tbUsername->Size = System::Drawing::Size(368, 38);
			this->tbUsername->TabIndex = 3;
			// 
			// tbPassword
			// 
			this->tbPassword->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tbPassword->Location = System::Drawing::Point(193, 206);
			this->tbPassword->Name = L"tbPassword";
			this->tbPassword->PasswordChar = '*';
			this->tbPassword->Size = System::Drawing::Size(368, 38);
			this->tbPassword->TabIndex = 4;
			// 
			// llRegister
			// 
			this->llRegister->AutoSize = true;
			this->llRegister->Location = System::Drawing::Point(441, 339);
			this->llRegister->Name = L"llRegister";
			this->llRegister->Size = System::Drawing::Size(120, 32);
			this->llRegister->TabIndex = 5;
			this->llRegister->TabStop = true;
			this->llRegister->Text = L"Register";
			this->llRegister->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &LoginForm::llRegister_LinkClicked);
			// 
			// btnOK
			// 
			this->btnOK->Location = System::Drawing::Point(193, 267);
			this->btnOK->Name = L"btnOK";
			this->btnOK->Size = System::Drawing::Size(171, 49);
			this->btnOK->TabIndex = 6;
			this->btnOK->Text = L"OK";
			this->btnOK->UseVisualStyleBackColor = true;
			this->btnOK->Click += gcnew System::EventHandler(this, &LoginForm::btnOK_Click);
			// 
			// btnCancel
			// 
			this->btnCancel->Location = System::Drawing::Point(389, 267);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(172, 49);
			this->btnCancel->TabIndex = 7;
			this->btnCancel->Text = L"Cancel";
			this->btnCancel->UseVisualStyleBackColor = true;
			this->btnCancel->Click += gcnew System::EventHandler(this, &LoginForm::btnCancel_Click);
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(16, 31);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->ClientSize = System::Drawing::Size(573, 410);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnOK);
			this->Controls->Add(this->llRegister);
			this->Controls->Add(this->tbPassword);
			this->Controls->Add(this->tbUsername);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"LoginForm";
			this->Text = L"LoginForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
public: User^ user;
private: System::Void btnOK_Click(System::Object^ sender, System::EventArgs^ e) {
	String ^username = this->tbUsername->Text;
	String ^password = this->tbPassword->Text;
	if (username == "" || password == "") {
		MessageBox::Show("Fill all fields", "Error",
			MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	
	try {
		// Open connection
		String^ connString{"Data Source=(localdb)\\ProjectModels;Initial Catalog=mydb;Integrated Security=True;Encrypt=False"};
		SqlConnection sqlConn{ connString };
		sqlConn.Open();

		String^ sqlQuery = "Select * From Users WHERE Login = @Username AND Pwd = @Pwd";
		SqlCommand command(sqlQuery, %sqlConn);
		command.Parameters->AddWithValue("@Username",username);
		command.Parameters->AddWithValue("@Pwd", password);

		SqlDataReader^ reader = command.ExecuteReader();

		if (reader->Read()) {
			user = gcnew User(reader["Name"]->ToString(),
				reader["Surname"]->ToString(), reader["Login"]->ToString(),
				reader["Pwd"]->ToString(), Convert::ToInt32(reader["Age"]));
			


			this->Close();
		
		}
		else {
			MessageBox::Show("Username or password is incorrect", "Error"
				, MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	
	}
	catch (Exception^ e) {
		MessageBox::Show(e->Message, "Error",
			MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	
	}



}
	public: bool switchToRegister = false;
private: System::Void llRegister_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	switchToRegister = true;
	this->Close();
}
};
}
