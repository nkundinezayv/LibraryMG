#pragma once
#include "DB_CONN.h"
#include <ctime> 
#include "user.h"
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
		int userId;
	public:
		LibraryPage(int id)
		{
			
			 userId = id;
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
			this->pictureBox4->Size = System::Drawing::Size(630, 77);
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
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
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

		SqlDataAdapter^ dataAdapter = gcnew SqlDataAdapter(query, sqlConn);
		DataTable^ dataTable = gcnew DataTable();

		dataAdapter->Fill(dataTable);

		dataGridView->DataSource = dataTable;
		dataGridView->ReadOnly = true;
		
		sqlConn->Close();
	}
	
	
	private: System::Void dataGridView_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		String^ searchText = textBox1->Text;

		DataTable^ dataTable = safe_cast<DataTable^>(dataGridView->DataSource);

		if (dataTable->Columns->Contains("title") && dataTable->Columns->Contains("author")) {
			dataTable->DefaultView->RowFilter = String::Format("title LIKE '%{0}%' OR author LIKE '%{0}%'", searchText);
		}
	}
private: System::Void btnBorrow_Click(System::Object^ sender, System::EventArgs^ e) {

	if (dataGridView->SelectedRows->Count > 0) {
	
		DataGridViewRow^ selectedRow = dataGridView->SelectedRows[0];

		String^ bookTitle = selectedRow->Cells["title"]->Value->ToString();
		String^ bookAuthor = selectedRow->Cells["author"]->Value->ToString();


		time_t currentTime = time(nullptr);
		tm* localTime = localtime(&currentTime);
		int year = localTime->tm_year + 1900;
		int month = localTime->tm_mon + 1;
		int day = localTime->tm_mday;

		
		String^ borrowedDate = String::Format("{0}-{1:00}-{2:00}", year, month, day);

		
		Form^ dateForm = gcnew Form();
		dateForm->Text = "Choose Return Date";
		dateForm->StartPosition = FormStartPosition::CenterScreen;
		dateForm->MinimizeBox = false;
		dateForm->MaximizeBox = false;

	
		DateTimePicker^ returnDatepicker = gcnew DateTimePicker();
		returnDatepicker->Format = DateTimePickerFormat::Short;
		returnDatepicker->MinDate = DateTime::Today; 
		returnDatepicker->Width = 100;
		returnDatepicker->Height = 30;
		returnDatepicker->Anchor = AnchorStyles::None;
		returnDatepicker->Dock = DockStyle::Fill;

	
		Button^ okButton = gcnew Button();
		okButton->Text = "OK";
		okButton->Width = 75;
		okButton->Height = 30;
		okButton->Anchor = AnchorStyles::None;
		okButton->Dock = DockStyle::Bottom;
		okButton->DialogResult = System::Windows::Forms::DialogResult::OK;

	
		dateForm->Controls->Add(returnDatepicker);
		dateForm->Controls->Add(okButton);

	
		if (dateForm->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			int noBooksav = Convert::ToInt32(selectedRow->Cells["noBooksav"]->Value);
			int Id = Convert::ToInt32(selectedRow->Cells["Id"]->Value);
			int bookID = Convert::ToInt32(selectedRow->Cells["Id"]->Value);
			String^ bookTitle = selectedRow->Cells["title"]->Value->ToString();
			String^ Author = selectedRow->Cells["author"]->Value->ToString();
			
			if (noBooksav >= 1) {
				// Decrement the number of available books
				noBooksav--;

				
				String^ updateQuery = String::Format("UPDATE Books SET noBooksav = {0} WHERE Id = {1}", noBooksav, Id);
				SqlConnection^ sqlConn = Db_CONN::GetSqlConnection();
				sqlConn->Open();

			
				SqlCommand^ updateCommand = gcnew SqlCommand(updateQuery, sqlConn);
				updateCommand->ExecuteNonQuery();
				
				
				
				// Perform the borrowing logic here
				//DateTime returnDate = returnDatepicker->Value; // Assuming you have already retrieved the return date

				// Insert a new row into the "Borrowings" table
				String^ borrowedDate = DateTime::Today.ToShortDateString(); // Get the current date as the borrowed date
				String^ returnDate = returnDatepicker->Value.ToShortDateString(); // Get the chosen return date
				String^ insertQuery = "INSERT INTO Borrowings (BookID, Booktitle, UserId, author, BorrowedDate, ReturnDate) VALUES (@BookID, @Booktitle, @UserId, @author, @BorrowedDate, @ReturnDate)";
				SqlCommand^ insertCommand = gcnew SqlCommand(insertQuery, sqlConn);
				insertCommand->Parameters->AddWithValue("@BookID", bookID);
				insertCommand->Parameters->AddWithValue("@UserId", userId);
				insertCommand->Parameters->AddWithValue("@Booktitle", bookTitle);
				insertCommand->Parameters->AddWithValue("@BorrowedDate", borrowedDate);
				insertCommand->Parameters->AddWithValue("@ReturnDate", returnDate);
				insertCommand->Parameters->AddWithValue("@author", Author);
				insertCommand->ExecuteNonQuery();

				// Close the database connection
				sqlConn->Close();

				MessageBox::Show(String::Format("You have borrowed the book: {0} by {1}\nBorrowed Date: {2}\nReturn Date: {3}", bookTitle, bookAuthor, borrowedDate, returnDate), "Book Borrowed", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			else {
				MessageBox::Show(String::Format("The book '{0}' is not available", bookTitle), "Book Not Available", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}

			
		}

		
		dateForm->Close();
	}
	else {
	
		MessageBox::Show("Please select a book to borrow", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
};
}
