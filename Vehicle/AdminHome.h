#pragma once
#include <string>
#include <stdio.h>
#include <stdlib.h>
using namespace System::Net::Mail;
using namespace System::IO;

namespace StuMgmtSys {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Text::RegularExpressions;

	/// <summary>
	/// Summary for AdminHome
	/// </summary>
	public ref class AdminHome : public System::Windows::Forms::Form
	{
	public:
		AdminHome(void)
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
		~AdminHome()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:













	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label8;

























	private: System::Windows::Forms::LinkLabel^  linkLabel2;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::DataGridView^  dataGridView3;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label2;






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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->linkLabel2 = (gcnew System::Windows::Forms::LinkLabel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panel2->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(518, 9);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(183, 25);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Admin Homepage";
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ControlLight;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(0, 53);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(625, 286);
			this->dataGridView1->TabIndex = 20;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->dataGridView1);
			this->panel2->Controls->Add(this->button3);
			this->panel2->Controls->Add(this->label8);
			this->panel2->Location = System::Drawing::Point(24, 55);
			this->panel2->Margin = System::Windows::Forms::Padding(2);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(646, 339);
			this->panel2->TabIndex = 21;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(462, 20);
			this->button3->Margin = System::Windows::Forms::Padding(2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(163, 29);
			this->button3->TabIndex = 19;
			this->button3->Text = L"Refresh List !!";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &AdminHome::button3_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(10, 11);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(121, 25);
			this->label8->TabIndex = 0;
			this->label8->Text = L"View Users";
			// 
			// linkLabel2
			// 
			this->linkLabel2->AutoSize = true;
			this->linkLabel2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel2->LinkColor = System::Drawing::Color::LawnGreen;
			this->linkLabel2->Location = System::Drawing::Point(20, 13);
			this->linkLabel2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->linkLabel2->Name = L"linkLabel2";
			this->linkLabel2->Size = System::Drawing::Size(49, 20);
			this->linkLabel2->TabIndex = 28;
			this->linkLabel2->TabStop = true;
			this->linkLabel2->Text = L"Close";
			this->linkLabel2->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &AdminHome::linkLabel2_LinkClicked);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->dataGridView3);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Location = System::Drawing::Point(690, 58);
			this->panel1->Margin = System::Windows::Forms::Padding(2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(646, 339);
			this->panel1->TabIndex = 22;
			// 
			// dataGridView3
			// 
			this->dataGridView3->AllowUserToAddRows = false;
			this->dataGridView3->AllowUserToDeleteRows = false;
			this->dataGridView3->BackgroundColor = System::Drawing::SystemColors::ControlLight;
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Location = System::Drawing::Point(0, 53);
			this->dataGridView3->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->ReadOnly = true;
			this->dataGridView3->RowTemplate->Height = 24;
			this->dataGridView3->Size = System::Drawing::Size(625, 286);
			this->dataGridView3->TabIndex = 20;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(462, 20);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(163, 29);
			this->button1->TabIndex = 19;
			this->button1->Text = L"Refresh List !!";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &AdminHome::button1_Click_1);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(10, 11);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(154, 25);
			this->label2->TabIndex = 0;
			this->label2->Text = L"View Bookings";
			// 
			// AdminHome
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Chocolate;
			this->ClientSize = System::Drawing::Size(1355, 749);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->linkLabel2);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->label1);
			this->Name = L"AdminHome";
			this->Text = L"AdminHome";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void linkLabel1_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
		Application::Exit();
	}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {

	String^ path = "F:\\VRcredentials.txt";
	StreamReader^ din = File::OpenText(path);
	array<String^>^ words;
	String^ delimStr = "-";
	DataSet^ myDataSet = gcnew DataSet("Users Data");
	myDataSet->Tables->Add("bData");
	DataTable^ patTable = myDataSet->Tables["bData"];
	//DataColumn^ firstNameColumn1 = playerTable->Columns->Add("First Name",String::typeid);
	//DataColumn^ lastNameColumn1 = playerTable->Columns->Add("Last Name",String::typeid);
	patTable->Columns->Add("Username", String::typeid);
	patTable->Columns->Add("Password", String::typeid);
	patTable->Columns->Add("Phone #", String::typeid);



	dataGridView1->DataSource = patTable;

	String^ str;
	//bool flag=false;
	while ((str = din->ReadLine()) != nullptr)
	{
		array<Char>^sep = gcnew array<Char>{'-'};

		words = str->Split(sep);
		//words = str->ToString()->Split("-");
		//for (int i=0; i<words->Length; i++)  
		{
			patTable->Rows->Add(words[0], words[1], words[2]);
		}
	}

	din->Close();
	/* if(flag)
	{
	MessageBox::Show("Credentials Found !!");
	HomePage^ h=gcnew HomePage();
	h->Show();
	this->Hide();
	}
	else
	{
	MessageBox::Show("Invalid Credentials !!");
	}*/
}
private: System::Void linkLabel2_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
	Application::Exit();
}
private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
	String^ path = "F:\\VRbookings.txt";
	StreamReader^ din = File::OpenText(path);
	array<String^>^ words;
	String^ delimStr = "-";
	DataSet^ myDataSet = gcnew DataSet("Bookings Data");
	myDataSet->Tables->Add("bData");
	DataTable^ patTable = myDataSet->Tables["bData"];
	//DataColumn^ firstNameColumn1 = playerTable->Columns->Add("First Name",String::typeid);
	//DataColumn^ lastNameColumn1 = playerTable->Columns->Add("Last Name",String::typeid);
	patTable->Columns->Add("Book Id", String::typeid);
	patTable->Columns->Add("Car Name", String::typeid);
	patTable->Columns->Add("Mileage", String::typeid);
	patTable->Columns->Add("Driver Name", String::typeid);
	patTable->Columns->Add("Driver Phone", String::typeid);
	patTable->Columns->Add("Date", String::typeid);
	patTable->Columns->Add("Amount", String::typeid);



	dataGridView3->DataSource = patTable;

	String^ str;
	//bool flag=false;
	while ((str = din->ReadLine()) != nullptr)
	{
		array<Char>^sep = gcnew array<Char>{'-'};

		words = str->Split(sep);
		//words = str->ToString()->Split("-");
		//for (int i=0; i<words->Length; i++)  
		{
			patTable->Rows->Add(words[0], words[1], words[2], words[3], words[4], words[5], words[6]);
		}
	}

	din->Close();
}
};
}
