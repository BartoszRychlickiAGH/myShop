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
	/// Summary for ManageProduct
	/// </summary>
	public ref class ManageProduct : public System::Windows::Forms::Form
	{
	public:
		ManageProduct(void)
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
		~ManageProduct()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ tbQuantity;

	private: System::Windows::Forms::TextBox^ tbPrice;

	private: System::Windows::Forms::TextBox^ tbProductName;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ btnDelete;
	private: System::Windows::Forms::Button^ btnCancel;
	private: System::Windows::Forms::Button^ btnEdit;

	private: System::Windows::Forms::Button^ btnAdd;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tbQuantity = (gcnew System::Windows::Forms::TextBox());
			this->tbPrice = (gcnew System::Windows::Forms::TextBox());
			this->tbProductName = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->btnEdit = (gcnew System::Windows::Forms::Button());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(1, 26);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(969, 46);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Manage product";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tbQuantity
			// 
			this->tbQuantity->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->tbQuantity->Location = System::Drawing::Point(268, 243);
			this->tbQuantity->Name = L"tbQuantity";
			this->tbQuantity->Size = System::Drawing::Size(472, 45);
			this->tbQuantity->TabIndex = 33;
			// 
			// tbPrice
			// 
			this->tbPrice->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->tbPrice->Location = System::Drawing::Point(268, 174);
			this->tbPrice->Name = L"tbPrice";
			this->tbPrice->Size = System::Drawing::Size(472, 45);
			this->tbPrice->TabIndex = 32;
			// 
			// tbProductName
			// 
			this->tbProductName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->tbProductName->Location = System::Drawing::Point(268, 109);
			this->tbProductName->Name = L"tbProductName";
			this->tbProductName->Size = System::Drawing::Size(472, 45);
			this->tbProductName->TabIndex = 31;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label5->Location = System::Drawing::Point(79, 243);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(148, 38);
			this->label5->TabIndex = 30;
			this->label5->Text = L"Quantity:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label3->Location = System::Drawing::Point(126, 181);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(101, 38);
			this->label3->TabIndex = 29;
			this->label3->Text = L"Price:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->Location = System::Drawing::Point(1, 112);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(235, 38);
			this->label2->TabIndex = 28;
			this->label2->Text = L"Product Name:";
			// 
			// btnDelete
			// 
			this->btnDelete->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnDelete->Location = System::Drawing::Point(786, 225);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(195, 63);
			this->btnDelete->TabIndex = 36;
			this->btnDelete->Text = L"Delete";
			this->btnDelete->UseVisualStyleBackColor = true;
			this->btnDelete->Click += gcnew System::EventHandler(this, &ManageProduct::btnDelete_Click);
			// 
			// btnCancel
			// 
			this->btnCancel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnCancel->Location = System::Drawing::Point(786, 294);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(195, 63);
			this->btnCancel->TabIndex = 35;
			this->btnCancel->Text = L"Cancel";
			this->btnCancel->UseVisualStyleBackColor = true;
			this->btnCancel->Click += gcnew System::EventHandler(this, &ManageProduct::btnCancel_Click);
			// 
			// btnEdit
			// 
			this->btnEdit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnEdit->Location = System::Drawing::Point(786, 156);
			this->btnEdit->Name = L"btnEdit";
			this->btnEdit->Size = System::Drawing::Size(195, 63);
			this->btnEdit->TabIndex = 34;
			this->btnEdit->Text = L"Edit";
			this->btnEdit->UseVisualStyleBackColor = true;
			this->btnEdit->Click += gcnew System::EventHandler(this, &ManageProduct::btnOK_Click);
			// 
			// btnAdd
			// 
			this->btnAdd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnAdd->Location = System::Drawing::Point(786, 87);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(195, 63);
			this->btnAdd->TabIndex = 37;
			this->btnAdd->Text = L"Add";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &ManageProduct::btnAdd_Click);
			// 
			// ManageProduct
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->ClientSize = System::Drawing::Size(993, 371);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->btnDelete);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnEdit);
			this->Controls->Add(this->tbQuantity);
			this->Controls->Add(this->tbPrice);
			this->Controls->Add(this->tbProductName);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"ManageProduct";
			this->Text = L"ManageProduct";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnOK_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ productName = tbProductName->Text;
		String^ surname = tbPrice->Text;
		String^ password = tbQuantity->Text;
		int^ givenQuantity = Convert::ToInt32(password);
		int^ givenPrice = Convert::ToInt32(surname);

		try {
			String^ stringConn = "Data Source=(localdb)\\ProjectModels;Initial Catalog=mydb;Integrated Security=True;Encrypt=False";
			SqlConnection conn{stringConn};
			conn.Open();

			String^ query = "Select Count(ProductId) FROM Products WHERE Productname = @productName";
			SqlCommand cmd_validate{ query,% conn };

			cmd_validate.Parameters->AddWithValue("@productName", productName);
			SqlDataReader ^reader = cmd_validate.ExecuteReader();

			if (reader->Read()) {
				if (reader->GetInt32(0)==0) {
					MessageBox::Show("Enetered wrong product name", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					return;
				}
			}
			reader->Close();

			query = "update Products set Price = @price, Quantity = @quantity where Productname = @productName";
			SqlCommand cmd_update{ query,% conn };
			cmd_update.Parameters->AddWithValue("@price", givenPrice);
			cmd_update.Parameters->AddWithValue("@quantity", givenQuantity);
			cmd_update.Parameters->AddWithValue("@productName", productName);


			cmd_update.ExecuteNonQuery();

			MessageBox::Show("Product updated","Information",MessageBoxButtons::OK,MessageBoxIcon::Information);
			tbPrice->Text = "";
			tbQuantity->Text = "";
			tbProductName->Text = "";
			conn.Close();
		
		}catch (Exception^ ep) {
			MessageBox::Show(ep->Message,"Error",MessageBoxButtons::OK,MessageBoxIcon::Error);
		}

	}
private: System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ productName = tbProductName->Text;

	try {
		//check if given product exist
		String^ stringConn = "Data Source=(localdb)\\ProjectModels;Initial Catalog=mydb;Integrated Security=True;Encrypt=False";
		SqlConnection conn{stringConn};
		conn.Open();

		String^ query = "SELECT Count(ProductId) FROM Products WHERE Productname = @productName";
		SqlCommand cmd_check{ query,% conn };
		cmd_check.Parameters->AddWithValue("@productName", productName);

		SqlDataReader^ reader = cmd_check.ExecuteReader();

		if (!reader->Read()) {
			MessageBox::Show("Error in reading from database!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		if (reader->GetInt32(0) == 0) {
			MessageBox::Show("Product does not exist", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		reader->Close();
		query = "DELETE FROM Products WHERE Productname = @productName";
		SqlCommand cmd_delete{query,%conn};
		cmd_delete.Parameters->AddWithValue("@productName", productName);

		cmd_delete.ExecuteNonQuery();

		MessageBox::Show("Product deleted","Information",MessageBoxButtons::OK,MessageBoxIcon::Information);

		tbPrice->Text = "";
		tbQuantity->Text = "";
		tbProductName->Text = "";

		conn.Close();
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message,"Error",MessageBoxButtons::OK,MessageBoxIcon::Error);
	}


}
private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
	//check if given productName exist
	//if yes, get actual quantity and add given quantity -> then update quantity of product
	//if not then add new product -> with default productId

	String^ productName = tbProductName->Text;
	String^ stringPrice = tbPrice->Text;
	String^ stringQuantity = tbQuantity->Text;
	int^ givenPrice = Convert::ToInt32(stringPrice);
	int givenQuantity = Convert::ToInt32(stringQuantity);

	try {
		String^ stringConn = "Data Source=(localdb)\\ProjectModels;Initial Catalog=mydb;Integrated Security=True;Encrypt=False";
		SqlConnection conn{stringConn};
		conn.Open();

		String^ query = "SELECT Count(ProductId) FROM Products WHERE Productname = @productName";
		SqlCommand cmd_check{ query,% conn };
		cmd_check.Parameters->AddWithValue("@productName", productName);

		SqlDataReader^ reader = cmd_check.ExecuteReader();
		///////////////////////////////////////////////
		// If product already exist and givenPrice is not equal to actual one then -> add new product with givenPrice
		///////////////////////////////////////////////
		if (!reader->Read()) {
			MessageBox::Show("Error in reading from database!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		if (reader->GetInt32(0) == 0) {
			query = "INSERT INTO PRODUCTS(ProductName, Price,Quantity) VALUES (@productName,@price,@quantity)";
			SqlCommand cmd_insert{ query,% conn };
			cmd_insert.Parameters->AddWithValue("@productName", productName);
			cmd_insert.Parameters->AddWithValue("@price", givenPrice);
			cmd_insert.Parameters->AddWithValue("@quantity", Convert::ToInt32(givenQuantity));
			reader->Close();
			cmd_insert.ExecuteNonQuery();
			MessageBox::Show("Added new product","Information",MessageBoxButtons::OK,MessageBoxIcon::Information);
		}
		else {
			int actualQuantity = 0;
			//get actual product quantity
			query = "SELECT Quantity FROM Products WHERE Productname = @productName";
			SqlCommand cmd_getQuantity{ query,% conn };
			cmd_getQuantity.Parameters->AddWithValue("@productName", productName);
			reader->Close();
			reader = cmd_getQuantity.ExecuteReader();
			if (reader->Read()) {
				actualQuantity = reader->GetInt32(0);
			}
			reader->Close();
			int^ newQuantity = actualQuantity + givenQuantity;

			query = "UPDATE Products SET Quantity = @quantity WHERE Productname = @productName";
			SqlCommand cmd_update{ query,% conn };

			cmd_update.Parameters->AddWithValue("@quantity", newQuantity);
			cmd_update.Parameters->AddWithValue("@productName", productName);

			cmd_update.ExecuteNonQuery();
			
			
		}
		
		MessageBox::Show("Updated product quantity","Information",MessageBoxButtons::OK,MessageBoxIcon::Information);

		tbPrice->Text = "";
		tbQuantity->Text = "";
		tbProductName->Text = "";


		conn.Close();
	}
	catch (Exception^ ea) {
		MessageBox::Show(ea->Message,"Error",MessageBoxButtons::OK,MessageBoxIcon::Error);
	}
}
};
}
