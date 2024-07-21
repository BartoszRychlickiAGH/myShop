#pragma once

namespace myShop {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for CustomerForm
	/// </summary>
	public ref class CustomerForm : public System::Windows::Forms::Form
	{
	public:
		CustomerForm(void)
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
	private: System::Windows::Forms::Label^ llCurrentOrders;
	private: System::Windows::Forms::Label^ label3;






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
			this->llCurrentOrders = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
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
			this->WelcomeLabel->Size = System::Drawing::Size(623, 44);
			this->WelcomeLabel->TabIndex = 0;
			this->WelcomeLabel->Text = L"label1";
			this->WelcomeLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(280, 125);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(355, 39);
			this->label1->TabIndex = 1;
			this->label1->Text = L"User Info:";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// llUserData
			// 
			this->llUserData->Location = System::Drawing::Point(282, 185);
			this->llUserData->Name = L"llUserData";
			this->llUserData->Size = System::Drawing::Size(355, 140);
			this->llUserData->TabIndex = 2;
			this->llUserData->Text = L"UserData";
			this->llUserData->Click += gcnew System::EventHandler(this, &CustomerForm::llUserData_Click);
			// 
			// btnChangeUserData
			// 
			this->btnChangeUserData->Location = System::Drawing::Point(18, 122);
			this->btnChangeUserData->Name = L"btnChangeUserData";
			this->btnChangeUserData->Size = System::Drawing::Size(245, 51);
			this->btnChangeUserData->TabIndex = 3;
			this->btnChangeUserData->Text = L"Change User Info";
			this->btnChangeUserData->UseVisualStyleBackColor = true;
			this->btnChangeUserData->Click += gcnew System::EventHandler(this, &CustomerForm::btnChangeUserData_Click);
			// 
			// btnNewOrder
			// 
			this->btnNewOrder->Location = System::Drawing::Point(18, 224);
			this->btnNewOrder->Name = L"btnNewOrder";
			this->btnNewOrder->Size = System::Drawing::Size(245, 51);
			this->btnNewOrder->TabIndex = 4;
			this->btnNewOrder->Text = L"New Order";
			this->btnNewOrder->UseVisualStyleBackColor = true;
			this->btnNewOrder->Click += gcnew System::EventHandler(this, &CustomerForm::btnNewOrder_Click);
			// 
			// btnManageOrders
			// 
			this->btnManageOrders->Location = System::Drawing::Point(18, 325);
			this->btnManageOrders->Name = L"btnManageOrders";
			this->btnManageOrders->Size = System::Drawing::Size(245, 51);
			this->btnManageOrders->TabIndex = 5;
			this->btnManageOrders->Text = L"Manage Orders";
			this->btnManageOrders->UseVisualStyleBackColor = true;
			this->btnManageOrders->Click += gcnew System::EventHandler(this, &CustomerForm::btnManageOrders_Click);
			// 
			// btnExit
			// 
			this->btnExit->Location = System::Drawing::Point(18, 426);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(245, 51);
			this->btnExit->TabIndex = 6;
			this->btnExit->Text = L"Exit";
			this->btnExit->UseVisualStyleBackColor = true;
			this->btnExit->Click += gcnew System::EventHandler(this, &CustomerForm::btnExit_Click);
			// 
			// llCurrentOrders
			// 
			this->llCurrentOrders->Location = System::Drawing::Point(281, 371);
			this->llCurrentOrders->Name = L"llCurrentOrders";
			this->llCurrentOrders->Size = System::Drawing::Size(355, 163);
			this->llCurrentOrders->TabIndex = 8;
			this->llCurrentOrders->Text = L"UsersOrders";
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label3->Location = System::Drawing::Point(281, 325);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(355, 39);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Current orders:";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label3->Click += gcnew System::EventHandler(this, &CustomerForm::label3_Click);
			// 
			// CustomerForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(16, 31);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Info;
			this->ClientSize = System::Drawing::Size(647, 543);
			this->Controls->Add(this->llCurrentOrders);
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
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void llUserData_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnExit_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnManageOrders_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnNewOrder_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnChangeUserData_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
