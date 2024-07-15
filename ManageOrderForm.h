#pragma once

namespace myShop {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ManageOrderForm
	/// </summary>
	public ref class ManageOrderForm : public System::Windows::Forms::Form
	{
	public:
		ManageOrderForm(void)
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
		~ManageOrderForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnCancel;
	protected:
	private: System::Windows::Forms::Button^ btnOK;
	private: System::Windows::Forms::TextBox^ tbDate;
	private: System::Windows::Forms::TextBox^ tbQuantity;
	private: System::Windows::Forms::TextBox^ tbPrice;
	private: System::Windows::Forms::TextBox^ tbCustomerID;
	private: System::Windows::Forms::TextBox^ tbProductName;





	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
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
			this->tbDate = (gcnew System::Windows::Forms::TextBox());
			this->tbQuantity = (gcnew System::Windows::Forms::TextBox());
			this->tbPrice = (gcnew System::Windows::Forms::TextBox());
			this->tbCustomerID = (gcnew System::Windows::Forms::TextBox());
			this->tbProductName = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->InformationLabel = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btnCancel
			// 
			this->btnCancel->Location = System::Drawing::Point(531, 414);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(223, 71);
			this->btnCancel->TabIndex = 32;
			this->btnCancel->Text = L"Cancel";
			this->btnCancel->UseVisualStyleBackColor = true;
			// 
			// btnOK
			// 
			this->btnOK->Location = System::Drawing::Point(278, 414);
			this->btnOK->Name = L"btnOK";
			this->btnOK->Size = System::Drawing::Size(224, 71);
			this->btnOK->TabIndex = 31;
			this->btnOK->Text = L"OK";
			this->btnOK->UseVisualStyleBackColor = true;
			// 
			// tbDate
			// 
			this->tbDate->Location = System::Drawing::Point(278, 355);
			this->tbDate->Name = L"tbDate";
			this->tbDate->Size = System::Drawing::Size(476, 38);
			this->tbDate->TabIndex = 30;
			// 
			// tbQuantity
			// 
			this->tbQuantity->Location = System::Drawing::Point(278, 296);
			this->tbQuantity->Name = L"tbQuantity";
			this->tbQuantity->Size = System::Drawing::Size(476, 38);
			this->tbQuantity->TabIndex = 28;
			// 
			// tbPrice
			// 
			this->tbPrice->Location = System::Drawing::Point(278, 231);
			this->tbPrice->Name = L"tbPrice";
			this->tbPrice->Size = System::Drawing::Size(476, 38);
			this->tbPrice->TabIndex = 27;
			// 
			// tbCustomerID
			// 
			this->tbCustomerID->Location = System::Drawing::Point(278, 172);
			this->tbCustomerID->Name = L"tbCustomerID";
			this->tbCustomerID->Size = System::Drawing::Size(476, 38);
			this->tbCustomerID->TabIndex = 26;
			// 
			// tbProductName
			// 
			this->tbProductName->Location = System::Drawing::Point(278, 112);
			this->tbProductName->Name = L"tbProductName";
			this->tbProductName->Size = System::Drawing::Size(476, 38);
			this->tbProductName->TabIndex = 25;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label7->Location = System::Drawing::Point(29, 355);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(98, 39);
			this->label7->TabIndex = 24;
			this->label7->Text = L"Date:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label5->Location = System::Drawing::Point(29, 296);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(143, 39);
			this->label5->TabIndex = 22;
			this->label5->Text = L"Quantity";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label4->Location = System::Drawing::Point(29, 231);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(104, 39);
			this->label4->TabIndex = 21;
			this->label4->Text = L"Price:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label3->Location = System::Drawing::Point(29, 172);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(217, 39);
			this->label3->TabIndex = 20;
			this->label3->Text = L"Customer ID:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->Location = System::Drawing::Point(29, 111);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(243, 39);
			this->label2->TabIndex = 19;
			this->label2->Text = L"Product Name:";
			// 
			// InformationLabel
			// 
			this->InformationLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->InformationLabel->Location = System::Drawing::Point(116, 9);
			this->InformationLabel->Name = L"InformationLabel";
			this->InformationLabel->Size = System::Drawing::Size(540, 61);
			this->InformationLabel->TabIndex = 18;
			this->InformationLabel->Text = L"changeOrderData..";
			this->InformationLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// ManageOrderForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(16, 31);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Lavender;
			this->ClientSize = System::Drawing::Size(781, 537);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnOK);
			this->Controls->Add(this->tbDate);
			this->Controls->Add(this->tbQuantity);
			this->Controls->Add(this->tbPrice);
			this->Controls->Add(this->tbCustomerID);
			this->Controls->Add(this->tbProductName);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->InformationLabel);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->Name = L"ManageOrderForm";
			this->Text = L"ManageOrder";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
