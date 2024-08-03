#pragma once
#include "users.h"
#include <ctime>
#include <map>
#include <string>


namespace myShop {
	
	using std::map,std::string,std::pair;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for NewOrder
	/// </summary>
	public ref class NewOrder : public System::Windows::Forms::Form
	{
	public:
		User^ customer;
		NewOrder(User^ user)
		{
			customer = user;
			InitializeComponent();
			try {
				String^ stringConn{ "Data Source=(localdb)\\ProjectModels;Initial Catalog=mydb;Integrated Security=True;Encrypt=false" };
				SqlConnection conn{ stringConn };
				conn.Open();

				String^ query{ "SELECT ProductName,Price,Quantity FROM Products" };
				SqlCommand cmd{ query,% conn };

				SqlDataReader^ reader = cmd.ExecuteReader();
				if (reader->Read()) {
					while (reader->Read()) {
						String^ productName = reader->GetString(0);
						int^ price = reader->GetInt32(1);
						int^ quantity = reader->GetInt32(2);

						dataView->Rows->Add( productName, price, quantity);
					}
				}
				else {
					MessageBox::Show("No products available", "Information", MessageBoxButtons::OK, MessageBoxIcon::Information);
				}

				reader->Close();
				conn.Close();
			}
			catch (Exception^ en) {
				MessageBox::Show(en->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			dataView->AllowUserToResizeColumns;
			dataView->AllowUserToResizeRows;

		}	
			
			
			
			//
			//TODO: Add the constructor code here
			//

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~NewOrder()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ tbQuantity;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ btnCancel;
	private: System::Windows::Forms::Button^ btnOK;


	private: System::Windows::Forms::TextBox^ tbProductName;


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::DataGridView^ dataView;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ProductName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Price;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Quantity;
















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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->btnOK = (gcnew System::Windows::Forms::Button());
			this->tbProductName = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->dataView = (gcnew System::Windows::Forms::DataGridView());
			this->ProductName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Price = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Quantity = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataView))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(629, 46);
			this->label1->TabIndex = 1;
			this->label1->Text = L"New Order";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tbQuantity
			// 
			this->tbQuantity->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tbQuantity->Location = System::Drawing::Point(205, 161);
			this->tbQuantity->Name = L"tbQuantity";
			this->tbQuantity->Size = System::Drawing::Size(400, 38);
			this->tbQuantity->TabIndex = 23;
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->Location = System::Drawing::Point(7, 158);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(129, 32);
			this->label2->TabIndex = 22;
			this->label2->Text = L"Quantity:";
			// 
			// btnCancel
			// 
			this->btnCancel->Location = System::Drawing::Point(433, 219);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(172, 46);
			this->btnCancel->TabIndex = 21;
			this->btnCancel->Text = L"Cancel";
			this->btnCancel->UseVisualStyleBackColor = true;
			this->btnCancel->Click += gcnew System::EventHandler(this, &NewOrder::btnCancel_Click);
			// 
			// btnOK
			// 
			this->btnOK->Location = System::Drawing::Point(205, 219);
			this->btnOK->Name = L"btnOK";
			this->btnOK->Size = System::Drawing::Size(172, 46);
			this->btnOK->TabIndex = 20;
			this->btnOK->Text = L"OK";
			this->btnOK->UseVisualStyleBackColor = true;
			this->btnOK->Click += gcnew System::EventHandler(this, &NewOrder::btnOK_Click);
			// 
			// tbProductName
			// 
			this->tbProductName->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tbProductName->Location = System::Drawing::Point(205, 100);
			this->tbProductName->Name = L"tbProductName";
			this->tbProductName->Size = System::Drawing::Size(400, 38);
			this->tbProductName->TabIndex = 18;
			// 
			// label4
			// 
			this->label4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label4->Location = System::Drawing::Point(7, 103);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(202, 32);
			this->label4->TabIndex = 16;
			this->label4->Text = L"Product Name:";
			this->label4->Click += gcnew System::EventHandler(this, &NewOrder::label4_Click);
			// 
			// label5
			// 
			this->label5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label5->Location = System::Drawing::Point(12, 271);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(629, 46);
			this->label5->TabIndex = 24;
			this->label5->Text = L"Available products:";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// dataView
			// 
			this->dataView->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataView->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::ColumnHeader;
			this->dataView->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::DisplayedCells;
			this->dataView->BackgroundColor = System::Drawing::SystemColors::Control;
			this->dataView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataView->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->ProductName,
					this->Price, this->Quantity
			});
			this->dataView->Location = System::Drawing::Point(79, 320);
			this->dataView->Name = L"dataView";
			this->dataView->RowHeadersWidth = 51;
			this->dataView->RowTemplate->Height = 24;
			this->dataView->Size = System::Drawing::Size(500, 364);
			this->dataView->TabIndex = 25;
			// 
			// ProductName
			// 
			this->ProductName->HeaderText = L"ProductName";
			this->ProductName->MinimumWidth = 6;
			this->ProductName->Name = L"ProductName";
			this->ProductName->Width = 216;
			// 
			// Price
			// 
			this->Price->HeaderText = L"Price";
			this->Price->MinimumWidth = 6;
			this->Price->Name = L"Price";
			this->Price->Width = 108;
			// 
			// Quantity
			// 
			this->Quantity->HeaderText = L"Quantity";
			this->Quantity->MinimumWidth = 6;
			this->Quantity->Name = L"Quantity";
			this->Quantity->Width = 150;
			// 
			// NewOrder
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(16, 31);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightCyan;
			this->ClientSize = System::Drawing::Size(653, 750);
			this->Controls->Add(this->dataView);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->tbQuantity);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnOK);
			this->Controls->Add(this->tbProductName);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"NewOrder";
			this->Text = L"NewOrder";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataView))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void btnOK_Click(System::Object^ sender, System::EventArgs^ e) {
	
	String^ productName{ tbProductName->Text };
	String^ date{ "" };
	int quantity = Convert::ToInt32(tbQuantity->Text);
	int check{ 0 }, price{  };
	int^ customerID{  };
	int quantityAvailable{ 20 };
	if (productName == "" || tbQuantity->Text == "") {
		MessageBox::Show("All field must be filled", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	if (quantity <= 0) {
		MessageBox::Show("Quantity cannot be negative value!","Error",MessageBoxButtons::OK,MessageBoxIcon::Error);
		return;
	}
	// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
	// check if given quantity is available
	// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

	try {
		String^ stringConn{ "Data Source=(localdb)\\ProjectModels;Initial Catalog=mydb;Integrated Security=True;Encrypt=false" };
		SqlConnection connect{ stringConn };
		connect.Open();
		String^ query{ "SELECT COUNT(ProductId) FROM PRODUCTS WHERE ProductName = @name;" };
		SqlCommand cmd{ query,% connect };
		
		cmd.Parameters->AddWithValue("@name", productName);
		SqlDataReader^ reader = cmd.ExecuteReader();

		if (reader->Read()) {
			check = reader->GetInt32(0);
			
		}

		reader->Close();
		query = "SELECT Quantity FROM products where ProductName = @name";
		SqlCommand cmd_quantity{ query, %connect };
		cmd_quantity.Parameters->AddWithValue("@name", productName);

		reader = cmd_quantity.ExecuteReader();

		if (reader->Read()) {
			quantityAvailable = reader->GetInt32(0);
		}

		reader->Close();

		if (quantity > quantityAvailable) {
			MessageBox::Show("Entered unavailable quantity", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		if (check == 0) {
			MessageBox::Show("Entered wrong product name","Error",MessageBoxButtons::OK,MessageBoxIcon::Error);
			return;
		}
		query = "SELECT Price FROM Products WHERE ProductName = @name";
		SqlCommand command{ query,% connect };
		command.Parameters->AddWithValue("@name", productName);

		
		
		reader = command.ExecuteReader();

		if (reader->Read()) {
			
			check = reader->GetInt32(0);
		}
		else {
			MessageBox::Show("Error in reading database!" , "Error", MessageBoxButtons::OK,MessageBoxIcon::Error);
			return;
		}

		price =  check * quantity ;

		//get current time
		{
			map<string, string> mapa;

			mapa.insert(pair<string, string>("Jan", "1"));
			mapa.insert(pair<string, string>("Feb", "2"));
			mapa.insert(pair<string, string>("Mar", "3"));
			mapa.insert(pair<string, string>("Apr", "4"));
			mapa.insert(pair<string, string>("May", "5"));
			mapa.insert(pair<string, string>("Jun", "6"));
			mapa.insert(pair<string, string>("Jul", "7"));
			mapa.insert(pair<string, string>("Aug", "8"));
			mapa.insert(pair<string, string>("Sep", "9"));
			mapa.insert(pair<string, string>("Oct", "10"));
			mapa.insert(pair<string, string>("Nov", "11"));
			mapa.insert(pair<string, string>("Dec", "12"));


			string s{}, month{}, day{}, year{}; // variables to store current time

			time_t c_time = time(nullptr);
			string current_time = std::asctime(std::localtime(&c_time));

			//cout << current_time << endl;

			s.push_back(current_time[4]), s.push_back(current_time[5]);  s.push_back(current_time[6]);
			//cout << s << endl;


			for (auto it = mapa.begin(); it != mapa.end(); ++it) {
				if (it->first == s) {
					month = it->second;
				}
			}


			day.push_back(current_time[8]);
			day.push_back(current_time[9]);

			for (int i = 20; i <= 23; i++) {
				year.push_back(current_time[i]);
			}
			string date1 = day + "." + month + "." + year;
		
		date = gcnew String(date1.c_str());
		}


		//get customer id

		query = "SELECT Id FROM Users WHERE Login = @name";
		SqlCommand cmd_id { query,% connect };

		cmd_id.Parameters->AddWithValue("@name", customer->username);

		reader->Close();

		reader = cmd_id.ExecuteReader();

		if (reader->Read()) {
			customerID = reader->GetInt32(0);
		}
		else {
			MessageBox::Show("Error in reading database!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		
		}

		
		//insert into orders
		reader->Close();
		
		//String^ query_insert = "INSERT INTO Orders (OrderDate,CustomerId,ProductName,Quantity,OrderPrice) VALUES (@OrderDate,@CustomerId,@ProductName,@Quantity,@OrderPrice)";
		//SqlCommand cmd_insert{ query_insert,% connect };
		//
		//cmd_id.Parameters->AddWithValue("@OrderDate", date);
		//cmd_id.Parameters->AddWithValue("@CustomerId", customerID); 
		//cmd_id.Parameters->AddWithValue("@ProductName", productName);
		//cmd_id.Parameters->AddWithValue("@Quantity", quantity);
		//cmd_id.Parameters->AddWithValue("@OrderPrice", price);
		//


		//cmd_insert.ExecuteNonQuery(); // here is the error
		


		String^ sqlQuery = "INSERT INTO Orders (OrderDate,CustomerId,ProductName,Quantity,OrderPrice) VALUES (@OrderDate,@CustomerId,@ProductName,@Quantity,@OrderPrice)";
		SqlCommand^ comand = gcnew SqlCommand(sqlQuery, % connect);

		comand->Parameters->AddWithValue("@OrderDate", date);
		comand->Parameters->AddWithValue("@CustomerId", customerID);
		comand->Parameters->AddWithValue("@ProductName", productName);
		comand->Parameters->AddWithValue("@Quantity", quantity);
		comand->Parameters->AddWithValue("@OrderPrice", price);
		
		comand->ExecuteNonQuery();

		

		query = "UPDATE Products SET Quantity = @quantity WHERE ProductName = @name";
		SqlCommand ^ cmd_update = gcnew SqlCommand{ query,% connect };
		
		cmd_update->Parameters->AddWithValue("@quantity",quantityAvailable - quantity);
		cmd_update->Parameters->AddWithValue("@name", productName);


		cmd_update->ExecuteNonQuery();


		reader->Close();
		connect.Close();
		this->Hide();

	}
	catch (Exception^ ee) {
		MessageBox::Show(ee->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
};
}
