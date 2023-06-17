#pragma once
#include "user.h"
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
	/// Summary for ReturnPage
	/// </summary>
	public ref class ReturnPage : public System::Windows::Forms::Form
	{
	public:
		int userid;
		ReturnPage(int id)
		{
			userid = id;
			
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ReturnPage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ btnBorrow;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::DataGridView^ dataGridView;
	private: System::Windows::Forms::PictureBox^ pictureBox5;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ReturnPage::typeid));
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->btnBorrow = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.BackgroundImage")));
			this->pictureBox4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox4->Location = System::Drawing::Point(43, 448);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(630, 77);
			this->pictureBox4->TabIndex = 16;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox3->Location = System::Drawing::Point(84, 405);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(38, 37);
			this->pictureBox3->TabIndex = 15;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox2->Location = System::Drawing::Point(84, 43);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(24, 24);
			this->pictureBox2->TabIndex = 14;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(353, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(43, 33);
			this->pictureBox1->TabIndex = 13;
			this->pictureBox1->TabStop = false;
			// 
			// btnBorrow
			// 
			this->btnBorrow->Location = System::Drawing::Point(128, 419);
			this->btnBorrow->Name = L"btnBorrow";
			this->btnBorrow->Size = System::Drawing::Size(75, 23);
			this->btnBorrow->TabIndex = 12;
			this->btnBorrow->Text = L"return";
			this->btnBorrow->UseVisualStyleBackColor = true;
			this->btnBorrow->Click += gcnew System::EventHandler(this, &ReturnPage::btnBorrow_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(288, 22);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(59, 13);
			this->label2->TabIndex = 11;
			this->label2->Text = L"your books";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(114, 44);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(127, 20);
			this->textBox1->TabIndex = 10;
			// 
			// dataGridView
			// 
			this->dataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView->Location = System::Drawing::Point(46, 73);
			this->dataGridView->Name = L"dataGridView";
			this->dataGridView->Size = System::Drawing::Size(627, 329);
			this->dataGridView->TabIndex = 9;
			this->dataGridView->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ReturnPage::dataGridView_CellContentClick);
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.BackgroundImage")));
			this->pictureBox5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox5->Location = System::Drawing::Point(12, 12);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(35, 32);
			this->pictureBox5->TabIndex = 17;
			this->pictureBox5->TabStop = false;
			// 
			// ReturnPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::MenuBar;
			this->ClientSize = System::Drawing::Size(721, 537);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->btnBorrow);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->dataGridView);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"ReturnPage";
			this->Text = L"ReturnPage";
			this->Load += gcnew System::EventHandler(this, &ReturnPage::ReturnPage_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ReturnPage_Load(System::Object^ sender, System::EventArgs^ e) {
		SqlConnection^ sqlConn = Db_CONN::GetSqlConnection();
		sqlConn->Open();
		String^ query = String::Format("SELECT * FROM Borrowings WHERE UserID = {0}", userid);

		SqlDataAdapter^ dataAdapter = gcnew SqlDataAdapter(query, sqlConn);
		DataTable^ dataTable = gcnew DataTable();

		dataAdapter->Fill(dataTable);

		dataGridView->DataSource = dataTable;
		dataGridView->ReadOnly = true;

		sqlConn->Close();
	}
private: System::Void dataGridView_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void btnBorrow_Click(System::Object^ sender, System::EventArgs^ e) {
	if (dataGridView->SelectedRows->Count > 0) {
		if (dataGridView->SelectedRows->Count > 0) {
			DataGridViewRow^ selectedRow = dataGridView->SelectedRows[0];

			// Retrieve book information from the selected row
			int bookID = Convert::ToInt32(selectedRow->Cells["Id"]->Value);
			String^ bookTitle = selectedRow->Cells["Booktitle"]->Value->ToString();
			String^ bookAuthor = selectedRow->Cells["author"]->Value->ToString();

			// Get the current date as the return date
			String^ returnDate = DateTime::Today.ToShortDateString();

			// Insert a new row into the "returnBook" table
			String^ insertQuery = "INSERT INTO returnBook (BookID, BookTitle, UserId, BookAuthor, ReturnDate) VALUES (@BookID, @BookTitle, @UserId, @BookAuthor, @ReturnDate)";
			SqlConnection^ sqlConn = Db_CONN::GetSqlConnection();
			sqlConn->Open();

			SqlCommand^ insertCommand = gcnew SqlCommand(insertQuery, sqlConn);
			insertCommand->Parameters->AddWithValue("@BookID", bookID);
			insertCommand->Parameters->AddWithValue("@BookTitle", bookTitle);
			insertCommand->Parameters->AddWithValue("@BookAuthor", bookAuthor);
			insertCommand->Parameters->AddWithValue("@ReturnDate", returnDate);
			insertCommand->Parameters->AddWithValue("@UserId", userid);
			insertCommand->ExecuteNonQuery();

			// Get the current noBooksav value from the Books table
			String^ getNoBooksavQuery = String::Format("SELECT noBooksav FROM Books WHERE Id = {0}", bookID);
			SqlCommand^ getNoBooksavCommand = gcnew SqlCommand(getNoBooksavQuery, sqlConn);
			int noBooksav = Convert::ToInt32(getNoBooksavCommand->ExecuteScalar());

			// Increment the noBooksav value
			noBooksav++;

			// Update the Books table with the incremented value
			String^ updateQuery = String::Format("UPDATE Books SET noBooksav = {0} WHERE Id = {1}", noBooksav, bookID);
			SqlCommand^ updateCommand = gcnew SqlCommand(updateQuery, sqlConn);
			updateCommand->ExecuteNonQuery();


			// Delete the book from the Borrowings table
			String^ deleteQuery = "DELETE FROM Borrowings WHERE BookID = @BookID AND UserId = @UserId";
			;

			SqlCommand^ deleteCommand = gcnew SqlCommand(deleteQuery, sqlConn);
			deleteCommand->Parameters->AddWithValue("@BookID", bookID);
			deleteCommand->Parameters->AddWithValue("@UserId", userid);
			deleteCommand->ExecuteNonQuery();

			// Close the database connection
			sqlConn->Close();

			MessageBox::Show(String::Format("You have returned the book: {0} by {1}\nReturn Date: {2}", bookTitle, bookAuthor, returnDate), "Book Returned", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		else {
			MessageBox::Show("Please select a book to return", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

		}
	else {
		MessageBox::Show("Please select a book to return", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

}
};
}
