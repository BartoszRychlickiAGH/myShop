#pragma once

namespace myShop {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ChangeProductData
	/// </summary>
	public ref class ChangeProductData : public System::Windows::Forms::Form
	{
	public:
		ChangeProductData(void)
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
		~ChangeProductData()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnCancel;
	protected:
	private: System::Windows::Forms::Button^ btnOK;
	private: System::Windows::Forms::TextBox^ tbPrice;
	private: System::Windows::Forms::TextBox^ tbProductName;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ tbQuantity;

	private: System::Windows::Forms::Label^ label1;
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
			this->tbPrice = (gcnew System::Windows::Forms::TextBox());
			this->tbProductName = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tbQuantity = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->InformationLabel = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btnCancel
			// 
			this->btnCancel->Location = System::Drawing::Point(509, 396);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(234, 64);
			this->btnCancel->TabIndex = 13;
			this->btnCancel->Text = L"Cancel";
			this->btnCancel->UseVisualStyleBackColor = true;
			// 
			// btnOK
			// 
			this->btnOK->Location = System::Drawing::Point(268, 396);
			this->btnOK->Name = L"btnOK";
			this->btnOK->Size = System::Drawing::Size(236, 64);
			this->btnOK->TabIndex = 12;
			this->btnOK->Text = L"OK";
			this->btnOK->UseVisualStyleBackColor = true;
			// 
			// tbPrice
			// 
			this->tbPrice->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tbPrice->Location = System::Drawing::Point(268, 235);
			this->tbPrice->Name = L"tbPrice";
			this->tbPrice->Size = System::Drawing::Size(475, 38);
			this->tbPrice->TabIndex = 11;
			// 
			// tbProductName
			// 
			this->tbProductName->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tbProductName->Location = System::Drawing::Point(268, 147);
			this->tbProductName->Name = L"tbProductName";
			this->tbProductName->Size = System::Drawing::Size(475, 38);
			this->tbProductName->TabIndex = 10;
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label3->Location = System::Drawing::Point(30, 235);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(113, 42);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Price:";
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->Location = System::Drawing::Point(30, 147);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(235, 38);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Product Name:";
			this->label2->Click += gcnew System::EventHandler(this, &ChangeProductData::label2_Click);
			// 
			// tbQuantity
			// 
			this->tbQuantity->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tbQuantity->Location = System::Drawing::Point(268, 328);
			this->tbQuantity->Name = L"tbQuantity";
			this->tbQuantity->Size = System::Drawing::Size(475, 38);
			this->tbQuantity->TabIndex = 15;
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(30, 328);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(167, 42);
			this->label1->TabIndex = 14;
			this->label1->Text = L"Quantity:";
			// 
			// InformationLabel
			// 
			this->InformationLabel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->InformationLabel->BackColor = System::Drawing::Color::Lavender;
			this->InformationLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->InformationLabel->Location = System::Drawing::Point(12, 9);
			this->InformationLabel->Name = L"InformationLabel";
			this->InformationLabel->Size = System::Drawing::Size(731, 87);
			this->InformationLabel->TabIndex = 16;
			this->InformationLabel->Text = L"changeDataOf...";
			this->InformationLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// ChangeProductData
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(16, 31);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Lavender;
			this->ClientSize = System::Drawing::Size(785, 571);
			this->Controls->Add(this->InformationLabel);
			this->Controls->Add(this->tbQuantity);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnOK);
			this->Controls->Add(this->tbPrice);
			this->Controls->Add(this->tbProductName);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->Name = L"ChangeProductData";
			this->Text = L"ChangeProductData";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
