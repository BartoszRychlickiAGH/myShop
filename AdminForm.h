#pragma once
#include "LoginForm.h"
#include "users.h"
#include "ChangeUserInfo.h"
#include "ManageOrderForm.h"
#include "ManageProduct.h"
#include "dbdata.h"

namespace myShop {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace::System::Data::SqlClient;
	/// <summary>
	/// Summary for AdminForm
	/// </summary>
	public ref class AdminForm : public System::Windows::Forms::Form
	{
	public:
		User^ client;
		AdminForm(User^ user)
		{
			client = user;
			InitializeComponent();
			WelcomeLabel->Text = "Welcome " + user->name + " "  + user->surname;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AdminForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnManageUser;
	private: System::Windows::Forms::Button^ btnManageProduct;
	protected:


	protected:


	private: System::Windows::Forms::Button^ btnManageOrders;

	private: System::Windows::Forms::Button^ btnExit;

	private: System::Windows::Forms::Label^ WelcomeLabel;


	private: System::Windows::Forms::Button^ btnShowOrders;
	private: System::Windows::Forms::Button^ btnShowProducts;


	private: System::Windows::Forms::Button^ btnShowUsers;
	private: System::Windows::Forms::TextBox^ tbUserId;
	private: System::Windows::Forms::Label^ label1;













	protected:

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
			this->btnManageUser = (gcnew System::Windows::Forms::Button());
			this->btnManageProduct = (gcnew System::Windows::Forms::Button());
			this->btnManageOrders = (gcnew System::Windows::Forms::Button());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->WelcomeLabel = (gcnew System::Windows::Forms::Label());
			this->btnShowOrders = (gcnew System::Windows::Forms::Button());
			this->btnShowProducts = (gcnew System::Windows::Forms::Button());
			this->btnShowUsers = (gcnew System::Windows::Forms::Button());
			this->tbUserId = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btnManageUser
			// 
			this->btnManageUser->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btnManageUser->Location = System::Drawing::Point(6, 113);
			this->btnManageUser->Name = L"btnManageUser";
			this->btnManageUser->Size = System::Drawing::Size(195, 77);
			this->btnManageUser->TabIndex = 0;
			this->btnManageUser->Text = L"Manage User";
			this->btnManageUser->UseVisualStyleBackColor = true;
			this->btnManageUser->Click += gcnew System::EventHandler(this, &AdminForm::button1_Click);
			// 
			// btnManageProduct
			// 
			this->btnManageProduct->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btnManageProduct->Location = System::Drawing::Point(317, 113);
			this->btnManageProduct->Name = L"btnManageProduct";
			this->btnManageProduct->Size = System::Drawing::Size(195, 77);
			this->btnManageProduct->TabIndex = 1;
			this->btnManageProduct->Text = L"Manage Product";
			this->btnManageProduct->UseVisualStyleBackColor = true;
			this->btnManageProduct->Click += gcnew System::EventHandler(this, &AdminForm::btnManageProducts_Click);
			// 
			// btnManageOrders
			// 
			this->btnManageOrders->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btnManageOrders->Location = System::Drawing::Point(616, 113);
			this->btnManageOrders->Name = L"btnManageOrders";
			this->btnManageOrders->Size = System::Drawing::Size(195, 77);
			this->btnManageOrders->TabIndex = 2;
			this->btnManageOrders->Text = L"Manage Order";
			this->btnManageOrders->UseVisualStyleBackColor = true;
			this->btnManageOrders->Click += gcnew System::EventHandler(this, &AdminForm::btnManageOrders_Click);
			// 
			// btnExit
			// 
			this->btnExit->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btnExit->Location = System::Drawing::Point(616, 309);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(195, 77);
			this->btnExit->TabIndex = 3;
			this->btnExit->Text = L"Exit";
			this->btnExit->UseVisualStyleBackColor = true;
			this->btnExit->Click += gcnew System::EventHandler(this, &AdminForm::btnExit_Click);
			// 
			// WelcomeLabel
			// 
			this->WelcomeLabel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->WelcomeLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->WelcomeLabel->Location = System::Drawing::Point(23, 41);
			this->WelcomeLabel->Name = L"WelcomeLabel";
			this->WelcomeLabel->Size = System::Drawing::Size(809, 55);
			this->WelcomeLabel->TabIndex = 4;
			this->WelcomeLabel->Text = L"label1";
			this->WelcomeLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->WelcomeLabel->Click += gcnew System::EventHandler(this, &AdminForm::label1_Click);
			// 
			// btnShowOrders
			// 
			this->btnShowOrders->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btnShowOrders->Location = System::Drawing::Point(409, 309);
			this->btnShowOrders->Name = L"btnShowOrders";
			this->btnShowOrders->Size = System::Drawing::Size(195, 77);
			this->btnShowOrders->TabIndex = 9;
			this->btnShowOrders->Text = L"Show Orders";
			this->btnShowOrders->UseVisualStyleBackColor = true;
			this->btnShowOrders->Click += gcnew System::EventHandler(this, &AdminForm::btnShowOrders_Click);
			// 
			// btnShowProducts
			// 
			this->btnShowProducts->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btnShowProducts->Location = System::Drawing::Point(208, 309);
			this->btnShowProducts->Name = L"btnShowProducts";
			this->btnShowProducts->Size = System::Drawing::Size(195, 77);
			this->btnShowProducts->TabIndex = 8;
			this->btnShowProducts->Text = L"Show Products";
			this->btnShowProducts->UseVisualStyleBackColor = true;
			this->btnShowProducts->Click += gcnew System::EventHandler(this, &AdminForm::btnShowProducts_Click);
			// 
			// btnShowUsers
			// 
			this->btnShowUsers->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btnShowUsers->Location = System::Drawing::Point(-9, 309);
			this->btnShowUsers->Name = L"btnShowUsers";
			this->btnShowUsers->Size = System::Drawing::Size(195, 77);
			this->btnShowUsers->TabIndex = 7;
			this->btnShowUsers->Text = L"Show Users";
			this->btnShowUsers->UseVisualStyleBackColor = true;
			this->btnShowUsers->Click += gcnew System::EventHandler(this, &AdminForm::btnShowUsers_Click);
			// 
			// tbUserId
			// 
			this->tbUserId->Location = System::Drawing::Point(5, 252);
			this->tbUserId->Name = L"tbUserId";
			this->tbUserId->Size = System::Drawing::Size(806, 38);
			this->tbUserId->TabIndex = 10;
			this->tbUserId->TextChanged += gcnew System::EventHandler(this, &AdminForm::textBox1_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(0, 213);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(123, 36);
			this->label1->TabIndex = 11;
			this->label1->Text = L"User ID:";
			// 
			// AdminForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(16, 31);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightCyan;
			this->ClientSize = System::Drawing::Size(844, 428);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->tbUserId);
			this->Controls->Add(this->btnShowOrders);
			this->Controls->Add(this->btnShowProducts);
			this->Controls->Add(this->btnShowUsers);
			this->Controls->Add(this->WelcomeLabel);
			this->Controls->Add(this->btnExit);
			this->Controls->Add(this->btnManageOrders);
			this->Controls->Add(this->btnManageProduct);
			this->Controls->Add(this->btnManageUser);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"AdminForm";
			this->Text = L"AdminForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		
		if (tbUserId->Text == "") {
			MessageBox::Show("Please enter user id");
			return;
		}
		
		this->Hide();
		try {
			String^ givenId = tbUserId->Text;
			int^ userId = Convert::ToInt32(givenId);
			ChangeUserInfo^ changeUserInfo = gcnew ChangeUserInfo(client, userId);
			changeUserInfo->ShowDialog();
		}
		catch (Exception^ ej) {
			MessageBox::Show(ej->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		catch (String^ sf) {
			MessageBox::Show(sf, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		this->Show();

	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void btnExit_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void btnManageProducts_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();

	ManageProduct form;

	form.ShowDialog();
	
	this->Show();
}
private: System::Void btnManageOrders_Click(System::Object^ sender, System::EventArgs^ e) {
	if (tbUserId->Text == "") {
		MessageBox::Show("Please enter user id");
		return;
	}

	this->Hide();
	try {
		int^ userId = Convert::ToInt32(tbUserId->Text);
		ManageOrderForm^ manageOrderForm = gcnew ManageOrderForm(client, userId);
		manageOrderForm->ShowDialog();
	}
	catch (Exception^ em) {
		MessageBox::Show(em->Message,"Error",MessageBoxButtons::OK,MessageBoxIcon::Error);
	}
	catch (String^ s) {
		MessageBox::Show(s,"Error",MessageBoxButtons::OK,MessageBoxIcon::Error);
	}
	this->Show();
}
	public: int n{ 0 };
	public: String^ stringGivenID{};
private: System::Void btnShowUsers_Click(System::Object^ sender, System::EventArgs^ e) {
	n = 1;
	dbdata^ form = gcnew dbdata(n);
	form->ShowDialog();

}
private: System::Void btnShowProducts_Click(System::Object^ sender, System::EventArgs^ e) {
	n = 2;
	dbdata^ form = gcnew dbdata(n);
	form->ShowDialog();
}
private: System::Void btnShowOrders_Click(System::Object^ sender, System::EventArgs^ e) {
	n = 3;
	dbdata^ form = gcnew dbdata(n);
	form->ShowDialog();
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
