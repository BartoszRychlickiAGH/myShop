#pragma once

namespace myShop {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for dbdata
	/// </summary>
	public ref class dbdata : public System::Windows::Forms::Form
	{
	public:
		dbdata(int n)
		{
			InitializeComponent();
			try {
				String^ query;
				String^ stringConn = "Data Source=(localdb)\\ProjectModels;Initial Catalog=mydb;Integrated Security=True;Encrypt=False";
				SqlConnection conn{ stringConn };
				conn.Open();

				
				switch (n) {
				case 2:
						labelHeader->Text = "Data Of Products";
						dataView->Columns->Add("ProductID", "ProductID");
						dataView->Columns->Add("ProductName", "ProductName");
						dataView->Columns->Add("Price", "Price");
						dataView->Columns->Add("Quantity", "Quantity");

						//if givenId == "" -> show all data, otherwise show for given ID
						
						query = "SELECT * FROM Products ";
						

						break;
				case 1:
					labelHeader->Text = "Data Of Customers";
					dataView->Columns->Add("CustomerID", "CustomerID");
					dataView->Columns->Add("Name", "Name");
					dataView->Columns->Add("Surname", "Surname");
					dataView->Columns->Add("Login", "Login");
					dataView->Columns->Add("Password", "Password");
					dataView->Columns->Add("Age", "Age");

					//if givenId == "" -> show all data, otherwise show for given ID

					query = "SELECT * FROM Users ";
				
					break;
				case 3:
					labelHeader->Text = "Data Of Orders";
					dataView->Columns->Add("OrderID", "OrderID");
					dataView->Columns->Add("OrderDate", "OrderDate");
					dataView->Columns->Add("CustomerId", "CustomerId");
					dataView->Columns->Add("ProductName", "ProductName");
					dataView->Columns->Add("Quantity", "Quantity");
					dataView->Columns->Add("Price", "Price");

					//if givenId == "" -> show all data, otherwise show for given ID
				
					query = "SELECT * FROM Orders";

					break;
				}
				SqlCommand cmd{ query,% conn };

				SqlDataReader^ reader = cmd.ExecuteReader();

				while (reader->Read()) {
					if (n == 1) { // customers
						dataView->Rows->Add(Convert::ToString(reader->GetInt32(0)), reader->GetString(1), reader->GetString(2), reader->GetString(3), reader->GetString(4), Convert::ToString(reader->GetInt32(5)));
					}
					else if(n==2){ // products
						dataView->Rows->Add(Convert::ToString(reader->GetInt32(0)), reader->GetString(1), Convert::ToString(reader->GetInt32(2)), Convert::ToString(reader->GetInt32(3)));
					}
					else { // orders
						dataView->Rows->Add(Convert::ToString(reader->GetInt32(0)), reader->GetString(1), Convert::ToString(reader->GetInt32(2)), reader->GetString(3), Convert::ToString(reader->GetInt32(4)), Convert::ToString(reader->GetInt32(5)));
					}
				}
				dataView->Update();
				reader->Close();
				conn.Close();
			}
			catch (Exception^ e_e) {
				MessageBox::Show(e_e->Message,"Error",MessageBoxButtons::OK,MessageBoxIcon::Error);
			}


			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~dbdata()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ labelHeader;
	private: System::Windows::Forms::DataGridView^ dataView;

	private: System::Windows::Forms::Button^ btnOK;
	protected:

	protected:

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
			this->labelHeader = (gcnew System::Windows::Forms::Label());
			this->dataView = (gcnew System::Windows::Forms::DataGridView());
			this->btnOK = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataView))->BeginInit();
			this->SuspendLayout();
			// 
			// labelHeader
			// 
			this->labelHeader->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->labelHeader->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelHeader->Location = System::Drawing::Point(12, 9);
			this->labelHeader->Name = L"labelHeader";
			this->labelHeader->Size = System::Drawing::Size(710, 52);
			this->labelHeader->TabIndex = 0;
			this->labelHeader->Text = L"data";
			this->labelHeader->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// dataView
			// 
			this->dataView->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataView->Location = System::Drawing::Point(19, 76);
			this->dataView->Name = L"dataView";
			this->dataView->RowHeadersWidth = 51;
			this->dataView->RowTemplate->Height = 24;
			this->dataView->Size = System::Drawing::Size(703, 424);
			this->dataView->TabIndex = 1;
			// 
			// btnOK
			// 
			this->btnOK->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btnOK->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnOK->Location = System::Drawing::Point(19, 506);
			this->btnOK->Name = L"btnOK";
			this->btnOK->Size = System::Drawing::Size(165, 72);
			this->btnOK->TabIndex = 2;
			this->btnOK->Text = L"OK";
			this->btnOK->UseVisualStyleBackColor = true;
			this->btnOK->Click += gcnew System::EventHandler(this, &dbdata::btnOK_Click);
			// 
			// dbdata
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(16, 31);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LemonChiffon;
			this->ClientSize = System::Drawing::Size(734, 590);
			this->Controls->Add(this->btnOK);
			this->Controls->Add(this->dataView);
			this->Controls->Add(this->labelHeader);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"dbdata";
			this->Text = L"1";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataView))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnOK_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
};
}
