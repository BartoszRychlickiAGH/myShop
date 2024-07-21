#pragma once

namespace myShop {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AdminForm
	/// </summary>
	public ref class AdminForm : public System::Windows::Forms::Form
	{
	public:
		AdminForm(void)
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
		~AdminForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnManageUsers;
	private: System::Windows::Forms::Button^ btnManageProducts;
	protected:


	private: System::Windows::Forms::Button^ btnManageOrders;

	private: System::Windows::Forms::Button^ btnExit;

	private: System::Windows::Forms::Label^ WelcomeLabel;
	private: System::Windows::Forms::NumericUpDown^ nUnDManageUsers;
	private: System::Windows::Forms::NumericUpDown^ nUnDManageProducts;




	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::NumericUpDown^ nUnDManageOrders;

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
			this->btnManageUsers = (gcnew System::Windows::Forms::Button());
			this->btnManageProducts = (gcnew System::Windows::Forms::Button());
			this->btnManageOrders = (gcnew System::Windows::Forms::Button());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->WelcomeLabel = (gcnew System::Windows::Forms::Label());
			this->nUnDManageUsers = (gcnew System::Windows::Forms::NumericUpDown());
			this->nUnDManageProducts = (gcnew System::Windows::Forms::NumericUpDown());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->nUnDManageOrders = (gcnew System::Windows::Forms::NumericUpDown());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nUnDManageUsers))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nUnDManageProducts))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nUnDManageOrders))->BeginInit();
			this->SuspendLayout();
			// 
			// btnManageUsers
			// 
			this->btnManageUsers->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btnManageUsers->Location = System::Drawing::Point(38, 131);
			this->btnManageUsers->Name = L"btnManageUsers";
			this->btnManageUsers->Size = System::Drawing::Size(178, 82);
			this->btnManageUsers->TabIndex = 0;
			this->btnManageUsers->Text = L"Manage Users";
			this->btnManageUsers->UseVisualStyleBackColor = true;
			this->btnManageUsers->Click += gcnew System::EventHandler(this, &AdminForm::button1_Click);
			// 
			// btnManageProducts
			// 
			this->btnManageProducts->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btnManageProducts->Location = System::Drawing::Point(38, 311);
			this->btnManageProducts->Name = L"btnManageProducts";
			this->btnManageProducts->Size = System::Drawing::Size(178, 82);
			this->btnManageProducts->TabIndex = 1;
			this->btnManageProducts->Text = L"Manage Products";
			this->btnManageProducts->UseVisualStyleBackColor = true;
			this->btnManageProducts->Click += gcnew System::EventHandler(this, &AdminForm::btnManageProducts_Click);
			// 
			// btnManageOrders
			// 
			this->btnManageOrders->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btnManageOrders->Location = System::Drawing::Point(465, 131);
			this->btnManageOrders->Name = L"btnManageOrders";
			this->btnManageOrders->Size = System::Drawing::Size(178, 82);
			this->btnManageOrders->TabIndex = 2;
			this->btnManageOrders->Text = L"Manage Orders";
			this->btnManageOrders->UseVisualStyleBackColor = true;
			// 
			// btnExit
			// 
			this->btnExit->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btnExit->Location = System::Drawing::Point(465, 311);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(178, 82);
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
			this->WelcomeLabel->Location = System::Drawing::Point(12, 35);
			this->WelcomeLabel->Name = L"WelcomeLabel";
			this->WelcomeLabel->Size = System::Drawing::Size(805, 55);
			this->WelcomeLabel->TabIndex = 4;
			this->WelcomeLabel->Text = L"label1";
			this->WelcomeLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->WelcomeLabel->Click += gcnew System::EventHandler(this, &AdminForm::label1_Click);
			// 
			// nUnDManageUsers
			// 
			this->nUnDManageUsers->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->nUnDManageUsers->Location = System::Drawing::Point(222, 175);
			this->nUnDManageUsers->Name = L"nUnDManageUsers";
			this->nUnDManageUsers->Size = System::Drawing::Size(120, 38);
			this->nUnDManageUsers->TabIndex = 5;
			// 
			// nUnDManageProducts
			// 
			this->nUnDManageProducts->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->nUnDManageProducts->Location = System::Drawing::Point(222, 355);
			this->nUnDManageProducts->Name = L"nUnDManageProducts";
			this->nUnDManageProducts->Size = System::Drawing::Size(120, 38);
			this->nUnDManageProducts->TabIndex = 6;
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(216, 131);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(134, 32);
			this->label1->TabIndex = 8;
			this->label1->Text = L"User\'s ID:";
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(222, 311);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(187, 32);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Products\'s ID:";
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(649, 131);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(147, 32);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Order\'s ID:";
			// 
			// nUnDManageOrders
			// 
			this->nUnDManageOrders->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->nUnDManageOrders->Location = System::Drawing::Point(649, 166);
			this->nUnDManageOrders->Name = L"nUnDManageOrders";
			this->nUnDManageOrders->Size = System::Drawing::Size(120, 38);
			this->nUnDManageOrders->TabIndex = 11;
			// 
			// AdminForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(16, 31);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::OldLace;
			this->ClientSize = System::Drawing::Size(829, 487);
			this->Controls->Add(this->nUnDManageOrders);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->nUnDManageProducts);
			this->Controls->Add(this->nUnDManageUsers);
			this->Controls->Add(this->WelcomeLabel);
			this->Controls->Add(this->btnExit);
			this->Controls->Add(this->btnManageOrders);
			this->Controls->Add(this->btnManageProducts);
			this->Controls->Add(this->btnManageUsers);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"AdminForm";
			this->Text = L"AdminForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nUnDManageUsers))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nUnDManageProducts))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nUnDManageOrders))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void btnExit_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void btnManageProducts_Click(System::Object^ sender, System::EventArgs^ e) {

}
};
}
