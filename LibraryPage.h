#pragma once
#include "DB_CONN.h"
namespace LibraryMG {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for LibraryPage
	/// </summary>
	public ref class LibraryPage : public System::Windows::Forms::Form
	{
	public:
		LibraryPage(void)
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
		~LibraryPage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView;
	private: System::Windows::Forms::TextBox^ textBox1;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ btnBorrow;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LibraryPage::typeid));
			this->dataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btnBorrow = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView
			// 
			this->dataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView->Location = System::Drawing::Point(80, 66);
			this->dataGridView->Name = L"dataGridView";
			this->dataGridView->Size = System::Drawing::Size(542, 329);
			this->dataGridView->TabIndex = 0;
			this->dataGridView->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &LibraryPage::dataGridView_CellContentClick);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(124, 40);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(127, 20);
			this->textBox1->TabIndex = 1;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &LibraryPage::textBox1_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(297, 18);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(60, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Book Store";
			// 
			// btnBorrow
			// 
			this->btnBorrow->Location = System::Drawing::Point(138, 415);
			this->btnBorrow->Name = L"btnBorrow";
			this->btnBorrow->Size = System::Drawing::Size(75, 23);
			this->btnBorrow->TabIndex = 4;
			this->btnBorrow->Text = L"Borrow Book";
			this->btnBorrow->UseVisualStyleBackColor = true;
			this->btnBorrow->Click += gcnew System::EventHandler(this, &LibraryPage::btnBorrow_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(363, -2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(48, 43);
			this->pictureBox1->TabIndex = 5;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox2->Location = System::Drawing::Point(94, 39);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(24, 24);
			this->pictureBox2->TabIndex = 6;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox3->Location = System::Drawing::Point(94, 401);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(38, 37);
			this->pictureBox3->TabIndex = 7;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.BackgroundImage")));
			this->pictureBox4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox4->Location = System::Drawing::Point(53, 444);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(630, 54);
			this->pictureBox4->TabIndex = 8;
			this->pictureBox4->TabStop = false;
			// 
			// LibraryPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::MenuBar;
			this->ClientSize = System::Drawing::Size(705, 498);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->btnBorrow);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->dataGridView);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"LibraryPage";
			this->Text = L"LibraryPage";
			this->Load += gcnew System::EventHandler(this, &LibraryPage::LibraryPage_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	


	}
	private: System::Void LibraryPage_Load(System::Object^ sender, System::EventArgs^ e) {
	    
		SqlConnection^ sqlConn = Db_CONN::GetSqlConnection();
		sqlConn->Open();
		String^ query = "SELECT * FROM Books";

		// Create a SqlDataAdapter and DataTable
		SqlDataAdapter^ dataAdapter = gcnew SqlDataAdapter(query, sqlConn);
		DataTable^ dataTable = gcnew DataTable();

		// Fetch the data from the database into the DataTable
		dataAdapter->Fill(dataTable);

		// Bind the DataTable to the dataGridView control
		dataGridView->DataSource = dataTable;
		dataGridView->ReadOnly = true;
		// Close the database connection
		sqlConn->Close();
	}
	
	
	private: System::Void dataGridView_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		String^ searchText = textBox1->Text;

		// Access the DataTable bound to the dataGridView
		DataTable^ dataTable = safe_cast<DataTable^>(dataGridView->DataSource);

		// Apply a filter to the DefaultView of the DataTable
		if (dataTable->Columns->Contains("title") && dataTable->Columns->Contains("author")) {
			// Apply a filter to the DefaultView of the DataTable
			dataTable->DefaultView->RowFilter = String::Format("title LIKE '%{0}%' OR author LIKE '%{0}%'", searchText);
		}
	}
private: System::Void btnBorrow_Click(System::Object^ sender, System::EventArgs^ e) {
	// Check if any row is selected in the DataGridView
	if (dataGridView->SelectedRows->Count > 0) {
		// Get the selected row
		DataGridViewRow^ selectedRow = dataGridView->SelectedRows[0];

		// Access the book information from the selected row
		String^ bookTitle = selectedRow->Cells["Title"]->Value->ToString();
		String^ bookAuthor = selectedRow->Cells["Author"]->Value->ToString();

		// Perform the borrowing logic here
		// ...

		// Show a message to indicate successful borrowing
		MessageBox::Show(String::Format("You have borrowed the book: {0} by {1}", bookTitle, bookAuthor), "Book Borrowed", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	else {
		// No row is selected, show an error message
		MessageBox::Show("Please select a book to borrow", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
};
}
