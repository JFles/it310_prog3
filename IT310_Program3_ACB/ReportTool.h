#pragma once

namespace IT310Program3ACB {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ReportTool
	/// </summary>
	public ref class ReportTool : public System::Windows::Forms::Form
	{
	public:
		ReportTool(void)
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
		~ReportTool()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::GroupBox^  Process;

	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  ExitButton;
	private: System::Windows::Forms::Button^  ReportButton;


	private: System::Windows::Forms::TextBox^  HeadingTextBox;

	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox1;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(ReportTool::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->Process = (gcnew System::Windows::Forms::GroupBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->ExitButton = (gcnew System::Windows::Forms::Button());
			this->ReportButton = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->HeadingTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->Process->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Location = System::Drawing::Point(28, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(832, 263);
			this->panel1->TabIndex = 0;
			// 
			// panel2
			// 
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel2->Controls->Add(this->Process);
			this->panel2->Controls->Add(this->groupBox1);
			this->panel2->Location = System::Drawing::Point(3, 3);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(805, 241);
			this->panel2->TabIndex = 0;
			// 
			// Process
			// 
			this->Process->Controls->Add(this->pictureBox2);
			this->Process->Controls->Add(this->label4);
			this->Process->Controls->Add(this->label3);
			this->Process->Controls->Add(this->ExitButton);
			this->Process->Controls->Add(this->ReportButton);
			this->Process->Location = System::Drawing::Point(480, 3);
			this->Process->Name = L"Process";
			this->Process->Size = System::Drawing::Size(301, 228);
			this->Process->TabIndex = 1;
			this->Process->TabStop = false;
			this->Process->Text = L"Process";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(-6, 142);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(313, 80);
			this->pictureBox2->TabIndex = 4;
			this->pictureBox2->TabStop = false;
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(127, 94);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(167, 27);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Exit Program";
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(128, 45);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(167, 27);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Create List";
			// 
			// ExitButton
			// 
			this->ExitButton->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->ExitButton->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ExitButton->Location = System::Drawing::Point(21, 76);
			this->ExitButton->Name = L"ExitButton";
			this->ExitButton->Size = System::Drawing::Size(100, 60);
			this->ExitButton->TabIndex = 1;
			this->ExitButton->Text = L"Exit";
			this->ExitButton->UseVisualStyleBackColor = false;
			this->ExitButton->Click += gcnew System::EventHandler(this, &ReportTool::ExitButton_Click);

			// 
			// ReportButton
			// 
			this->ReportButton->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->ReportButton->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ReportButton->Location = System::Drawing::Point(21, 21);
			this->ReportButton->Name = L"ReportButton";
			this->ReportButton->Size = System::Drawing::Size(100, 64);
			this->ReportButton->TabIndex = 0;
			this->ReportButton->Text = L"Report";
			this->ReportButton->UseVisualStyleBackColor = false;
			this->ReportButton->Click += gcnew System::EventHandler(this, &ReportTool::ReportButton_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->pictureBox1);
			this->groupBox1->Controls->Add(this->HeadingTextBox);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(3, 3);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(471, 228);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Name";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(11, 21);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(140, 130);
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			// 
			// HeadingTextBox
			// 
			this->HeadingTextBox->Location = System::Drawing::Point(240, 202);
			this->HeadingTextBox->Name = L"HeadingTextBox";
			this->HeadingTextBox->Size = System::Drawing::Size(225, 20);
			this->HeadingTextBox->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(6, 195);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(227, 30);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Report Heading:";
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(157, 16);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(308, 89);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Please Enter The Heading Of The Report And Press The \"Report\" Button";
			// 
			// ReportTool
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->ClientSize = System::Drawing::Size(882, 285);
			this->Controls->Add(this->panel1);
			this->Name = L"ReportTool";
			this->Text = L"ReportTool";
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->Process->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}

#pragma endregion

		private:System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e)
		{


		//Load Images on Opening of Form

		pictureBox1 -> Image =
			Image::FromFile(String::Concat(Directory::GetCurrentDirectory(), "\\Supplies.jpg"));

		pictureBox2->Image =
			Image::FromFile(String::Concat(Directory::GetCurrentDirectory(), "Scissor.jpg"));

	
	}

		private: System::Void ExitButton_Click(System::Object^ sender,
			System::EventArgs^ e)
		{
			//Exit the Program
			Application::Exit();
		}


		private: System::Void HeadingTextBox_Click(System::Object^ sender,
			System::EventArgs^ e)
		{
			//Clear Entry in Text Box
			HeadingTextBox -> Clear();
		}


private: System::Void ReportButton_Click(System::Object^  sender, System::EventArgs^  e)
		{
			Inventory * CurrentRecordPointer;
			std::ifstream DataFile;
			int initIDNumber = 0;
			char initProdDesc[19] = "\0"; //need to validate array size
			int initManifID = 0;
			double initWholesale = 0.00;
			double initMarkUP = 0.00;
			int initcountInv = 0;
			char* ReportName;

			DataFile.open((char*)(void*)Marshal::StringToHGlobalAnsi
			(String::Concat(Directory::GetCurrentDirectory(),
				"\\InventoryFileForInput.txt")));

			if (!DataFile)
			{
				Application::Exit();
				return;
			}
			
			//Read Input data from external data file

			DataFile >> initIDNumber;
			DataFile.ignore();
			DataFile.get(initProdDesc, 19);
			DataFile >> initManifID;
			DataFile >> initWholesale;
			DataFile >> initMarkUP;
			DataFile >> initcountInv;
			while(DataFile)
			{
				CurrentRecordPointer = new Inventory;
				CurrentRecordPointer->InsertItem(initIDNumber, initProdDesc, initManifID, initWholesale, initMarkUP, initcountInv, CurrentRecordPointer);
				DataFile >> initIDNumber;
				DataFile.ignore();
				DataFile.get(initProdDesc, 19);
				DataFile >> initManifID;
				DataFile >> initWholesale;
				DataFile >> initMarkUP;
				DataFile >> initcountInv;
			}

			// Get Report  Name entered into appropriate text box and store in ReportName variable

			ReportName = (char*)(void*)Marshal::StringToHGlobalAnsi
			(HeadingTextBox->Text);

			//Calls the class function that lists the records in the linked list
			FirstRecordPointer->ListRecords(ReportName);

			//Post status message in text box
			HeadingTextBox->Clear();
			HeadingTextBox->Text = "Output File Created";

			//Delete Pointers

			delete CurrentRecordPointer;
			FirstRecordPointer = NULL;
			DataFile.close();

		}


};

};


//int initIDNumber, char initProdDesc[], int initManifID, double initWholesale, double initMarkUP, int initcountInv, Inventory * CurrentRecordPointer