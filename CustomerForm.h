#pragma once
//blazor
#include "LoginForm.h"
#include "users.h"
#include <iostream>
#include "orders.h"
#include "NewOrder.h"
#include "ManageOrderForm.h"
#include "ChangeUserInfo.h"


namespace myShop {
	
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;
	/// <summary>
	/// Summary for CustomerForm
	/// </summary>
	
	

	public ref class CustomerForm : public System::Windows::Forms::Form
	{
	public:
		User^ customer = gcnew User;
		void uploadOrders() {
			try {
				int n{0};
				String^ connString{ "Data Source=(localdb)\\ProjectModels;Initial Catalog=mydb;Integrated Security=True" };
				SqlConnection connection{ connString };
				connection.Open();
				
				String^ query = "SELECT COUNT(OrderId) FROM ORDERS WHERE CustomerId = @customerId";

				SqlCommand cmd{ query,% connection };
				cmd.Parameters->AddWithValue("@customerId", customer->Id);

				SqlDataReader^ reader2 = cmd.ExecuteReader();
				
				if (reader2->Read()) {
					n = reader2->GetInt32(0);
				}
				reader2->Close();


				String^ sqlQuery = "SELECT OrderId,OrderDate,CustomerId,ProductName,Quantity,OrderPrice FROM orders WHERE CustomerId = @customerId";
				
				SqlCommand command{ sqlQuery,% connection };
				command.Parameters->AddWithValue("@customerId", customer->Id);
				

				SqlDataReader^ reader = command.ExecuteReader();


				dataView->Rows->Clear();
					
				Order^ order = gcnew Order;


				for (int i = 1; i <= n;++i) {
						
					reader->Read();

					order->Id = reader->GetInt32(0);
					order->OrderDate = reader->GetString(1);
					order->CustomerId = reader->GetInt32(2);
					order->ProductName = reader->GetString(3);
					order->Quantity = reader->GetInt32(4);
					order->Price = reader->GetInt32(5);


					dataView->Rows->Add(order->Id, order->ProductName, order->Price + "   PLN", order->Quantity + "   psc", order->OrderDate);

				}
				

				WelcomeLabel->Text = "Welcome " + customer->name + " " + customer->surname + "!";
				llUser->Text = "Name: " + customer->name + "\nSurname: " + customer->surname + "\nUsername: " + customer->username + "\nAge: " + customer->age;

				reader->Close();
				connection.Close();
			}
			catch (Exception^ e) {
				MessageBox::Show(e->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}

		CustomerForm(User^ user)
		{
			InitializeComponent();
			
			customer = user;
			
			uploadOrders();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~CustomerForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ WelcomeLabel;
	protected:

	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ llUserData;
	private: System::Windows::Forms::Button^ btnChangeUserData;
	private: System::Windows::Forms::Button^ btnNewOrder;
	private: System::Windows::Forms::Button^ btnManageOrders;
	private: System::Windows::Forms::Button^ btnExit;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::DataGridView^ dataView;

	private: System::Windows::Forms::Label^ llUser;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ OrderId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ProductName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Price;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Quantity;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ OrderDate;

















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
			this->WelcomeLabel = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->llUserData = (gcnew System::Windows::Forms::Label());
			this->btnChangeUserData = (gcnew System::Windows::Forms::Button());
			this->btnNewOrder = (gcnew System::Windows::Forms::Button());
			this->btnManageOrders = (gcnew System::Windows::Forms::Button());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->dataView = (gcnew System::Windows::Forms::DataGridView());
			this->OrderId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ProductName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Price = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Quantity = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->OrderDate = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->llUser = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataView))->BeginInit();
			this->SuspendLayout();
			// 
			// WelcomeLabel
			// 
			this->WelcomeLabel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->WelcomeLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->WelcomeLabel->Location = System::Drawing::Point(14, 29);
			this->WelcomeLabel->Name = L"WelcomeLabel";
			this->WelcomeLabel->Size = System::Drawing::Size(1065, 44);
			this->WelcomeLabel->TabIndex = 0;
			this->WelcomeLabel->Text = L"label1";
			this->WelcomeLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(280, 125);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(814, 39);
			this->label1->TabIndex = 1;
			this->label1->Text = L"User Info:";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// llUserData
			// 
			this->llUserData->Location = System::Drawing::Point(0, 0);
			this->llUserData->Name = L"llUserData";
			this->llUserData->Size = System::Drawing::Size(100, 23);
			this->llUserData->TabIndex = 10;
			// 
			// btnChangeUserData
			// 
			this->btnChangeUserData->Location = System::Drawing::Point(3, 122);
			this->btnChangeUserData->Name = L"btnChangeUserData";
			this->btnChangeUserData->Size = System::Drawing::Size(260, 51);
			this->btnChangeUserData->TabIndex = 3;
			this->btnChangeUserData->Text = L"Change User Info";
			this->btnChangeUserData->UseVisualStyleBackColor = true;
			this->btnChangeUserData->Click += gcnew System::EventHandler(this, &CustomerForm::btnChangeUserData_Click);
			// 
			// btnNewOrder
			// 
			this->btnNewOrder->Location = System::Drawing::Point(3, 224);
			this->btnNewOrder->Name = L"btnNewOrder";
			this->btnNewOrder->Size = System::Drawing::Size(260, 51);
			this->btnNewOrder->TabIndex = 4;
			this->btnNewOrder->Text = L"New Order";
			this->btnNewOrder->UseVisualStyleBackColor = true;
			this->btnNewOrder->Click += gcnew System::EventHandler(this, &CustomerForm::btnNewOrder_Click);
			// 
			// btnManageOrders
			// 
			this->btnManageOrders->Location = System::Drawing::Point(3, 325);
			this->btnManageOrders->Name = L"btnManageOrders";
			this->btnManageOrders->Size = System::Drawing::Size(260, 91);
			this->btnManageOrders->TabIndex = 5;
			this->btnManageOrders->Text = L"Manage Orders";
			this->btnManageOrders->UseVisualStyleBackColor = true;
			this->btnManageOrders->Click += gcnew System::EventHandler(this, &CustomerForm::btnManageOrders_Click);
			// 
			// btnExit
			// 
			this->btnExit->Location = System::Drawing::Point(3, 452);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(260, 65);
			this->btnExit->TabIndex = 6;
			this->btnExit->Text = L"Exit";
			this->btnExit->UseVisualStyleBackColor = true;
			this->btnExit->Click += gcnew System::EventHandler(this, &CustomerForm::btnExit_Click);
			// 
			// label3
			// 
			this->label3->Location = System::Drawing::Point(0, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(100, 23);
			this->label3->TabIndex = 9;
			// 
			// dataView
			// 
			this->dataView->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataView->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->OrderId, this->ProductName,
					this->Price, this->Quantity, this->OrderDate
			});
			this->dataView->Location = System::Drawing::Point(294, 325);
			this->dataView->Name = L"dataView";
			this->dataView->RowHeadersWidth = 51;
			this->dataView->RowTemplate->Height = 24;
			this->dataView->Size = System::Drawing::Size(790, 214);
			this->dataView->TabIndex = 8;
			// 
			// OrderId
			// 
			this->OrderId->HeaderText = L"OrderId";
			this->OrderId->MinimumWidth = 6;
			this->OrderId->Name = L"OrderId";
			this->OrderId->Width = 125;
			// 
			// ProductName
			// 
			this->ProductName->HeaderText = L"ProductName";
			this->ProductName->MinimumWidth = 6;
			this->ProductName->Name = L"ProductName";
			this->ProductName->Width = 190;
			// 
			// Price
			// 
			this->Price->HeaderText = L"Price";
			this->Price->MinimumWidth = 6;
			this->Price->Name = L"Price";
			this->Price->Width = 140;
			// 
			// Quantity
			// 
			this->Quantity->HeaderText = L"Quantity";
			this->Quantity->MinimumWidth = 6;
			this->Quantity->Name = L"Quantity";
			this->Quantity->Width = 130;
			// 
			// OrderDate
			// 
			this->OrderDate->HeaderText = L"OrderDate";
			this->OrderDate->MinimumWidth = 6;
			this->OrderDate->Name = L"OrderDate";
			this->OrderDate->Width = 150;
			// 
			// llUser
			// 
			this->llUser->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->llUser->BackColor = System::Drawing::Color::LightSteelBlue;
			this->llUser->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->llUser->Location = System::Drawing::Point(287, 181);
			this->llUser->Name = L"llUser";
			this->llUser->Size = System::Drawing::Size(790, 131);
			this->llUser->TabIndex = 11;
			this->llUser->Text = L"User info";
			this->llUser->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->llUser->Click += gcnew System::EventHandler(this, &CustomerForm::label2_Click);
			// 
			// CustomerForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(16, 31);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->ClientSize = System::Drawing::Size(1089, 551);
			this->Controls->Add(this->llUser);
			this->Controls->Add(this->dataView);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->btnExit);
			this->Controls->Add(this->btnManageOrders);
			this->Controls->Add(this->btnNewOrder);
			this->Controls->Add(this->btnChangeUserData);
			this->Controls->Add(this->llUserData);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->WelcomeLabel);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"CustomerForm";
			this->Text = L"CustomerForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataView))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnExit_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
}
private: System::Void btnManageOrders_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		myShop::ManageOrderForm^ manageOrder = gcnew myShop::ManageOrderForm(customer,0);
		manageOrder->ShowDialog();
		
		uploadOrders();
		this->Show();
}
private: System::Void btnNewOrder_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	myShop::NewOrder^ newOrder = gcnew myShop::NewOrder(customer);

	newOrder->ShowDialog();

	uploadOrders();
	this->Show();
}
private: System::Void btnChangeUserData_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	myShop::ChangeUserInfo^ changeUserInfo = gcnew myShop::ChangeUserInfo(customer,0);
	changeUserInfo->ShowDialog();
	uploadOrders();
	this->Show();
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
