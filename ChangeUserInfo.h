#pragma once

#include "users.h"
#include "LoginForm.h"

namespace myShop {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ChangeUserInfo
	/// </summary>
	public ref class ChangeUserInfo : public System::Windows::Forms::Form
	{
	public:
		User^ user;
		ChangeUserInfo(User^ user)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->user = user;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ChangeUserInfo()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnCancel;
	protected:
	private: System::Windows::Forms::Button^ btnOK;
	private: System::Windows::Forms::TextBox^ tbAge;
	private: System::Windows::Forms::TextBox^ tbConfirmPassword;
	private: System::Windows::Forms::TextBox^ tbPassword;

	private: System::Windows::Forms::TextBox^ tbSurname;
	private: System::Windows::Forms::TextBox^ tbName;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ InformationLabel;

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
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->btnOK = (gcnew System::Windows::Forms::Button());
			this->tbAge = (gcnew System::Windows::Forms::TextBox());
			this->tbConfirmPassword = (gcnew System::Windows::Forms::TextBox());
			this->tbPassword = (gcnew System::Windows::Forms::TextBox());
			this->tbSurname = (gcnew System::Windows::Forms::TextBox());
			this->tbName = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->InformationLabel = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btnCancel
			// 
			this->btnCancel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnCancel->Location = System::Drawing::Point(533, 445);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(258, 73);
			this->btnCancel->TabIndex = 31;
			this->btnCancel->Text = L"Cancel";
			this->btnCancel->UseVisualStyleBackColor = true;
			this->btnCancel->Click += gcnew System::EventHandler(this, &ChangeUserInfo::btnCancel_Click);
			// 
			// btnOK
			// 
			this->btnOK->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnOK->Location = System::Drawing::Point(230, 445);
			this->btnOK->Name = L"btnOK";
			this->btnOK->Size = System::Drawing::Size(244, 73);
			this->btnOK->TabIndex = 30;
			this->btnOK->Text = L"OK";
			this->btnOK->UseVisualStyleBackColor = true;
			this->btnOK->Click += gcnew System::EventHandler(this, &ChangeUserInfo::btnOK_Click);
			// 
			// tbAge
			// 
			this->tbAge->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->tbAge->Location = System::Drawing::Point(230, 373);
			this->tbAge->Name = L"tbAge";
			this->tbAge->Size = System::Drawing::Size(561, 45);
			this->tbAge->TabIndex = 29;
			// 
			// tbConfirmPassword
			// 
			this->tbConfirmPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->tbConfirmPassword->Location = System::Drawing::Point(314, 316);
			this->tbConfirmPassword->Name = L"tbConfirmPassword";
			this->tbConfirmPassword->PasswordChar = '*';
			this->tbConfirmPassword->Size = System::Drawing::Size(477, 45);
			this->tbConfirmPassword->TabIndex = 28;
			// 
			// tbPassword
			// 
			this->tbPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->tbPassword->Location = System::Drawing::Point(230, 254);
			this->tbPassword->Name = L"tbPassword";
			this->tbPassword->PasswordChar = '*';
			this->tbPassword->Size = System::Drawing::Size(561, 45);
			this->tbPassword->TabIndex = 27;
			// 
			// tbSurname
			// 
			this->tbSurname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->tbSurname->Location = System::Drawing::Point(230, 184);
			this->tbSurname->Name = L"tbSurname";
			this->tbSurname->Size = System::Drawing::Size(561, 45);
			this->tbSurname->TabIndex = 25;
			// 
			// tbName
			// 
			this->tbName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->tbName->Location = System::Drawing::Point(230, 113);
			this->tbName->Name = L"tbName";
			this->tbName->Size = System::Drawing::Size(561, 45);
			this->tbName->TabIndex = 24;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label7->Location = System::Drawing::Point(12, 373);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(84, 38);
			this->label7->TabIndex = 23;
			this->label7->Text = L"Age:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label6->Location = System::Drawing::Point(12, 316);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(287, 38);
			this->label6->TabIndex = 22;
			this->label6->Text = L"confirm Password:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label5->Location = System::Drawing::Point(12, 254);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(171, 38);
			this->label5->TabIndex = 21;
			this->label5->Text = L"Password:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label3->Location = System::Drawing::Point(12, 178);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(158, 38);
			this->label3->TabIndex = 19;
			this->label3->Text = L"Surname:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->Location = System::Drawing::Point(12, 113);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(122, 38);
			this->label2->TabIndex = 18;
			this->label2->Text = L"Name: ";
			// 
			// InformationLabel
			// 
			this->InformationLabel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->InformationLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->InformationLabel->Location = System::Drawing::Point(13, 25);
			this->InformationLabel->Name = L"InformationLabel";
			this->InformationLabel->Size = System::Drawing::Size(778, 64);
			this->InformationLabel->TabIndex = 32;
			this->InformationLabel->Text = L"Change personal data";
			this->InformationLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// ChangeUserInfo
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(16, 31);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Lavender;
			this->ClientSize = System::Drawing::Size(803, 539);
			this->Controls->Add(this->InformationLabel);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnOK);
			this->Controls->Add(this->tbAge);
			this->Controls->Add(this->tbConfirmPassword);
			this->Controls->Add(this->tbPassword);
			this->Controls->Add(this->tbSurname);
			this->Controls->Add(this->tbName);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"ChangeUserInfo";
			this->Text = L"ChangeUserInfo";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	bool isInteger(String^ input) {
		int result;
		return Int32::TryParse(input, result);

	};
private: System::Void btnOK_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ name = this->tbName->Text;
	String^ surname = this->tbSurname->Text;
	String^ password = this->tbPassword->Text;
	String^ confirmPassword = this->tbConfirmPassword->Text;
	String^ age = this->tbAge->Text;

	if (name == "" || surname == "" || password == "" || confirmPassword == "" || age == "") {
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
		String^ stringConn{ "Data Source=(localdb)\\ProjectModels;Initial Catalog=mydb;Integrated Security=True" };

		//Open connection
		SqlConnection conn{ stringConn };
		conn.Open();

		//Handle query
		String^ sqlQuery = "UPDATE Users SET Name=@name,Surname=@surname,Pwd=@password,Age=@age WHERE Login = @username";
		SqlCommand^ command = gcnew SqlCommand(sqlQuery, % conn);
		command->Parameters->AddWithValue("@name", name);
		command->Parameters->AddWithValue("@username", user->username);
		command->Parameters->AddWithValue("@surname", surname);
		command->Parameters->AddWithValue("@password", password);
		command->Parameters->AddWithValue("@age", Convert::ToInt32(age));

		command->ExecuteNonQuery();

		//updating user data
		
		user->name = name;
		user->surname = surname;
		user->password = password;
		user->age = Convert::ToInt32(age);

		this->Close();

	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
}
};
}
