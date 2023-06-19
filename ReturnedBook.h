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
	/// Summary for ReturnedBook
	/// </summary>
	public ref class ReturnedBook : public System::Windows::Forms::Form
	{
	public:
		ReturnedBook(void)
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
		~ReturnedBook()
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ReturnedBook::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(27, 22);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(633, 400);
			this->dataGridView1->TabIndex = 0;
			// 
			// ReturnedBook
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(688, 434);
			this->Controls->Add(this->dataGridView1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"ReturnedBook";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ReturnedBook";
			this->Load += gcnew System::EventHandler(this, &ReturnedBook::ReturnedBook_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void ReturnedBook_Load(System::Object^ sender, System::EventArgs^ e) {
		Borrow^ borrow = gcnew Borrow();
		borrow->ReturnedBook();

		dataGridView1->DataSource = borrow->dataTable;

		for (int i = 0; i < dataGridView1->Columns->Count; i++) {
			dataGridView1->Columns[i]->AutoSizeMode = DataGridViewAutoSizeColumnMode::AllCells;
		}

		dataGridView1->DataSource = borrow->dataTable;
		dataGridView1->ReadOnly = true;

		for (int i = 0; i < dataGridView1->Columns->Count; i++) {
			dataGridView1->Columns[i]->AutoSizeMode = DataGridViewAutoSizeColumnMode::AllCells;
		}
	}
	};
}
