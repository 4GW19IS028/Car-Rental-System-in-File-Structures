#pragma once
#include <string>
#include <stdio.h>
#include <stdlib.h>

namespace StuMgmtSys {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Net::Mail;

	/// <summary>
	/// Summary for StudentPage
	/// </summary>
	public ref class StudentPage : public System::Windows::Forms::Form
	{
	public:
		StudentPage(void)
		{
			InitializeComponent();
			String^ s= Convert::ToString(DateTime::Now);
			this->textBox4->Text = DateTime::Today.ToShortDateString();

			comboBox1->Items->Clear();
			comboBox1->Text = "--Select--";
			String^ path1 = "F:\\LMSbooks.txt";
			StreamReader^ din1 = File::OpenText(path1);
			String^ str1;
			bool flag1 = false;
			while ((str1 = din1->ReadLine()) != nullptr)
			{
					array<Char>^sep = gcnew array<Char>{'-'};

					array<String^>^ words = str1->Split(sep);
					comboBox1->Items->Add(words[1]);
			}
			din1->Close();

		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~StudentPage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;



	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;

	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::LinkLabel^  linkLabel1;
	private: System::Windows::Forms::ComboBox^  comboBox1;
private: System::Windows::Forms::Panel^  panel2;
private: System::Windows::Forms::TextBox^  textBox3;
private: System::Windows::Forms::Label^  label7;
private: System::Windows::Forms::DataGridView^  dataGridView1;
private: System::Windows::Forms::Button^  button3;
private: System::Windows::Forms::Label^  label8;












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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(539, 20);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(263, 31);
			this->label1->TabIndex = 25;
			this->label1->Text = L"Student Homepage";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Chocolate;
			this->panel1->Controls->Add(this->comboBox1);
			this->panel1->Controls->Add(this->textBox4);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->textBox2);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Location = System::Drawing::Point(28, 93);
			this->panel1->Margin = System::Windows::Forms::Padding(2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(523, 428);
			this->panel1->TabIndex = 21;
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(215, 160);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(217, 28);
			this->comboBox1->TabIndex = 22;
			this->comboBox1->Text = L"--Select--";
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(215, 210);
			this->textBox4->Margin = System::Windows::Forms::Padding(2);
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(217, 30);
			this->textBox4->TabIndex = 21;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(13, 110);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(185, 26);
			this->label5->TabIndex = 20;
			this->label5->Text = L"Student Name : ";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button2->Location = System::Drawing::Point(215, 272);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(217, 54);
			this->button2->TabIndex = 19;
			this->button2->Text = L"Borrow Book !!";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &StudentPage::button2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(7, 213);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(191, 26);
			this->label3->TabIndex = 16;
			this->label3->Text = L"Borrowed Date : ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(37, 162);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(161, 26);
			this->label2->TabIndex = 14;
			this->label2->Text = L"Select Book : ";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(215, 106);
			this->textBox2->Margin = System::Windows::Forms::Padding(2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(217, 30);
			this->textBox2->TabIndex = 17;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(215, 52);
			this->textBox1->Margin = System::Windows::Forms::Padding(2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(217, 30);
			this->textBox1->TabIndex = 15;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(52, 56);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(146, 26);
			this->label4->TabIndex = 12;
			this->label4->Text = L"Student ID : ";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(178, 12);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(145, 25);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Borrow Books";
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel1->LinkColor = System::Drawing::Color::LawnGreen;
			this->linkLabel1->Location = System::Drawing::Point(24, 20);
			this->linkLabel1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(49, 20);
			this->linkLabel1->TabIndex = 27;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Close";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &StudentPage::linkLabel1_LinkClicked);
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->textBox3);
			this->panel2->Controls->Add(this->label7);
			this->panel2->Controls->Add(this->dataGridView1);
			this->panel2->Controls->Add(this->button3);
			this->panel2->Controls->Add(this->label8);
			this->panel2->Location = System::Drawing::Point(592, 93);
			this->panel2->Margin = System::Windows::Forms::Padding(2);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(689, 428);
			this->panel2->TabIndex = 28;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(173, 61);
			this->textBox3->Margin = System::Windows::Forms::Padding(2);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(217, 30);
			this->textBox3->TabIndex = 22;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(10, 65);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(146, 26);
			this->label7->TabIndex = 21;
			this->label7->Text = L"Student ID : ";
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ControlLight;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(2, 142);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(685, 286);
			this->dataGridView1->TabIndex = 20;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(411, 62);
			this->button3->Margin = System::Windows::Forms::Padding(2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(163, 29);
			this->button3->TabIndex = 19;
			this->button3->Text = L"Check !!";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &StudentPage::button3_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(10, 11);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(125, 25);
			this->label8->TabIndex = 0;
			this->label8->Text = L"My Borrows";
			// 
			// StudentPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Chocolate;
			this->ClientSize = System::Drawing::Size(1370, 593);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label1);
			this->Name = L"StudentPage";
			this->Text = L"StudentPage";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		
		
		String^ path = "F:\\LMSborrows.txt";

		//Pass the file path and file name to the StreamWriter Constructor.
		StreamWriter^ sw = File::AppendText(path);//gcnew StreamWriter(L"F:\\Hcredentials.txt");

		String^ line = this->textBox1->Text + "%" + this->textBox2->Text + "%" + this->comboBox1->Text + "%" + this->textBox4->Text +"%"+DateTime::Today.AddDays(15).ToShortDateString() + "\r\n";
		//Write a line of text.
		sw->Write(line);

		//Close the file.
		sw->Close();
		MessageBox::Show("Borrowing of book was done successfully and it should be returned on or before "+DateTime::Today.AddDays(15).ToShortDateString());

		
	}
private: System::Void linkLabel1_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
	Application::Exit();
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->textBox3->Text != "")
	{
		String^ path = "F:\\LMSborrows.txt";
		StreamReader^ din = File::OpenText(path);
		array<String^>^ words;
		String^ delimStr = "%";
		DataSet^ myDataSet = gcnew DataSet("Borrows Data");
		myDataSet->Tables->Add("bData");
		DataTable^ patTable = myDataSet->Tables["bData"];
		//DataColumn^ firstNameColumn1 = playerTable->Columns->Add("First Name",String::typeid);
		//DataColumn^ lastNameColumn1 = playerTable->Columns->Add("Last Name",String::typeid);
		patTable->Columns->Add("Student Id", String::typeid);
		patTable->Columns->Add("Student Name", String::typeid);
		patTable->Columns->Add("Book", String::typeid);
		patTable->Columns->Add("Borrowed Date", String::typeid);
		patTable->Columns->Add("Return Date", String::typeid);
		patTable->Columns->Add("Due in Rs", String::typeid);



		dataGridView1->DataSource = patTable;

		String^ line = this->textBox3->Text + "%";
		String^ str;
		//bool flag=false;
		while ((str = din->ReadLine()) != nullptr)
		{
			bool b;
			b = str->Contains(line);
			if (b)
			{
				array<Char>^sep = gcnew array<Char>{'%'};

				words = str->Split(sep);
				{
					int val = DateTime::Compare(Convert::ToDateTime(words[4]), DateTime::Today);
					int amount = 0;
					if (val < 0)
					{
						amount = 5;
					}
					patTable->Rows->Add(words[0], words[1], words[2], words[3], words[4], amount);
				}
			}

		}


		din->Close();
	}

}
};
}
