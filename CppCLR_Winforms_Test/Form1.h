#pragma once

namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung f�r Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzuf�gen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btn7;
	private: System::Windows::Forms::TextBox^ txtDisplay;
	protected:


	private: System::Windows::Forms::Button^ btn8;
	private: System::Windows::Forms::Button^ btnAdd;


	private: System::Windows::Forms::Button^ btn9;
	private: System::Windows::Forms::Button^ btnMinus;


	private: System::Windows::Forms::Button^ btn6;

	private: System::Windows::Forms::Button^ btn5;

	private: System::Windows::Forms::Button^ btn4;
	private: System::Windows::Forms::Button^ btnDivided;
	private: System::Windows::Forms::Button^ btnEquals;





	private: System::Windows::Forms::Button^ btn0;
	private: System::Windows::Forms::Button^ btnPoint;



	private: System::Windows::Forms::Button^ btnMutiply;

	private: System::Windows::Forms::Button^ btn3;

	private: System::Windows::Forms::Button^ btn2;

	private: System::Windows::Forms::Button^ btn1;
	private: System::Windows::Forms::Button^ btnDoNotKnow;

	private: System::Windows::Forms::Button^ btnCE;

	private: System::Windows::Forms::Button^ btnC;
	private: System::Windows::Forms::Button^ btnBack;



	protected:

	protected:

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode f�r die Designerunterst�tzung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor ge鄚dert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btn7 = (gcnew System::Windows::Forms::Button());
			this->txtDisplay = (gcnew System::Windows::Forms::TextBox());
			this->btn8 = (gcnew System::Windows::Forms::Button());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btn9 = (gcnew System::Windows::Forms::Button());
			this->btnMinus = (gcnew System::Windows::Forms::Button());
			this->btn6 = (gcnew System::Windows::Forms::Button());
			this->btn5 = (gcnew System::Windows::Forms::Button());
			this->btn4 = (gcnew System::Windows::Forms::Button());
			this->btnDivided = (gcnew System::Windows::Forms::Button());
			this->btnEquals = (gcnew System::Windows::Forms::Button());
			this->btn0 = (gcnew System::Windows::Forms::Button());
			this->btnPoint = (gcnew System::Windows::Forms::Button());
			this->btnMutiply = (gcnew System::Windows::Forms::Button());
			this->btn3 = (gcnew System::Windows::Forms::Button());
			this->btn2 = (gcnew System::Windows::Forms::Button());
			this->btn1 = (gcnew System::Windows::Forms::Button());
			this->btnDoNotKnow = (gcnew System::Windows::Forms::Button());
			this->btnCE = (gcnew System::Windows::Forms::Button());
			this->btnC = (gcnew System::Windows::Forms::Button());
			this->btnBack = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btn7
			// 
			this->btn7->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->btn7->Location = System::Drawing::Point(11, 105);
			this->btn7->Name = L"btn7";
			this->btn7->Size = System::Drawing::Size(46, 36);
			this->btn7->TabIndex = 0;
			this->btn7->Text = L"7";
			this->btn7->UseVisualStyleBackColor = true;
			this->btn7->Click += gcnew System::EventHandler(this, &Form1::NumbersOnly);
			// 
			// txtDisplay
			// 
			this->txtDisplay->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->txtDisplay->Location = System::Drawing::Point(12, 12);
			this->txtDisplay->Name = L"txtDisplay";
			this->txtDisplay->Size = System::Drawing::Size(183, 33);
			this->txtDisplay->TabIndex = 1;
			this->txtDisplay->Text = L"0";
			this->txtDisplay->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// btn8
			// 
			this->btn8->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->btn8->Location = System::Drawing::Point(58, 105);
			this->btn8->Name = L"btn8";
			this->btn8->Size = System::Drawing::Size(45, 36);
			this->btn8->TabIndex = 2;
			this->btn8->Text = L"8";
			this->btn8->UseVisualStyleBackColor = true;
			this->btn8->Click += gcnew System::EventHandler(this, &Form1::NumbersOnly);
			// 
			// btnAdd
			// 
			this->btnAdd->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->btnAdd->Location = System::Drawing::Point(150, 105);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(45, 36);
			this->btnAdd->TabIndex = 4;
			this->btnAdd->Text = L"+";
			this->btnAdd->UseVisualStyleBackColor = true;
			// 
			// btn9
			// 
			this->btn9->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->btn9->Location = System::Drawing::Point(104, 105);
			this->btn9->Name = L"btn9";
			this->btn9->Size = System::Drawing::Size(45, 36);
			this->btn9->TabIndex = 3;
			this->btn9->Text = L"9";
			this->btn9->UseVisualStyleBackColor = true;
			this->btn9->Click += gcnew System::EventHandler(this, &Form1::NumbersOnly);
			// 
			// btnMinus
			// 
			this->btnMinus->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->btnMinus->Location = System::Drawing::Point(150, 142);
			this->btnMinus->Name = L"btnMinus";
			this->btnMinus->Size = System::Drawing::Size(45, 36);
			this->btnMinus->TabIndex = 8;
			this->btnMinus->Text = L"-";
			this->btnMinus->UseVisualStyleBackColor = true;
			// 
			// btn6
			// 
			this->btn6->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->btn6->Location = System::Drawing::Point(104, 142);
			this->btn6->Name = L"btn6";
			this->btn6->Size = System::Drawing::Size(45, 36);
			this->btn6->TabIndex = 7;
			this->btn6->Text = L"6";
			this->btn6->UseVisualStyleBackColor = true;
			this->btn6->Click += gcnew System::EventHandler(this, &Form1::NumbersOnly);
			// 
			// btn5
			// 
			this->btn5->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->btn5->Location = System::Drawing::Point(58, 142);
			this->btn5->Name = L"btn5";
			this->btn5->Size = System::Drawing::Size(45, 36);
			this->btn5->TabIndex = 6;
			this->btn5->Text = L"5";
			this->btn5->UseVisualStyleBackColor = true;
			this->btn5->Click += gcnew System::EventHandler(this, &Form1::NumbersOnly);
			// 
			// btn4
			// 
			this->btn4->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->btn4->Location = System::Drawing::Point(11, 142);
			this->btn4->Name = L"btn4";
			this->btn4->Size = System::Drawing::Size(46, 36);
			this->btn4->TabIndex = 5;
			this->btn4->Text = L"4";
			this->btn4->UseVisualStyleBackColor = true;
			this->btn4->Click += gcnew System::EventHandler(this, &Form1::NumbersOnly);
			// 
			// btnDivided
			// 
			this->btnDivided->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->btnDivided->Location = System::Drawing::Point(150, 215);
			this->btnDivided->Name = L"btnDivided";
			this->btnDivided->Size = System::Drawing::Size(45, 36);
			this->btnDivided->TabIndex = 16;
			this->btnDivided->Text = L"/";
			this->btnDivided->UseVisualStyleBackColor = true;
			// 
			// btnEquals
			// 
			this->btnEquals->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->btnEquals->Location = System::Drawing::Point(104, 215);
			this->btnEquals->Name = L"btnEquals";
			this->btnEquals->Size = System::Drawing::Size(45, 36);
			this->btnEquals->TabIndex = 15;
			this->btnEquals->Text = L"=";
			this->btnEquals->UseVisualStyleBackColor = true;
			// 
			// btn0
			// 
			this->btn0->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->btn0->Location = System::Drawing::Point(58, 215);
			this->btn0->Name = L"btn0";
			this->btn0->Size = System::Drawing::Size(45, 36);
			this->btn0->TabIndex = 14;
			this->btn0->Text = L"0";
			this->btn0->UseVisualStyleBackColor = true;
			this->btn0->Click += gcnew System::EventHandler(this, &Form1::NumbersOnly);
			// 
			// btnPoint
			// 
			this->btnPoint->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->btnPoint->Location = System::Drawing::Point(11, 215);
			this->btnPoint->Name = L"btnPoint";
			this->btnPoint->Size = System::Drawing::Size(46, 36);
			this->btnPoint->TabIndex = 13;
			this->btnPoint->Text = L".";
			this->btnPoint->UseVisualStyleBackColor = true;
			// 
			// btnMutiply
			// 
			this->btnMutiply->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->btnMutiply->Location = System::Drawing::Point(150, 178);
			this->btnMutiply->Name = L"btnMutiply";
			this->btnMutiply->Size = System::Drawing::Size(45, 36);
			this->btnMutiply->TabIndex = 12;
			this->btnMutiply->Text = L"*";
			this->btnMutiply->UseVisualStyleBackColor = true;
			// 
			// btn3
			// 
			this->btn3->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->btn3->Location = System::Drawing::Point(104, 178);
			this->btn3->Name = L"btn3";
			this->btn3->Size = System::Drawing::Size(45, 36);
			this->btn3->TabIndex = 11;
			this->btn3->Text = L"3";
			this->btn3->UseVisualStyleBackColor = true;
			this->btn3->Click += gcnew System::EventHandler(this, &Form1::NumbersOnly);
			// 
			// btn2
			// 
			this->btn2->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->btn2->Location = System::Drawing::Point(58, 178);
			this->btn2->Name = L"btn2";
			this->btn2->Size = System::Drawing::Size(45, 36);
			this->btn2->TabIndex = 10;
			this->btn2->Text = L"2";
			this->btn2->UseVisualStyleBackColor = true;
			this->btn2->Click += gcnew System::EventHandler(this, &Form1::NumbersOnly);
			// 
			// btn1
			// 
			this->btn1->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->btn1->Location = System::Drawing::Point(11, 178);
			this->btn1->Name = L"btn1";
			this->btn1->Size = System::Drawing::Size(46, 36);
			this->btn1->TabIndex = 9;
			this->btn1->Text = L"1";
			this->btn1->UseVisualStyleBackColor = true;
			this->btn1->Click += gcnew System::EventHandler(this, &Form1::NumbersOnly);
			// 
			// btnDoNotKnow
			// 
			this->btnDoNotKnow->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->btnDoNotKnow->Location = System::Drawing::Point(150, 68);
			this->btnDoNotKnow->Name = L"btnDoNotKnow";
			this->btnDoNotKnow->Size = System::Drawing::Size(45, 36);
			this->btnDoNotKnow->TabIndex = 20;
			this->btnDoNotKnow->Text = L"±";
			this->btnDoNotKnow->UseVisualStyleBackColor = true;
			// 
			// btnCE
			// 
			this->btnCE->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->btnCE->Location = System::Drawing::Point(104, 68);
			this->btnCE->Name = L"btnCE";
			this->btnCE->Size = System::Drawing::Size(45, 36);
			this->btnCE->TabIndex = 19;
			this->btnCE->Text = L"CE";
			this->btnCE->UseVisualStyleBackColor = true;
			// 
			// btnC
			// 
			this->btnC->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->btnC->Location = System::Drawing::Point(58, 68);
			this->btnC->Name = L"btnC";
			this->btnC->Size = System::Drawing::Size(45, 36);
			this->btnC->TabIndex = 18;
			this->btnC->Text = L"C";
			this->btnC->UseVisualStyleBackColor = true;
			// 
			// btnBack
			// 
			this->btnBack->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->btnBack->Location = System::Drawing::Point(11, 68);
			this->btnBack->Name = L"btnBack";
			this->btnBack->Size = System::Drawing::Size(46, 36);
			this->btnBack->TabIndex = 17;
			this->btnBack->Text = L"<<";
			this->btnBack->UseVisualStyleBackColor = true;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(206, 262);
			this->Controls->Add(this->btnDoNotKnow);
			this->Controls->Add(this->btnCE);
			this->Controls->Add(this->btnC);
			this->Controls->Add(this->btnBack);
			this->Controls->Add(this->btnDivided);
			this->Controls->Add(this->btnEquals);
			this->Controls->Add(this->btn0);
			this->Controls->Add(this->btnPoint);
			this->Controls->Add(this->btnMutiply);
			this->Controls->Add(this->btn3);
			this->Controls->Add(this->btn2);
			this->Controls->Add(this->btn1);
			this->Controls->Add(this->btnMinus);
			this->Controls->Add(this->btn6);
			this->Controls->Add(this->btn5);
			this->Controls->Add(this->btn4);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->btn9);
			this->Controls->Add(this->btn8);
			this->Controls->Add(this->txtDisplay);
			this->Controls->Add(this->btn7);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		double dFirstNum, dSecondNum, dAnswer;
		String^ iop;

	private: System::Void NumbersOnly(System::Object^ sender, System::EventArgs^ e) {
		Button^ numb = safe_cast<Button^>(sender);
		if (txtDisplay->Text == "0") txtDisplay->Text = numb->Text;
		else txtDisplay->Text = txtDisplay->Text + numb->Text;
	}
};
}
