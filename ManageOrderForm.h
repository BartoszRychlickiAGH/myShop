#pragma once
#include "users.h"
#include <array>


namespace myShop {

	using std::array;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for ManageOrderForm
	/// </summary>
	public ref class ManageOrderForm : public System::Windows::Forms::Form
	{
	public:
		User^ customer;
		ManageOrderForm(User^ user)
		{
			customer = user;

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

	private: System::Windows::Forms::TextBox^ tbQuantity;
	private: System::Windows::Forms::TextBox^ tbOrderId;


	private: System::Windows::Forms::TextBox^ tbProductName;






	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ orderIdLabel;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ InformationLabel;
	private: System::Windows::Forms::Button^ btnDelete;


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
			this->tbQuantity = (gcnew System::Windows::Forms::TextBox());
			this->tbOrderId = (gcnew System::Windows::Forms::TextBox());
			this->tbProductName = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->orderIdLabel = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->InformationLabel = (gcnew System::Windows::Forms::Label());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btnCancel
			// 
			this->btnCancel->Location = System::Drawing::Point(531, 309);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(223, 71);
			this->btnCancel->TabIndex = 32;
			this->btnCancel->Text = L"Cancel";
			this->btnCancel->UseVisualStyleBackColor = true;
			this->btnCancel->Click += gcnew System::EventHandler(this, &ManageOrderForm::btnCancel_Click);
			// 
			// btnOK
			// 
			this->btnOK->Location = System::Drawing::Point(40, 309);
			this->btnOK->Name = L"btnOK";
			this->btnOK->Size = System::Drawing::Size(224, 71);
			this->btnOK->TabIndex = 31;
			this->btnOK->Text = L"OK";
			this->btnOK->UseVisualStyleBackColor = true;
			this->btnOK->Click += gcnew System::EventHandler(this, &ManageOrderForm::btnOK_Click);
			// 
			// tbQuantity
			// 
			this->tbQuantity->Location = System::Drawing::Point(278, 231);
			this->tbQuantity->Name = L"tbQuantity";
			this->tbQuantity->Size = System::Drawing::Size(476, 38);
			this->tbQuantity->TabIndex = 28;
			// 
			// tbOrderId
			// 
			this->tbOrderId->Location = System::Drawing::Point(278, 168);
			this->tbOrderId->Name = L"tbOrderId";
			this->tbOrderId->Size = System::Drawing::Size(476, 38);
			this->tbOrderId->TabIndex = 27;
			// 
			// tbProductName
			// 
			this->tbProductName->Location = System::Drawing::Point(278, 112);
			this->tbProductName->Name = L"tbProductName";
			this->tbProductName->Size = System::Drawing::Size(476, 38);
			this->tbProductName->TabIndex = 25;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label5->Location = System::Drawing::Point(29, 229);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(139, 38);
			this->label5->TabIndex = 22;
			this->label5->Text = L"Quantity";
			// 
			// orderIdLabel
			// 
			this->orderIdLabel->AutoSize = true;
			this->orderIdLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->orderIdLabel->Location = System::Drawing::Point(29, 168);
			this->orderIdLabel->Name = L"orderIdLabel";
			this->orderIdLabel->Size = System::Drawing::Size(145, 38);
			this->orderIdLabel->TabIndex = 21;
			this->orderIdLabel->Text = L"Order Id:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->Location = System::Drawing::Point(29, 111);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(235, 38);
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
			this->InformationLabel->Text = L"Change order data";
			this->InformationLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btnDelete
			// 
			this->btnDelete->Location = System::Drawing::Point(289, 309);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(224, 71);
			this->btnDelete->TabIndex = 33;
			this->btnDelete->Text = L"Delete";
			this->btnDelete->UseVisualStyleBackColor = true;
			this->btnDelete->Click += gcnew System::EventHandler(this, &ManageOrderForm::btnDelete_Click);
			// 
			// ManageOrderForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(16, 31);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Lavender;
			this->ClientSize = System::Drawing::Size(781, 423);
			this->Controls->Add(this->btnDelete);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnOK);
			this->Controls->Add(this->tbQuantity);
			this->Controls->Add(this->tbOrderId);
			this->Controls->Add(this->tbProductName);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->orderIdLabel);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->InformationLabel);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"ManageOrderForm";
			this->Text = L"ManageOrder";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void btnOK_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ productName = tbProductName->Text;
		String^ orderProductName{""};
		String^ orderIdString = tbOrderId->Text;
		String^ quantityString = tbQuantity->Text;

		int orderId{ 0 }, productPrice{0};
		int givenQuantity{ 0 }, quantityOfProduct{ 0 }, oldQuantity{0};
		
		
		givenQuantity = Convert::ToInt32(quantityString);
		orderId = Convert::ToInt32(orderIdString);

		//2. check if orderIdString is an number
		
		//3. check if quantity is an number
		//4. check if given productName is equal to this in order

		try {
			
			String^ stringConn{"Data Source=(localdb)\\ProjectModels;Initial Catalog=mydb;Integrated Security=True;Encrypt=false"};
			SqlConnection conn{ stringConn };
			conn.Open();



			String^ query = "SELECT COUNT(ProductId) FROM products WHERE ProductName = @productName";
			SqlCommand cmd{ query,% conn };
			cmd.Parameters->AddWithValue("@productName", productName);
		
			SqlDataReader^ reader = cmd.ExecuteReader();

			if (reader->Read()) {
				if (reader->GetInt32(0) == 0) {
					MessageBox::Show("Wrong name of product","Error",MessageBoxButtons::OK,MessageBoxIcon::Error);
					return;
				}
			}
			reader->Close();

			query = "SELECT Price,Quantity FROM products WHERE ProductName = @productName";
			SqlCommand cmd_quantity{ query,% conn };
			cmd_quantity.Parameters->AddWithValue("@productName", productName);

			reader = cmd_quantity.ExecuteReader();

			if (reader->Read()) {
				productPrice = reader->GetInt32(0);
				quantityOfProduct = reader->GetInt32(1);
			}

			reader->Close();

			if (givenQuantity > quantityOfProduct + oldQuantity) {
				MessageBox::Show("Given quantity is unavailable!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
			
			query = "SELECT COUNT(CustomerId) FROM Orders WHERE OrderId = @OrderId";
			SqlCommand cmd_Id{ query,% conn };
			cmd_Id.Parameters->AddWithValue("@OrderId",orderId);
			
			reader = cmd_Id.ExecuteReader();

			if (reader->Read()) {
				if (reader->GetInt32(0) == 0) {
					MessageBox::Show("Enetered wrong order id!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					return;
				}
			}

			reader->Close();
			query = "SELECT Quantity FROM Orders WHERE OrderId = @OrderId";
			SqlCommand cmd_Q{ query,% conn };
			cmd_Q.Parameters->AddWithValue("@OrderId", orderId);

			reader = cmd_Q.ExecuteReader();

			if (reader->Read()) {
				oldQuantity = reader->GetInt32(0);
			}

			reader->Close();

			if (givenQuantity <= quantityOfProduct + oldQuantity and givenQuantity > 0) {
				if (givenQuantity > oldQuantity and givenQuantity-oldQuantity < quantityOfProduct or givenQuantity < oldQuantity) {

					query = "UPDATE products set quantity = @quantity WHERE ProductName = @productName";
					SqlCommand cmd_prod{ query,% conn };

					cmd_prod.Parameters->AddWithValue("@quantity", Convert::ToInt32(quantityOfProduct - givenQuantity + oldQuantity));
					cmd_prod.Parameters->AddWithValue("@productName", productName);

					cmd_prod.ExecuteNonQuery();

					query = "UPDATE orders set Quantity = @quantity,OrderPrice = @price WHERE OrderId = @orderId";
					SqlCommand cmd_order{ query,% conn };

					cmd_order.Parameters->AddWithValue("@quantity", Convert::ToInt32(givenQuantity));
					cmd_order.Parameters->AddWithValue("@orderId", orderId);
					cmd_order.Parameters->AddWithValue("@price", productPrice * givenQuantity);

					cmd_order.ExecuteNonQuery();
				}
			}
			else {
				MessageBox::Show("Entered wrong quantity!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
			MessageBox::Show("Changed order details", "Information", MessageBoxButtons::OK, MessageBoxIcon::Information);
			reader->Close();
			conn.Close();
			this->Close();

		}catch (Exception^ em) {
			MessageBox::Show(em->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}




	}
private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e) {
	// pobieranie orderId


	//1. check if orderId is in database
	//2. check if orderId is attached to given customer

	//delete order from orders

	String^ orderIdString = tbOrderId->Text;
	int^ givenOrderId = Convert::ToInt32(orderIdString);
	int quantityFromOrder{ 0 };
	int quantityFromProducts{ 0 };
	String^ productName{ "" };

	try {
		String^ strConn{ "Data Source=(localdb)\\ProjectModels;Initial Catalog=mydb;Integrated Security=True;Encrypt=False" };
		SqlConnection conn{ strConn };
		conn.Open();

		String^ query = "SELECT COUNT(OrderId) FROM Orders WHERE OrderId = @OrderId and CustomerId = @CustomerId";
		SqlCommand cmd{ query,% conn };
		cmd.Parameters->AddWithValue("@OrderId", givenOrderId);
		cmd.Parameters->AddWithValue("@CustomerId", customer->Id);

		SqlDataReader^ reader = cmd.ExecuteReader();

		if (reader->Read()) {
			if (!reader->GetInt32(0)) {
				MessageBox::Show("Given orderId is invalid or not attached to your account", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		reader->Close();
		
		query = "SELECT Quantity,ProductName FROM Orders WHERE OrderId = @OrderId";
		SqlCommand cmd_q{ query,% conn };
		cmd_q.Parameters->AddWithValue("@OrderId", givenOrderId);

		reader = cmd_q.ExecuteReader();

		if (reader->Read()) {
			quantityFromOrder = reader->GetInt32(0);
			productName = reader->GetString(1);
		}
		reader->Close();

		query = "SELECT Quantity FROM Products WHERE ProductName = @ProductName";
		SqlCommand cmd_qp{ query,% conn };
		cmd_qp.Parameters->AddWithValue("@ProductName", productName);

		reader = cmd_qp.ExecuteReader();

		if (reader->Read()) {
			quantityFromProducts = reader->GetInt32(0);
		}
		reader->Close();

		int newQuantity = quantityFromOrder + quantityFromProducts;

		query = "UPDATE Products SET Quantity = @quantity WHERE ProductName = @ProductName";
		SqlCommand cmd_insert{ query,% conn };

		cmd_insert.Parameters->AddWithValue("@quantity", newQuantity);
		cmd_insert.Parameters->AddWithValue("ProductName", productName);

		cmd_insert.ExecuteNonQuery();

		query = "DELETE from orders WHERE orderId = @orderId";
		SqlCommand cmd_delete{ query,%conn };
		cmd_delete.Parameters->AddWithValue("@orderId", givenOrderId);

		cmd_delete.ExecuteNonQuery();

		MessageBox::Show("Deleted ordrer","Information",MessageBoxButtons::OK,MessageBoxIcon::Information);


		//get quanttity, productName, from  orders, where orderid = givenOrderId
		//get quantity from products from products where prodyctname = productNameFromOrder
		// add quantity_from_order and quantity_from_product
		//update quantity_of_product in products where productname = productNameFromOrder
		

		conn.Close();
		this->Close();
	}
	catch (Exception ^ ed) {
		MessageBox::Show(ed->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
};
}
