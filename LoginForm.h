#pragma once
#include "ForgetForm.h"
#include "user.h"
#include"MainForm.h"
namespace LibraryMG {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for LoginForm
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		LoginForm(void)
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
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;


	private: System::Windows::Forms::Panel^ Login_panel;

	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Panel^ panel6;

	private: System::Windows::Forms::Button^ button3;





	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;

	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;

	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Panel^ panel10;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Panel^ panel9;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::TextBox^ btnemail;
	private: System::Windows::Forms::TextBox^ btnpassword;











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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LoginForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->Login_panel = (gcnew System::Windows::Forms::Panel());
			this->btnemail = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->btnpassword = (gcnew System::Windows::Forms::TextBox());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->Login_panel->SuspendLayout();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(72)), static_cast<System::Int32>(static_cast<System::Byte>(149)),
				static_cast<System::Int32>(static_cast<System::Byte>(239)));
			this->panel1->Controls->Add(this->pictureBox2);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Location = System::Drawing::Point(373, -3);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(398, 513);
			this->panel1->TabIndex = 0;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(345, 15);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(22, 22);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &LoginForm::pictureBox2_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(27, 89);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(324, 316);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// Login_panel
			// 
			this->Login_panel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(240)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->Login_panel->Controls->Add(this->btnpassword);
			this->Login_panel->Controls->Add(this->btnemail);
			this->Login_panel->Controls->Add(this->label4);
			this->Login_panel->Controls->Add(this->label5);
			this->Login_panel->Controls->Add(this->label3);
			this->Login_panel->Controls->Add(this->panel7);
			this->Login_panel->Controls->Add(this->panel6);
			this->Login_panel->Controls->Add(this->button3);
			this->Login_panel->Controls->Add(this->label2);
			this->Login_panel->Controls->Add(this->label1);
			this->Login_panel->Location = System::Drawing::Point(30, 115);
			this->Login_panel->Name = L"Login_panel";
			this->Login_panel->Size = System::Drawing::Size(311, 321);
			this->Login_panel->TabIndex = 3;
			this->Login_panel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &LoginForm::panel3_Paint);
			// 
			// btnemail
			// 
			this->btnemail->Location = System::Drawing::Point(57, 117);
			this->btnemail->Name = L"btnemail";
			this->btnemail->Size = System::Drawing::Size(156, 20);
			this->btnemail->TabIndex = 11;
			this->btnemail->TextChanged += gcnew System::EventHandler(this, &LoginForm::btnemail_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(66, 280);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(105, 13);
			this->label4->TabIndex = 10;
			this->label4->Text = L"I don\'t have account";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(72)), static_cast<System::Int32>(static_cast<System::Byte>(149)),
				static_cast<System::Int32>(static_cast<System::Byte>(239)));
			this->label5->Location = System::Drawing::Point(168, 280);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(45, 13);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Sign Up";
			this->label5->Click += gcnew System::EventHandler(this, &LoginForm::label5_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(72)), static_cast<System::Int32>(static_cast<System::Byte>(149)),
				static_cast<System::Int32>(static_cast<System::Byte>(239)));
			this->label3->Location = System::Drawing::Point(54, 202);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(92, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Forget Password\?";
			this->label3->Click += gcnew System::EventHandler(this, &LoginForm::label3_Click);
			// 
			// panel7
			// 
			this->panel7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel7.BackgroundImage")));
			this->panel7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel7->Location = System::Drawing::Point(34, 117);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(17, 17);
			this->panel7->TabIndex = 7;
			// 
			// panel6
			// 
			this->panel6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel6.BackgroundImage")));
			this->panel6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel6->Location = System::Drawing::Point(34, 165);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(17, 17);
			this->panel6->TabIndex = 6;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(105, 231);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(92, 31);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Login ";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &LoginForm::button3_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(31, 60);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(230, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Welcome back, Please login in to your account";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(124, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(33, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Login";
			this->label1->Click += gcnew System::EventHandler(this, &LoginForm::label1_Click_1);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(150, 73);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(65, 13);
			this->label6->TabIndex = 4;
			this->label6->Text = L"Yves Library";
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(240)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->panel3->Controls->Add(this->textBox7);
			this->panel3->Controls->Add(this->panel10);
			this->panel3->Controls->Add(this->textBox6);
			this->panel3->Controls->Add(this->panel9);
			this->panel3->Controls->Add(this->textBox5);
			this->panel3->Controls->Add(this->label7);
			this->panel3->Controls->Add(this->label8);
			this->panel3->Controls->Add(this->panel5);
			this->panel3->Controls->Add(this->panel8);
			this->panel3->Controls->Add(this->button1);
			this->panel3->Controls->Add(this->textBox3);
			this->panel3->Controls->Add(this->textBox4);
			this->panel3->Controls->Add(this->label10);
			this->panel3->Controls->Add(this->label11);
			this->panel3->Location = System::Drawing::Point(30, 115);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(311, 321);
			this->panel3->TabIndex = 11;
			this->panel3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &LoginForm::panel3_Paint_1);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(64, 100);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(156, 20);
			this->textBox7->TabIndex = 13;
			// 
			// panel10
			// 
			this->panel10->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel10.BackgroundImage")));
			this->panel10->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel10->Location = System::Drawing::Point(41, 126);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(17, 17);
			this->panel10->TabIndex = 8;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(64, 126);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(156, 20);
			this->textBox6->TabIndex = 12;
			// 
			// panel9
			// 
			this->panel9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel9.BackgroundImage")));
			this->panel9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel9->Location = System::Drawing::Point(41, 204);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(17, 17);
			this->panel9->TabIndex = 7;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(64, 204);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(156, 20);
			this->textBox5->TabIndex = 11;
			this->textBox5->UseSystemPasswordChar = true;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(73, 277);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(79, 13);
			this->label7->TabIndex = 10;
			this->label7->Text = L"I have account";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(72)), static_cast<System::Int32>(static_cast<System::Byte>(149)),
				static_cast<System::Int32>(static_cast<System::Byte>(239)));
			this->label8->Location = System::Drawing::Point(149, 277);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(33, 13);
			this->label8->TabIndex = 9;
			this->label8->Text = L"Login";
			this->label8->Click += gcnew System::EventHandler(this, &LoginForm::label8_Click);
			// 
			// panel5
			// 
			this->panel5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel5.BackgroundImage")));
			this->panel5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel5->Location = System::Drawing::Point(41, 155);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(17, 17);
			this->panel5->TabIndex = 7;
			// 
			// panel8
			// 
			this->panel8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel8.BackgroundImage")));
			this->panel8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel8->Location = System::Drawing::Point(41, 178);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(17, 17);
			this->panel8->TabIndex = 6;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(102, 230);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(92, 31);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Sign Up";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(64, 152);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(156, 20);
			this->textBox3->TabIndex = 3;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(64, 178);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(156, 20);
			this->textBox4->TabIndex = 2;
			this->textBox4->UseSystemPasswordChar = true;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(96, 60);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(98, 13);
			this->label10->TabIndex = 1;
			this->label10->Text = L"Please fill your data";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(122, 19);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(45, 13);
			this->label11->TabIndex = 0;
			this->label11->Text = L"Sign Up";
			// 
			// btnpassword
			// 
			this->btnpassword->Location = System::Drawing::Point(57, 162);
			this->btnpassword->Name = L"btnpassword";
			this->btnpassword->Size = System::Drawing::Size(156, 20);
			this->btnpassword->TabIndex = 12;
			this->btnpassword->UseSystemPasswordChar = true;
			this->btnpassword->TextChanged += gcnew System::EventHandler(this, &LoginForm::btnpassword_TextChanged);
			// 
			// LoginForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ClientSize = System::Drawing::Size(752, 479);
			this->Controls->Add(this->Login_panel);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"LoginForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"LoginForm";
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->Login_panel->ResumeLayout(false);
			this->Login_panel->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: User^ user = nullptr;
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void panel4_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	     Application::Exit();
}
private: System::Void panel3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	     Login_panel->Hide();
}
private: System::Void panel3_Paint_1(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
	     label11->Hide();
	     Login_panel->Show();
}

public: static bool isForgotOPEN = false;
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (isForgotOPEN) {
		ForgetForm^ forgetForm = gcnew ForgetForm();
		forgetForm->Show();
		isForgotOPEN = true;
	}
	else {
		nullptr;
	}
}
private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
	   public:  LibraryMG::MainForm^ mainForm = nullptr;
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ email = this->btnemail->Text;
	String^ password = this->btnpassword->Text;
	if (email->Length == 0 || password->Length == 0) {
		MessageBox::Show("Please enter email and password",
			"Email or Password Empty",MessageBoxButtons::OK);
		return;
	}try {
		String^ connString = "Data Source=161.35.68.179;Initial Catalog=LibraryMG;Persist Security Info=True;User ID=SA;Password=Producer@123";
		SqlConnection sqlConn(connString);
		sqlConn.Open();
		String^ sqlQuery = "SELECT * FROM users WHERE email=@email AND password=@pwd";
			SqlCommand command(sqlQuery, % sqlConn);
			command.Parameters->AddWithValue("@email", email);
			command.Parameters->AddWithValue("@pwd", password);
	
			SqlDataReader^ reader = command.ExecuteReader();
			if (reader->Read()) {
				user = gcnew User;
				user->id = reader->GetInt32(0);
				user->name = reader->GetString(1);
				user->email = reader->GetString(2);
				user->isAdmin = reader->GetString(3);
				user->password = reader->GetString(4);
				user->username = reader->GetString(5);
				user->pwdhintl = reader->GetString(6);
				this -> Close();

				MainForm^ mainForm = gcnew MainForm();
				mainForm->Show();
			}
			else {
				reader->Close();
				MessageBox::Show("Email or password is incorrect", "try again",
				MessageBoxButtons::OK);
			}
	}
	catch (Exception^ e) {
		MessageBox::Show("Failed to connect to database",
			"Database connection Error", MessageBoxButtons::OK);
	}
}

private: System::Void btnemail_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnpassword_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
