#pragma once

namespace Projectpractice {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class RockPaperScissors : public System::Windows::Forms::Form
	{
	public:
		RockPaperScissors(void)
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
		~RockPaperScissors()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RadioButton^ radioButton1;
	protected:
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button2;







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
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton1->Location = System::Drawing::Point(71, 125);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(68, 24);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Rock";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &RockPaperScissors::radioButton1_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton2->Location = System::Drawing::Point(190, 125);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(74, 24);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Paper";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton3->Location = System::Drawing::Point(310, 125);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(95, 24);
			this->radioButton3->TabIndex = 2;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Scissors";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label1->Location = System::Drawing::Point(66, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(341, 39);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Rock Paper Scissors";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(146, 88);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(169, 25);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Choose Below:";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label2->Click += gcnew System::EventHandler(this, &RockPaperScissors::label2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::MediumPurple;
			this->button1->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(160, 193);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(146, 33);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Play";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &RockPaperScissors::button1_Click);
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::LimeGreen;
			this->label3->Location = System::Drawing::Point(84, 302);
			this->label3->MinimumSize = System::Drawing::Size(300, 20);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(300, 31);
			this->label3->TabIndex = 6;
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label3->Click += gcnew System::EventHandler(this, &RockPaperScissors::label3_Click);
			// 
			// label4
			// 
			this->label4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(129, 263);
			this->label4->MinimumSize = System::Drawing::Size(200, 30);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(200, 30);
			this->label4->TabIndex = 7;
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(385, 373);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Quit";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &RockPaperScissors::button3_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Menu;
			this->ClientSize = System::Drawing::Size(472, 408);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->radioButton3);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Name = L"Rock Paper Scissors";
			this->Text = L"Rock Paper Scissors";
			this->Load += gcnew System::EventHandler(this, &RockPaperScissors::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		button1->Text = L"Play Again";

		Random^ ran = gcnew Random();
		int comp = ran->Next(0, 3);


		if (comp == 0) {
			label4->Text = "Computer chose Rock";
		}

		else if (comp == 1) {
			label4->Text = "Computer chose Paper";
		}
		else if (comp == 2) {
			label4->Text = "Computer chose Scissors";
		}

		if (radioButton1->Checked == true) {
			if (comp == 0) {
				label3->Text = "It's a tie!";
				label3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			}
			else if (comp == 1) {
				label3->Text = "Computer wins!";
				label3->ForeColor = System::Drawing::Color::Red;
			}
			else if (comp == 2) {
				label3->Text = "You win!";
				label3->ForeColor = System::Drawing::Color::Green;
			}
		}

		else if (radioButton2->Checked == true) {
			if (comp == 0) {
				label3->Text = "You win!";
				label3->ForeColor = System::Drawing::Color::Green;
			}
			else if (comp == 1) {
				label3->Text = "It's a tie!";
				label3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			}
			else if (comp == 2) {
				label3->Text = "Computer wins!";
				label3->ForeColor = System::Drawing::Color::Red;
			}
		}

		else if (radioButton3->Checked == true) {
			if (comp == 0) {
				label3->Text = "Computer wins!";
				label3->ForeColor = System::Drawing::Color::Red;
			}
			else if (comp == 1) {
				label3->Text = "You win!";
				label3->ForeColor = System::Drawing::Color::Green;
			}
			else if (comp == 2) {
				label3->Text = "It's a tie!";
				label3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			}
		}
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}

};
}
