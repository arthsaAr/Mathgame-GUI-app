#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
			panel1->Hide();
			QF1->Hide();
			QF2->Hide();
			QF3->Hide();
			QF4->Hide();
			QF5->Hide();
			QF6->Hide();
			lastpage->Hide();
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
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ QF1;


	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Panel^ QF2;

	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Panel^ QF3;
	private: System::Windows::Forms::Panel^ QF4;
	private: System::Windows::Forms::Panel^ QF5;
	private: System::Windows::Forms::Panel^ QF6;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Panel^ lastpage;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ result;

	private: System::Windows::Forms::Button^ button18;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->QF1 = (gcnew System::Windows::Forms::Panel());
			this->QF2 = (gcnew System::Windows::Forms::Panel());
			this->QF3 = (gcnew System::Windows::Forms::Panel());
			this->QF4 = (gcnew System::Windows::Forms::Panel());
			this->QF5 = (gcnew System::Windows::Forms::Panel());
			this->QF6 = (gcnew System::Windows::Forms::Panel());
			this->lastpage = (gcnew System::Windows::Forms::Panel());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->result = (gcnew System::Windows::Forms::Label());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->QF1->SuspendLayout();
			this->QF2->SuspendLayout();
			this->QF3->SuspendLayout();
			this->QF4->SuspendLayout();
			this->QF5->SuspendLayout();
			this->QF6->SuspendLayout();
			this->lastpage->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Gold;
			this->button1->Font = (gcnew System::Drawing::Font(L"Monoid", 12, System::Drawing::FontStyle::Bold));
			this->button1->Location = System::Drawing::Point(240, 220);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(132, 56);
			this->button1->TabIndex = 0;
			this->button1->Text = L"START";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Gold;
			this->label1->Font = (gcnew System::Drawing::Font(L"Monoid", 14, System::Drawing::FontStyle::Italic));
			this->label1->Location = System::Drawing::Point(100, 133);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(402, 26);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Let\'s Begin A Quick Math Game!";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(540, 333);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 32);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Exit";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->Controls->Add(this->QF1);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(627, 377);
			this->panel1->TabIndex = 3;
			// 
			// QF1
			// 
			this->QF1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"QF1.BackgroundImage")));
			this->QF1->Controls->Add(this->QF2);
			this->QF1->Controls->Add(this->button5);
			this->QF1->Controls->Add(this->button4);
			this->QF1->Controls->Add(this->label4);
			this->QF1->Controls->Add(this->pictureBox1);
			this->QF1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->QF1->Location = System::Drawing::Point(0, 0);
			this->QF1->Name = L"QF1";
			this->QF1->Size = System::Drawing::Size(627, 377);
			this->QF1->TabIndex = 3;
			// 
			// QF2
			// 
			this->QF2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"QF2.BackgroundImage")));
			this->QF2->Controls->Add(this->QF3);
			this->QF2->Controls->Add(this->button6);
			this->QF2->Controls->Add(this->button7);
			this->QF2->Controls->Add(this->label5);
			this->QF2->Controls->Add(this->pictureBox2);
			this->QF2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->QF2->Location = System::Drawing::Point(0, 0);
			this->QF2->Name = L"QF2";
			this->QF2->Size = System::Drawing::Size(627, 377);
			this->QF2->TabIndex = 4;
			// 
			// QF3
			// 
			this->QF3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"QF3.BackgroundImage")));
			this->QF3->Controls->Add(this->QF4);
			this->QF3->Controls->Add(this->button8);
			this->QF3->Controls->Add(this->button9);
			this->QF3->Controls->Add(this->label6);
			this->QF3->Controls->Add(this->pictureBox3);
			this->QF3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->QF3->Location = System::Drawing::Point(0, 0);
			this->QF3->Name = L"QF3";
			this->QF3->Size = System::Drawing::Size(627, 377);
			this->QF3->TabIndex = 4;
			// 
			// QF4
			// 
			this->QF4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"QF4.BackgroundImage")));
			this->QF4->Controls->Add(this->QF5);
			this->QF4->Controls->Add(this->button10);
			this->QF4->Controls->Add(this->button11);
			this->QF4->Controls->Add(this->label7);
			this->QF4->Controls->Add(this->pictureBox4);
			this->QF4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->QF4->Location = System::Drawing::Point(0, 0);
			this->QF4->Name = L"QF4";
			this->QF4->Size = System::Drawing::Size(627, 377);
			this->QF4->TabIndex = 4;
			// 
			// QF5
			// 
			this->QF5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"QF5.BackgroundImage")));
			this->QF5->Controls->Add(this->QF6);
			this->QF5->Controls->Add(this->button12);
			this->QF5->Controls->Add(this->button13);
			this->QF5->Controls->Add(this->label8);
			this->QF5->Controls->Add(this->pictureBox5);
			this->QF5->Dock = System::Windows::Forms::DockStyle::Fill;
			this->QF5->Location = System::Drawing::Point(0, 0);
			this->QF5->Name = L"QF5";
			this->QF5->Size = System::Drawing::Size(627, 377);
			this->QF5->TabIndex = 4;
			// 
			// QF6
			// 
			this->QF6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"QF6.BackgroundImage")));
			this->QF6->Controls->Add(this->lastpage);
			this->QF6->Controls->Add(this->button14);
			this->QF6->Controls->Add(this->button15);
			this->QF6->Controls->Add(this->label9);
			this->QF6->Controls->Add(this->pictureBox6);
			this->QF6->Dock = System::Windows::Forms::DockStyle::Fill;
			this->QF6->Location = System::Drawing::Point(0, 0);
			this->QF6->Name = L"QF6";
			this->QF6->Size = System::Drawing::Size(627, 377);
			this->QF6->TabIndex = 4;
			// 
			// lastpage
			// 
			this->lastpage->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"lastpage.BackgroundImage")));
			this->lastpage->Controls->Add(this->button18);
			this->lastpage->Controls->Add(this->result);
			this->lastpage->Controls->Add(this->button16);
			this->lastpage->Controls->Add(this->button17);
			this->lastpage->Controls->Add(this->label10);
			this->lastpage->Dock = System::Windows::Forms::DockStyle::Fill;
			this->lastpage->Location = System::Drawing::Point(0, 0);
			this->lastpage->Name = L"lastpage";
			this->lastpage->Size = System::Drawing::Size(627, 377);
			this->lastpage->TabIndex = 4;
			// 
			// button18
			// 
			this->button18->Location = System::Drawing::Point(116, 220);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(276, 37);
			this->button18->TabIndex = 5;
			this->button18->Text = L"Click Me For Answer";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// result
			// 
			this->result->AutoSize = true;
			this->result->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->result->Font = (gcnew System::Drawing::Font(L"Monoid", 25, System::Drawing::FontStyle::Italic));
			this->result->Location = System::Drawing::Point(20, 133);
			this->result->Name = L"result";
			this->result->Size = System::Drawing::Size(572, 46);
			this->result->TabIndex = 4;
			this->result->Text = L"Answer will Appear HERE!";
			this->result->Click += gcnew System::EventHandler(this, &MyForm::result_Click);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button16->Font = (gcnew System::Drawing::Font(L"Monoid", 12, System::Drawing::FontStyle::Italic));
			this->button16->Location = System::Drawing::Point(258, 281);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(114, 40);
			this->button16->TabIndex = 3;
			this->button16->Text = L"Quit";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button17->Font = (gcnew System::Drawing::Font(L"Monoid", 12, System::Drawing::FontStyle::Italic));
			this->button17->Location = System::Drawing::Point(69, 281);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(143, 40);
			this->button17->TabIndex = 2;
			this->button17->Text = L"Play Again\?";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Gold;
			this->label10->Font = (gcnew System::Drawing::Font(L"Monoid", 16, System::Drawing::FontStyle::Italic));
			this->label10->Location = System::Drawing::Point(23, 54);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(493, 30);
			this->label10->TabIndex = 1;
			this->label10->Text = L"The number you are thinking is: ";
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button14->Font = (gcnew System::Drawing::Font(L"Monoid", 14, System::Drawing::FontStyle::Italic));
			this->button14->Location = System::Drawing::Point(258, 281);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(114, 40);
			this->button14->TabIndex = 3;
			this->button14->Text = L"No";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button15->Font = (gcnew System::Drawing::Font(L"Monoid", 14, System::Drawing::FontStyle::Italic));
			this->button15->Location = System::Drawing::Point(82, 281);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(114, 40);
			this->button15->TabIndex = 2;
			this->button15->Text = L"Yes";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Gold;
			this->label9->Font = (gcnew System::Drawing::Font(L"Monoid", 16, System::Drawing::FontStyle::Italic));
			this->label9->Location = System::Drawing::Point(23, 54);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(553, 30);
			this->label9->TabIndex = 1;
			this->label9->Text = L"Is your number present in this list\?";
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.BackgroundImage")));
			this->pictureBox6->Location = System::Drawing::Point(52, 120);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(308, 110);
			this->pictureBox6->TabIndex = 0;
			this->pictureBox6->TabStop = false;
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button12->Font = (gcnew System::Drawing::Font(L"Monoid", 14, System::Drawing::FontStyle::Italic));
			this->button12->Location = System::Drawing::Point(258, 281);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(114, 40);
			this->button12->TabIndex = 3;
			this->button12->Text = L"No";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button13->Font = (gcnew System::Drawing::Font(L"Monoid", 14, System::Drawing::FontStyle::Italic));
			this->button13->Location = System::Drawing::Point(82, 281);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(114, 40);
			this->button13->TabIndex = 2;
			this->button13->Text = L"Yes";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Gold;
			this->label8->Font = (gcnew System::Drawing::Font(L"Monoid", 16, System::Drawing::FontStyle::Italic));
			this->label8->Location = System::Drawing::Point(23, 54);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(553, 30);
			this->label8->TabIndex = 1;
			this->label8->Text = L"Is your number present in this list\?";
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.BackgroundImage")));
			this->pictureBox5->Location = System::Drawing::Point(52, 120);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(311, 110);
			this->pictureBox5->TabIndex = 0;
			this->pictureBox5->TabStop = false;
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button10->Font = (gcnew System::Drawing::Font(L"Monoid", 14, System::Drawing::FontStyle::Italic));
			this->button10->Location = System::Drawing::Point(258, 281);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(114, 40);
			this->button10->TabIndex = 3;
			this->button10->Text = L"No";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button11->Font = (gcnew System::Drawing::Font(L"Monoid", 14, System::Drawing::FontStyle::Italic));
			this->button11->Location = System::Drawing::Point(82, 281);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(114, 40);
			this->button11->TabIndex = 2;
			this->button11->Text = L"Yes";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Gold;
			this->label7->Font = (gcnew System::Drawing::Font(L"Monoid", 16, System::Drawing::FontStyle::Italic));
			this->label7->Location = System::Drawing::Point(23, 54);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(553, 30);
			this->label7->TabIndex = 1;
			this->label7->Text = L"Is your number present in this list\?";
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.BackgroundImage")));
			this->pictureBox4->Location = System::Drawing::Point(52, 120);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(311, 122);
			this->pictureBox4->TabIndex = 0;
			this->pictureBox4->TabStop = false;
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button8->Font = (gcnew System::Drawing::Font(L"Monoid", 14, System::Drawing::FontStyle::Italic));
			this->button8->Location = System::Drawing::Point(258, 281);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(114, 40);
			this->button8->TabIndex = 3;
			this->button8->Text = L"No";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button9->Font = (gcnew System::Drawing::Font(L"Monoid", 14, System::Drawing::FontStyle::Italic));
			this->button9->Location = System::Drawing::Point(82, 281);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(114, 40);
			this->button9->TabIndex = 2;
			this->button9->Text = L"Yes";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Gold;
			this->label6->Font = (gcnew System::Drawing::Font(L"Monoid", 16, System::Drawing::FontStyle::Italic));
			this->label6->Location = System::Drawing::Point(23, 54);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(553, 30);
			this->label6->TabIndex = 1;
			this->label6->Text = L"Is your number present in this list\?";
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->Location = System::Drawing::Point(52, 120);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(311, 122);
			this->pictureBox3->TabIndex = 0;
			this->pictureBox3->TabStop = false;
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button6->Font = (gcnew System::Drawing::Font(L"Monoid", 14, System::Drawing::FontStyle::Italic));
			this->button6->Location = System::Drawing::Point(258, 281);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(114, 40);
			this->button6->TabIndex = 3;
			this->button6->Text = L"No";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button7->Font = (gcnew System::Drawing::Font(L"Monoid", 14, System::Drawing::FontStyle::Italic));
			this->button7->Location = System::Drawing::Point(82, 281);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(114, 40);
			this->button7->TabIndex = 2;
			this->button7->Text = L"Yes";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Gold;
			this->label5->Font = (gcnew System::Drawing::Font(L"Monoid", 16, System::Drawing::FontStyle::Italic));
			this->label5->Location = System::Drawing::Point(23, 54);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(553, 30);
			this->label5->TabIndex = 1;
			this->label5->Text = L"Is your number present in this list\?";
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->Location = System::Drawing::Point(52, 120);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(311, 122);
			this->pictureBox2->TabIndex = 0;
			this->pictureBox2->TabStop = false;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button5->Font = (gcnew System::Drawing::Font(L"Monoid", 14, System::Drawing::FontStyle::Italic));
			this->button5->Location = System::Drawing::Point(258, 281);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(114, 40);
			this->button5->TabIndex = 3;
			this->button5->Text = L"No";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button4->Font = (gcnew System::Drawing::Font(L"Monoid", 14, System::Drawing::FontStyle::Italic));
			this->button4->Location = System::Drawing::Point(82, 281);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(114, 40);
			this->button4->TabIndex = 2;
			this->button4->Text = L"Yes";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Gold;
			this->label4->Font = (gcnew System::Drawing::Font(L"Monoid", 16, System::Drawing::FontStyle::Italic));
			this->label4->Location = System::Drawing::Point(23, 54);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(553, 30);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Is your number present in this list\?";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->Location = System::Drawing::Point(52, 120);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(311, 122);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Gold;
			this->label3->Font = (gcnew System::Drawing::Font(L"Monoid", 16, System::Drawing::FontStyle::Italic));
			this->label3->Location = System::Drawing::Point(23, 200);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(448, 30);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Click Next When You Are Done!";
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(513, 298);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 39);
			this->button3->TabIndex = 1;
			this->button3->Text = L"Next";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Gold;
			this->label2->Font = (gcnew System::Drawing::Font(L"Monoid", 16, System::Drawing::FontStyle::Italic));
			this->label2->Location = System::Drawing::Point(23, 133);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(508, 30);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Think of a number between 1 to 63";
			// 
			// MyForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(627, 377);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Font = (gcnew System::Drawing::Font(L"Monoid", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->QF1->ResumeLayout(false);
			this->QF1->PerformLayout();
			this->QF2->ResumeLayout(false);
			this->QF2->PerformLayout();
			this->QF3->ResumeLayout(false);
			this->QF3->PerformLayout();
			this->QF4->ResumeLayout(false);
			this->QF4->PerformLayout();
			this->QF5->ResumeLayout(false);
			this->QF5->PerformLayout();
			this->QF6->ResumeLayout(false);
			this->QF6->PerformLayout();
			this->lastpage->ResumeLayout(false);
			this->lastpage->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		int ans = 0;
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	
	{
		panel1->Show(); 


	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
	
	{

		Application::Exit();

	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) 

{

	QF1->Show();

}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) 

{
	QF2->Show();
	ans = ans + 1;
}

private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) 
{
	QF2->Show();
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) 
{
	QF3->Show();
	ans = ans + 2;
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) 

{
	QF3->Show();
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) 
{
	QF4->Show();
	ans = ans + 4;
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	QF4->Show();
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	QF5->Show();
	ans = ans + 8;
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	QF5->Show();
}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
	QF6->Show();
	ans = ans + 16;
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	QF6->Show();
}
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
	lastpage->Show();
	ans = ans + 32;
}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
	lastpage->Show();
}
private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
	QF1->Hide();
	QF2->Hide();
	QF3->Hide();
	QF4->Hide();
	QF5->Hide();
	QF6->Hide();
	ans = ans * 0;
}

	   private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e)

	   {
		   Application::Exit();
	   }

private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) 

{
	//int result = System::Convert::ToInt16(ans);
	result->Text = System::Convert::ToString(ans);
}
private: System::Void result_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
