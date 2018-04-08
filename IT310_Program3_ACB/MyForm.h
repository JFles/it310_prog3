#pragma once

namespace IT310Program3ACB {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Runtime::InteropServices;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label19;

	private: System::Windows::Forms::TextBox^  prodInput;

	private: System::Windows::Forms::TextBox^  descInput;

	private: System::Windows::Forms::TextBox^  manifInput;

	private: System::Windows::Forms::TextBox^  wholesaleInput;

	private: System::Windows::Forms::TextBox^  markupInput;

	private: System::Windows::Forms::TextBox^  instockinput;

	private: System::Windows::Forms::TextBox^  prodOutput;

	private: System::Windows::Forms::TextBox^  descOutput;

	private: System::Windows::Forms::TextBox^  manifOutput;

	private: System::Windows::Forms::TextBox^  retailOutput;

	private: System::Windows::Forms::TextBox^  instockOutput;

	private: System::Windows::Forms::Button^  displayButton;

	private: System::Windows::Forms::Button^  exitButton;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->prodInput = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->descInput = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->manifInput = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->wholesaleInput = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->markupInput = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->instockinput = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->prodOutput = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->descOutput = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->manifOutput = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->retailOutput = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->instockOutput = (gcnew System::Windows::Forms::TextBox());
			this->displayButton = (gcnew System::Windows::Forms::Button());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->exitButton = (gcnew System::Windows::Forms::Button());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(259, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(419, 140);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Orchid Office Supply Company Inventory System";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(352, 167);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(233, 26);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Office Product Output Data";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(25, 167);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(218, 26);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Office Product Input Data";
			// 
			// prodInput
			// 
			this->prodInput->Location = System::Drawing::Point(25, 230);
			this->prodInput->Name = L"prodInput";
			this->prodInput->Size = System::Drawing::Size(218, 22);
			this->prodInput->TabIndex = 5;
			this->prodInput->Click += gcnew System::EventHandler(this, &MyForm::prodInput_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(21, 207);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(145, 20);
			this->label6->TabIndex = 6;
			this->label6->Text = L"Product ID Number";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(21, 266);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(89, 20);
			this->label7->TabIndex = 7;
			this->label7->Text = L"Description";
			// 
			// descInput
			// 
			this->descInput->Location = System::Drawing::Point(25, 299);
			this->descInput->Name = L"descInput";
			this->descInput->Size = System::Drawing::Size(218, 22);
			this->descInput->TabIndex = 8;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(21, 336);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(196, 20);
			this->label8->TabIndex = 9;
			this->label8->Text = L"Manufacturer\'s ID Number";
			// 
			// manifInput
			// 
			this->manifInput->Location = System::Drawing::Point(25, 369);
			this->manifInput->Name = L"manifInput";
			this->manifInput->Size = System::Drawing::Size(218, 22);
			this->manifInput->TabIndex = 10;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(21, 413);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(122, 20);
			this->label9->TabIndex = 11;
			this->label9->Text = L"Wholesale Price";
			// 
			// wholesaleInput
			// 
			this->wholesaleInput->Location = System::Drawing::Point(25, 436);
			this->wholesaleInput->Name = L"wholesaleInput";
			this->wholesaleInput->Size = System::Drawing::Size(218, 22);
			this->wholesaleInput->TabIndex = 12;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(21, 471);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(148, 20);
			this->label10->TabIndex = 13;
			this->label10->Text = L"Markup Percentage";
			// 
			// markupInput
			// 
			this->markupInput->Location = System::Drawing::Point(25, 494);
			this->markupInput->Name = L"markupInput";
			this->markupInput->Size = System::Drawing::Size(218, 22);
			this->markupInput->TabIndex = 14;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(21, 528);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(208, 20);
			this->label11->TabIndex = 15;
			this->label11->Text = L"Quantity of Product In Stock";
			// 
			// instockinput
			// 
			this->instockinput->Location = System::Drawing::Point(25, 560);
			this->instockinput->Name = L"instockinput";
			this->instockinput->Size = System::Drawing::Size(218, 22);
			this->instockinput->TabIndex = 16;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(348, 207);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(145, 20);
			this->label12->TabIndex = 17;
			this->label12->Text = L"Product ID Number";
			// 
			// prodOutput
			// 
			this->prodOutput->Location = System::Drawing::Point(352, 230);
			this->prodOutput->Name = L"prodOutput";
			this->prodOutput->Size = System::Drawing::Size(218, 22);
			this->prodOutput->TabIndex = 18;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(348, 266);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(89, 20);
			this->label13->TabIndex = 19;
			this->label13->Text = L"Description";
			// 
			// descOutput
			// 
			this->descOutput->Location = System::Drawing::Point(352, 299);
			this->descOutput->Name = L"descOutput";
			this->descOutput->Size = System::Drawing::Size(218, 22);
			this->descOutput->TabIndex = 20;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(348, 336);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(196, 20);
			this->label14->TabIndex = 21;
			this->label14->Text = L"Manufacturer\'s ID Number";
			// 
			// manifOutput
			// 
			this->manifOutput->Location = System::Drawing::Point(352, 369);
			this->manifOutput->Name = L"manifOutput";
			this->manifOutput->Size = System::Drawing::Size(218, 22);
			this->manifOutput->TabIndex = 22;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(348, 413);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(89, 20);
			this->label15->TabIndex = 23;
			this->label15->Text = L"Retail Price";
			// 
			// retailOutput
			// 
			this->retailOutput->Location = System::Drawing::Point(352, 436);
			this->retailOutput->Name = L"retailOutput";
			this->retailOutput->Size = System::Drawing::Size(218, 22);
			this->retailOutput->TabIndex = 24;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(348, 471);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(129, 20);
			this->label16->TabIndex = 25;
			this->label16->Text = L"Quantity in Stock";
			// 
			// instockOutput
			// 
			this->instockOutput->Location = System::Drawing::Point(352, 494);
			this->instockOutput->Name = L"instockOutput";
			this->instockOutput->Size = System::Drawing::Size(218, 22);
			this->instockOutput->TabIndex = 26;
			// 
			// displayButton
			// 
			this->displayButton->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->displayButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->displayButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->displayButton->Location = System::Drawing::Point(25, 641);
			this->displayButton->Name = L"displayButton";
			this->displayButton->Size = System::Drawing::Size(85, 42);
			this->displayButton->TabIndex = 27;
			this->displayButton->Text = L"Display";
			this->displayButton->UseVisualStyleBackColor = false;
			this->displayButton->Click += gcnew System::EventHandler(this, &MyForm::displayButton_Click);
			// 
			// label17
			// 
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(116, 652);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(173, 44);
			this->label17->TabIndex = 28;
			this->label17->Text = L"Display Office Product Inventory Information";
			// 
			// exitButton
			// 
			this->exitButton->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->exitButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->exitButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->exitButton->Location = System::Drawing::Point(364, 641);
			this->exitButton->Name = L"exitButton";
			this->exitButton->Size = System::Drawing::Size(85, 42);
			this->exitButton->TabIndex = 30;
			this->exitButton->Text = L"Exit";
			this->exitButton->UseVisualStyleBackColor = false;
			this->exitButton->Click += gcnew System::EventHandler(this, &MyForm::exitButton_Click);
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(471, 652);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(99, 20);
			this->label19->TabIndex = 31;
			this->label19->Text = L"Exit Program";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(25, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(204, 137);
			this->pictureBox1->TabIndex = 32;
			this->pictureBox1->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->ClientSize = System::Drawing::Size(690, 705);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->exitButton);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->displayButton);
			this->Controls->Add(this->instockOutput);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->retailOutput);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->manifOutput);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->descOutput);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->prodOutput);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->instockinput);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->markupInput);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->wholesaleInput);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->manifInput);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->descInput);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->prodInput);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->Text = L"Orchid Office Supply Company";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion



private: System::Void prodInput_Click(System::Object^  sender, System::EventArgs^  e) {
	//Clear Entries

prodInput->Clear();

descInput->Clear();

manifInput->Clear();

wholesaleInput->Clear();

markupInput->Clear();

instockinput->Clear();

prodOutput->Clear();

descOutput->Clear();

manifOutput->Clear();

retailOutput->Clear();

instockOutput->Clear();
}

private: System::Void exitButton_Click(System::Object^  sender, System::EventArgs^  e) {
	Application::Exit();

}

private: System::Void displayButton_Click(System::Object^  sender, System::EventArgs^  e) {

	//Declare input variables to hold Text Box Entries
	
	int initidNumber = 0;
	char* initprodDesc;
	int initmanifID = 0;
	double initwholesale = 0.0;
	double initmarkUp = 0.0;
	int initcountInv = 0;
	
	//Declare system string

	String^ prodDescString;

	// Extract and Convert Entries 

	initidNumber = Convert::ToInt32(prodInput->Text);
	initprodDesc = (char*)(void*)Marshal::StringToHGlobalAnsi(descInput->Text);
	initmanifID = Convert::ToInt32(manifInput->Text);
	initwholesale = Convert::ToDouble(wholesaleInput->Text);
	initmarkUp = Convert::ToDouble(markupInput->Text);
	initcountInv = Convert::ToInt32(instockinput->Text);


	Inventory Inventory(initidNumber, initprodDesc, initmanifID, initwholesale, initmarkUp, initcountInv);


	prodOutput->Text = Convert::ToString(Inventory.getIDNumber());

	prodDescString = gcnew String(Inventory.getProdDesc());
	descOutput->Text = prodDescString;

	manifOutput->Text = Convert::ToString(Inventory.getManifID());

	retailOutput->Text = ((Decimal) (Inventory.retailCalculate(initwholesale,initmarkUp))).ToString("c");

	instockOutput->Text = Convert::ToString(Inventory.getCountInv());

}

};
}

