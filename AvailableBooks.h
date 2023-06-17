#pragma once
#include "DB_CONN.h"
namespace LibraryMG {
	using namespace System::Data::SqlClient;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AvailableBooks
	/// </summary>
	public ref class AvailableBooks : public System::Windows::Forms::Form
	{
	public:
		AvailableBooks(void)
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
		~AvailableBooks()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(65, 29);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(694, 409);
			this->dataGridView1->TabIndex = 0;
			// 
			// AvailableBooks
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(815, 462);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"AvailableBooks";
			this->Text = L"AvailableBooks";
			this->Load += gcnew System::EventHandler(this, &AvailableBooks::AvailableBooks_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void AvailableBooks_Load(System::Object^ sender, System::EventArgs^ e) {
		SqlConnection^ sqlConn = Db_CONN::GetSqlConnection();
		sqlConn->Open();

		String^ query = "SELECT * FROM Books";
		SqlDataAdapter^ dataAdapter = gcnew SqlDataAdapter(query, sqlConn);
		DataTable^ dataTable = gcnew DataTable();

		dataAdapter->Fill(dataTable);

		dataGridView1->DataSource = dataTable;
		dataGridView1->ReadOnly = true;

		for (int i = 0; i < dataGridView1->Columns->Count; i++) {
			dataGridView1->Columns[i]->AutoSizeMode = DataGridViewAutoSizeColumnMode::AllCells;
		}




		sqlConn->Close();
	}
	};
}
