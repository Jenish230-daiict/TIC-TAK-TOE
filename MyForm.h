#pragma once

namespace $safeprojectname$ {

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
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Label^ label1;


	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button10;


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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::Highlight;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(213, 190);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(97, 94);
			this->button1->TabIndex = 0;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::Highlight;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(331, 190);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(97, 94);
			this->button3->TabIndex = 2;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::Highlight;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(449, 190);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(97, 94);
			this->button2->TabIndex = 3;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click_1);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::Highlight;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(449, 297);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(97, 94);
			this->button4->TabIndex = 4;
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::Highlight;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(331, 297);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(97, 94);
			this->button5->TabIndex = 5;
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::Highlight;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(213, 297);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(97, 94);
			this->button6->TabIndex = 6;
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::Highlight;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(449, 410);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(97, 94);
			this->button7->TabIndex = 7;
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::SystemColors::Highlight;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(331, 410);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(97, 94);
			this->button8->TabIndex = 8;
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::SystemColors::Highlight;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(213, 410);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(97, 94);
			this->button9->TabIndex = 9;
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::SystemColors::Highlight;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(213, 37);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(333, 68);
			this->label1->TabIndex = 10;
			this->label1->Text = L"TIC TAK TOE";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Checked = true;
			this->radioButton1->Enabled = false;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton1->Location = System::Drawing::Point(56, 277);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(58, 36);
			this->radioButton1->TabIndex = 13;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"O";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Enabled = false;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton2->Location = System::Drawing::Point(56, 334);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(55, 36);
			this->radioButton2->TabIndex = 14;
			this->radioButton2->Text = L"X";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton2_CheckedChanged);
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label2->Location = System::Drawing::Point(183, 535);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(434, 38);
			this->label2->TabIndex = 15;
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click_1);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::SystemColors::Highlight;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->ForeColor = System::Drawing::SystemColors::Desktop;
			this->button10->Location = System::Drawing::Point(599, 320);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(120, 29);
			this->button10->TabIndex = 16;
			this->button10->Text = L"RESET";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(747, 618);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button1);
			this->MaximumSize = System::Drawing::Size(765, 665);
			this->MinimumSize = System::Drawing::Size(765, 665);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
		int i = 1;
		
		
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (i % 2 == 0) {
			button1->Text = "X";
			radioButton1->Checked = 1;
		}
		else {
			button1->Text = "O";
			radioButton2->Checked = 1;
		}
		button1->Enabled = 0;
		
		if (i > 4) {
			if (button1->Text == button2->Text && button2->Text == button3->Text && button1->Text != "") {
				label2->Text = "Congratulation " + button1->Text + " Win !";
				button10->Text = "REPLAY";
			}
			else if (button4->Text == button5->Text && button5->Text == button6->Text && button4->Text != "") {
				label2->Text = "Congratulation " + button4->Text + " Win !";
				button10->Text = "REPLAY";
			}
			else if (button7->Text == button8->Text && button8->Text == button9->Text && button7->Text != "") {
				label2->Text = "Congratulation " + button7->Text + " Win !";
				button10->Text = "REPLAY";
			}
			else if (button1->Text == button6->Text && button6->Text == button9->Text && button1->Text != "") {
				label2->Text = "Congratulation " + button1->Text + " Win !";
				button10->Text = "REPLAY";
			}
			else if (button3->Text == button5->Text && button5->Text == button8->Text && button3->Text != "") {
				label2->Text = "Congratulation " + button3->Text + " Win !";
				button10->Text = "REPLAY";
			}
			else if (button4->Text == button2->Text && button2->Text == button7->Text && button4->Text != "") {
				label2->Text = "Congratulation " + button4->Text + " Win !";
				button10->Text = "REPLAY";
			}
			else if (button1->Text == button5->Text && button5->Text == button7->Text && button1->Text != "") {
				label2->Text = "Congratulation " + button1->Text + " Win !";
				button10->Text = "REPLAY";
			}
			else if (button2->Text == button5->Text && button5->Text == button9->Text && button2->Text != "") {
				label2->Text = "Congratulation " + button2->Text + " Win !";
				button10->Text = "REPLAY";
			}
			else if (i == 9) {
				label2->Text = "Match is Draw !";
				button10->Text = "REPLAY";
			}

		}
		i++;
		
		
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

		if (i % 2 == 0) {
			button3->Text = "X";
			radioButton1->Checked = 1;
		}
		else {
			button3->Text = "O";
			radioButton2->Checked = 1;
		}
		button3->Enabled = 0;
		
		if (i > 4) {
			if (button1->Text == button2->Text && button2->Text == button3->Text && button1->Text != "") {
				label2->Text = "Congratulation " + button1->Text + " Win !";
				button10->Text = "REPLAY";
			}
			else if (button4->Text == button5->Text && button5->Text == button6->Text && button4->Text != "") {
				label2->Text = "Congratulation " + button4->Text + " Win !";
				button10->Text = "REPLAY";
			}
			else if (button7->Text == button8->Text && button8->Text == button9->Text && button7->Text != "") {
				label2->Text = "Congratulation " + button7->Text + " Win !";
				button10->Text = "REPLAY";
			}
			else if (button1->Text == button6->Text && button6->Text == button9->Text && button1->Text != "") {
				label2->Text = "Congratulation " + button1->Text + " Win !";
				button10->Text = "REPLAY";
			}
			else if (button3->Text == button5->Text && button5->Text == button8->Text && button3->Text != "") {
				label2->Text = "Congratulation " + button3->Text + " Win !";
				button10->Text = "REPLAY";
			}
			else if (button4->Text == button2->Text && button2->Text == button7->Text && button4->Text != "") {
				label2->Text = "Congratulation " + button4->Text + " Win !";
				button10->Text = "REPLAY";
			}
			else if (button1->Text == button5->Text && button5->Text == button7->Text && button1->Text != "") {
				label2->Text = "Congratulation " + button1->Text + " Win !";
				button10->Text = "REPLAY";
			}
			else if (button2->Text == button5->Text && button5->Text == button9->Text && button2->Text != "") {
				label2->Text = "Congratulation " + button2->Text + " Win !";
				button10->Text = "REPLAY";
			}
			else if (i == 9) {
				label2->Text = "Match is Draw !";
				button10->Text = "REPLAY";
			}
		}
		i++;
	}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
	if (i % 2 == 0) {
		button2->Text = "X";
		radioButton1->Checked = 1;
	}
	else {
		button2->Text = "O";
		radioButton2->Checked = 1;
	}
	button2->Enabled = 0;
	
	if (i > 4) {
		if (button1->Text == button2->Text && button2->Text == button3->Text && button1->Text != "") {
			label2->Text = "Congratulation " + button1->Text + " Win !";
			button10->Text = "REPLAY";
		}
		else if (button4->Text == button5->Text && button5->Text == button6->Text && button4->Text != "") {
			label2->Text = "Congratulation " + button4->Text + " Win !";
			button10->Text = "REPLAY";
		}
		else if (button7->Text == button8->Text && button8->Text == button9->Text && button7->Text != "") {
			label2->Text = "Congratulation " + button7->Text + " Win !";
			button10->Text = "REPLAY";
		}
		else if (button1->Text == button6->Text && button6->Text == button9->Text && button1->Text != "") {
			label2->Text = "Congratulation " + button1->Text + " Win !";
			button10->Text = "REPLAY";
		}
		else if (button3->Text == button5->Text && button5->Text == button8->Text && button3->Text != "") {
			label2->Text = "Congratulation " + button3->Text + " Win !";
			button10->Text = "REPLAY";
		}
		else if (button4->Text == button2->Text && button2->Text == button7->Text && button4->Text != "") {
			label2->Text = "Congratulation " + button4->Text + " Win !";
			button10->Text = "REPLAY";
		}
		else if (button1->Text == button5->Text && button5->Text == button7->Text && button1->Text != "") {
			label2->Text = "Congratulation " + button1->Text + " Win !";
			button10->Text = "REPLAY";
		}
		else if (button2->Text == button5->Text && button5->Text == button9->Text && button2->Text != "") {
			label2->Text = "Congratulation " + button2->Text + " Win !";
			button10->Text = "REPLAY";
		}
		else if (i == 9) {
			label2->Text = "Match is Draw !";
			button10->Text = "REPLAY";
		}
	}
	i++;
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	if (i % 2 == 0) {
		button6->Text = "X";
		radioButton1->Checked = 1;
	}
	else {
		button6->Text = "O";
		radioButton2->Checked = 1 ;
	}
	button6->Enabled = 0;
	
	if (i > 4) {
		if (button1->Text == button2->Text && button2->Text == button3->Text && button1->Text != "") {
			label2->Text = "Congratulation " + button1->Text + " Win !";
			button10->Text = "REPLAY";
		}
		else if (button4->Text == button5->Text && button5->Text == button6->Text && button4->Text != "") {
			label2->Text = "Congratulation " + button4->Text + " Win !";
			button10->Text = "REPLAY";
		}
		else if (button7->Text == button8->Text && button8->Text == button9->Text && button7->Text != "") {
			label2->Text = "Congratulation " + button7->Text + " Win !";
			button10->Text = "REPLAY";
		}
		else if (button1->Text == button6->Text && button6->Text == button9->Text && button1->Text != "") {
			label2->Text = "Congratulation " + button1->Text + " Win !";
			button10->Text = "REPLAY";
		}
		else if (button3->Text == button5->Text && button5->Text == button8->Text && button3->Text != "") {
			label2->Text = "Congratulation " + button3->Text + " Win !";
			button10->Text = "REPLAY";
		}
		else if (button4->Text == button2->Text && button2->Text == button7->Text && button4->Text != "") {
			label2->Text = "Congratulation " + button4->Text + " Win !";
			button10->Text = "REPLAY";
		}
		else if (button1->Text == button5->Text && button5->Text == button7->Text && button1->Text != "") {
			label2->Text = "Congratulation " + button1->Text + " Win !";
			button10->Text = "REPLAY";
		}
		else if (button2->Text == button5->Text && button5->Text == button9->Text && button2->Text != "") {
			label2->Text = "Congratulation " + button2->Text + " Win !";
			button10->Text = "REPLAY";
		}
		else if (i == 9) {
			label2->Text = "Match is Draw !";
			button10->Text = "REPLAY";
		}
	}
	i++;
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	if (i % 2 == 0) {
		button5->Text = "X";
		radioButton1->Checked =1 ;
	}
	else {
		button5->Text = "O";
		radioButton2->Checked = 1;
	}

	button5->Enabled = 0;
	
	if (i > 4) {
		if (button1->Text == button2->Text && button2->Text == button3->Text && button1->Text != "") {
			label2->Text = "Congratulation " + button1->Text + " Win !";
			button10->Text = "REPLAY";
		}
		else if (button4->Text == button5->Text && button5->Text == button6->Text && button4->Text != "") {
			label2->Text = "Congratulation " + button4->Text + " Win !";
			button10->Text = "REPLAY";
		}
		else if (button7->Text == button8->Text && button8->Text == button9->Text && button7->Text != "") {
			label2->Text = "Congratulation " + button7->Text + " Win !";
			button10->Text = "REPLAY";
		}
		else if (button1->Text == button6->Text && button6->Text == button9->Text && button1->Text != "") {
			label2->Text = "Congratulation " + button1->Text + " Win !";
			button10->Text = "REPLAY";
		}
		else if (button3->Text == button5->Text && button5->Text == button8->Text && button3->Text != "") {
			label2->Text = "Congratulation " + button3->Text + " Win !";
			button10->Text = "REPLAY";
		}
		else if (button4->Text == button2->Text && button2->Text == button7->Text && button4->Text != "") {
			label2->Text = "Congratulation " + button4->Text + " Win !";
			button10->Text = "REPLAY";
		}
		else if (button1->Text == button5->Text && button5->Text == button7->Text && button1->Text != "") {
			label2->Text = "Congratulation " + button1->Text + " Win !";
			button10->Text = "REPLAY";
		}
		else if (button2->Text == button5->Text && button5->Text == button9->Text && button2->Text != "") {
			label2->Text = "Congratulation " + button2->Text + " Win !";
			button10->Text = "REPLAY";
		}
		else if (i == 9) {
			label2->Text = "Match is Draw !";
			button10->Text = "REPLAY";
		}
	}
	i++;
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (i % 2 == 0) {
		button4->Text = "X";
		radioButton1->Checked = 1;
	}
	else {
		button4->Text = "O";
		radioButton2->Checked = 1 ;
	}
	button4->Enabled = 0;
	
	if (i > 4) {
		if (button1->Text == button2->Text && button2->Text == button3->Text && button1->Text != "") {
			label2->Text = "Congratulation " + button1->Text + " Win !";
			button10->Text = "REPLAY";
		}
		else if (button4->Text == button5->Text && button5->Text == button6->Text && button4->Text != "") {
			label2->Text = "Congratulation " + button4->Text + " Win !";
			button10->Text = "REPLAY";
		}
		else if (button7->Text == button8->Text && button8->Text == button9->Text && button7->Text != "") {
			label2->Text = "Congratulation " + button7->Text + " Win !";
			button10->Text = "REPLAY";
		}
		else if (button1->Text == button6->Text && button6->Text == button9->Text && button1->Text != "") {
			label2->Text = "Congratulation " + button1->Text + " Win !";
			button10->Text = "REPLAY";
		}
		else if (button3->Text == button5->Text && button5->Text == button8->Text && button3->Text != "") {
			label2->Text = "Congratulation " + button3->Text + " Win !";
			button10->Text = "REPLAY";
		}
		else if (button4->Text == button2->Text && button2->Text == button7->Text && button4->Text != "") {
			label2->Text = "Congratulation " + button4->Text + " Win !";
			button10->Text = "REPLAY";
		}
		else if (button1->Text == button5->Text && button5->Text == button7->Text && button1->Text != "") {
			label2->Text = "Congratulation " + button1->Text + " Win !";
			button10->Text = "REPLAY";
		}
		else if (button2->Text == button5->Text && button5->Text == button9->Text && button2->Text != "") {
			label2->Text = "Congratulation " + button2->Text + " Win !";
			button10->Text = "REPLAY";
		}
		else if (i == 9) {
			label2->Text = "Match is Draw !";
			button10->Text = "REPLAY";
		}
	}
	i++;
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	if (i % 2 == 0) {
		button9->Text = "X";
		radioButton1->Checked = 1;
	}
	else {
		button9->Text = "O";
		radioButton2->Checked = 1;
	}
	button9->Enabled = 0;
	
	if (i > 4) {
		if (button1->Text == button2->Text && button2->Text == button3->Text && button1->Text != "") {
			label2->Text = "Congratulation " + button1->Text + " Win !";
			button10->Text = "REPLAY";
		}
		else if (button4->Text == button5->Text && button5->Text == button6->Text && button4->Text != "") {
			label2->Text = "Congratulation " + button4->Text + " Win !";
			button10->Text = "REPLAY";
		}
		else if (button7->Text == button8->Text && button8->Text == button9->Text && button7->Text != "") {
			label2->Text = "Congratulation " + button7->Text + " Win !";
			button10->Text = "REPLAY";
		}
		else if (button1->Text == button6->Text && button6->Text == button9->Text && button1->Text != "") {
			label2->Text = "Congratulation " + button1->Text + " Win !";
			button10->Text = "REPLAY";
		}
		else if (button3->Text == button5->Text && button5->Text == button8->Text && button3->Text != "") {
			label2->Text = "Congratulation " + button3->Text + " Win !";
			button10->Text = "REPLAY";
		}
		else if (button4->Text == button2->Text && button2->Text == button7->Text && button4->Text != "") {
			label2->Text = "Congratulation " + button4->Text + " Win !";
			button10->Text = "REPLAY";
		}
		else if (button1->Text == button5->Text && button5->Text == button7->Text && button1->Text != "") {
			label2->Text = "Congratulation " + button1->Text + " Win !";
			button10->Text = "REPLAY";
		}
		else if (button2->Text == button5->Text && button5->Text == button9->Text && button2->Text != "") {
			label2->Text = "Congratulation " + button2->Text + " Win !";
			button10->Text = "REPLAY";
		}
		else if (i == 9) {
			label2->Text = "Match is Draw !";
			button10->Text = "REPLAY";
		}
	}
	i++;
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	if (i % 2 == 0) {
		button8->Text = "X";
		radioButton1->Checked = 1;
	}
	else {
		button8->Text = "O";
		radioButton2->Checked = 1;
	}
	button8->Enabled = 0;
	
	if (i > 4) {
		if (button1->Text == button2->Text && button2->Text == button3->Text && button1->Text != "") {
			label2->Text = "Congratulation " + button1->Text + " Win !";
			button10->Text = "REPLAY";
		}
		else if (button4->Text == button5->Text && button5->Text == button6->Text && button4->Text != "") {
			label2->Text = "Congratulation " + button4->Text + " Win !";
			button10->Text = "REPLAY";
		}
		else if (button7->Text == button8->Text && button8->Text == button9->Text && button7->Text != "") {
			label2->Text = "Congratulation " + button7->Text + " Win !";
			button10->Text = "REPLAY";
		}
		else if (button1->Text == button6->Text && button6->Text == button9->Text && button1->Text != "") {
			label2->Text = "Congratulation " + button1->Text + " Win !";
			button10->Text = "REPLAY";
		}
		else if (button3->Text == button5->Text && button5->Text == button8->Text && button3->Text != "") {
			label2->Text = "Congratulation " + button3->Text + " Win !";
			button10->Text = "REPLAY";
		}
		else if (button4->Text == button2->Text && button2->Text == button7->Text && button4->Text != "") {
			label2->Text = "Congratulation " + button4->Text + " Win !";
			button10->Text = "REPLAY";
		}
		else if (button1->Text == button5->Text && button5->Text == button7->Text && button1->Text != "") {
			label2->Text = "Congratulation " + button1->Text + " Win !";
			button10->Text = "REPLAY";
		}
		else if (button2->Text == button5->Text && button5->Text == button9->Text && button2->Text != "") {
			label2->Text = "Congratulation " + button2->Text + " Win !";
			button10->Text = "REPLAY";
		}
		else if (i == 9) {
			label2->Text = "Match is Draw !";
			button10->Text = "REPLAY";
		}
	}
	i++;
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	if (i % 2 == 0) {
		button7->Text = "X";
		radioButton1->Checked = 1;
	}
	else {
		button7->Text = "O";
		radioButton2->Checked = 1;
	}
	button7->Enabled = 0;
	
	if (i > 4) {
		if (button1->Text == button2->Text && button2->Text == button3->Text && button1->Text != "") {
			label2->Text = "Congratulation " + button1->Text + " Win !";
			button10->Text = "REPLAY";
		}
		else if (button4->Text == button5->Text && button5->Text == button6->Text && button4->Text != "") {
			label2->Text = "Congratulation " + button4->Text + " Win !";
			button10->Text = "REPLAY";
		}
		else if (button7->Text == button8->Text && button8->Text == button9->Text && button7->Text != "") {
			label2->Text = "Congratulation " + button7->Text + " Win !";
			button10->Text = "REPLAY";
		}
		else if (button1->Text == button6->Text && button6->Text == button9->Text && button1->Text != "") {
			label2->Text = "Congratulation " + button1->Text + " Win !";
			button10->Text = "REPLAY";
		}
		else if (button3->Text == button5->Text && button5->Text == button8->Text && button3->Text != "") {
			label2->Text = "Congratulation " + button3->Text + " Win !";
			button10->Text = "REPLAY";
		}
		else if (button4->Text == button2->Text && button2->Text == button7->Text && button4->Text != "") {
			label2->Text = "Congratulation " + button4->Text + " Win !";
			button10->Text = "REPLAY";
		}
		else if (button1->Text == button5->Text && button5->Text == button7->Text && button1->Text != "") {
			label2->Text = "Congratulation " + button1->Text + " Win !";
			button10->Text = "REPLAY";
		}
		else if (button2->Text == button5 ->Text && button5->Text == button9->Text && button2->Text != "") {
			label2->Text = "Congratulation " + button2->Text + " Win !";
			button10->Text = "REPLAY";
		}
		else if (i == 9) {
			label2->Text = "Match is Draw !";
			button10->Text = "REPLAY";
		}
	}
	i++;
}
	
private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click_1(System::Object^ sender, System::EventArgs^ e) {

	
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	button1->Enabled = 1;
	button1->Text = "";
	button2->Enabled = 1;
	button2->Text = "";
	button3->Enabled = 1;
	button3->Text = "";
	button4->Enabled = 1;
	button4->Text = "";
	button5->Enabled = 1;
	button5->Text = "";
	button6->Enabled = 1;
	button6->Text = "";
	button7->Enabled = 1;
	button7->Text = "";
	button8->Enabled = 1;
	button9->Enabled = 1;
	button8->Text = "";
	button9->Text = "";
	label2->Text = "";
	button10->Text = "RESET";
	i = 1;
	radioButton1->Checked = 1;
	
}
};
}
