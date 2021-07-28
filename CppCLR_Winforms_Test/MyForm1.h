#pragma once
#include "Calculator.h"

namespace CppCLR_Winforms_Test {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Resources;
	using namespace System::Reflection;

	/// <summary>
	/// MyForm 的摘要
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			this->pnlTerms->Hide();
			//
			//TODO:  在此加入建構函式程式碼
			//
		}

	protected:
		/// <summary>
		/// 清除任何使用中的資源。
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnShowMessage;
	private: System::Windows::Forms::Button^ btnSignIn;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txtUsername;
	private: System::Windows::Forms::TextBox^ txtPassword;


	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::CheckBox^ ckBoxTerms;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ btnExit;
	private: System::Windows::Forms::Panel^ pnlTerms;

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ btnConfirm;



	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode f die Designerunterstzung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor ge鄚dert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->btnShowMessage = (gcnew System::Windows::Forms::Button());
			this->btnSignIn = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtUsername = (gcnew System::Windows::Forms::TextBox());
			this->txtPassword = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->ckBoxTerms = (gcnew System::Windows::Forms::CheckBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->pnlTerms = (gcnew System::Windows::Forms::Panel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->btnConfirm = (gcnew System::Windows::Forms::Button());
			this->pnlTerms->SuspendLayout();
			this->SuspendLayout();
			// 
			// btnShowMessage
			// 
			this->btnShowMessage->BackColor = System::Drawing::Color::Transparent;
			this->btnShowMessage->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnShowMessage->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->btnShowMessage->ForeColor = System::Drawing::Color::Maroon;
			this->btnShowMessage->Location = System::Drawing::Point(7, 350);
			this->btnShowMessage->Name = L"btnShowMessage";
			this->btnShowMessage->Size = System::Drawing::Size(27, 27);
			this->btnShowMessage->TabIndex = 0;
			this->btnShowMessage->Text = L"!";
			this->btnShowMessage->UseVisualStyleBackColor = false;
			this->btnShowMessage->Click += gcnew System::EventHandler(this, &MyForm::btnShowMessage_Click);
			// 
			// btnSignIn
			// 
			this->btnSignIn->BackColor = System::Drawing::Color::Blue;
			this->btnSignIn->Enabled = false;
			this->btnSignIn->FlatAppearance->BorderSize = 0;
			this->btnSignIn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSignIn->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->btnSignIn->ForeColor = System::Drawing::Color::White;
			this->btnSignIn->Location = System::Drawing::Point(40, 278);
			this->btnSignIn->Name = L"btnSignIn";
			this->btnSignIn->Size = System::Drawing::Size(118, 29);
			this->btnSignIn->TabIndex = 1;
			this->btnSignIn->Text = L"Sign In";
			this->btnSignIn->UseVisualStyleBackColor = false;
			this->btnSignIn->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(37, 47);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(79, 27);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Sign In";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(37, 123);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(65, 16);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Username";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(37, 187);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(61, 16);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Password";
			// 
			// txtUsername
			// 
			this->txtUsername->BackColor = System::Drawing::Color::Black;
			this->txtUsername->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtUsername->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->txtUsername->ForeColor = System::Drawing::Color::White;
			this->txtUsername->Location = System::Drawing::Point(40, 140);
			this->txtUsername->Name = L"txtUsername";
			this->txtUsername->Size = System::Drawing::Size(192, 16);
			this->txtUsername->TabIndex = 5;
			this->txtUsername->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::txtUsername_KeyDown);
			// 
			// txtPassword
			// 
			this->txtPassword->BackColor = System::Drawing::Color::Black;
			this->txtPassword->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtPassword->Font = (gcnew System::Drawing::Font(L"PMingLiU", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->txtPassword->ForeColor = System::Drawing::Color::White;
			this->txtPassword->Location = System::Drawing::Point(40, 202);
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->PasswordChar = '*';
			this->txtPassword->Size = System::Drawing::Size(192, 15);
			this->txtPassword->TabIndex = 6;
			this->txtPassword->UseSystemPasswordChar = true;
			this->txtPassword->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::txtPassword_KeyDown);
			// 
			// panel1
			// 
			this->panel1->Location = System::Drawing::Point(40, 158);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(191, 2);
			this->panel1->TabIndex = 7;
			// 
			// panel2
			// 
			this->panel2->Location = System::Drawing::Point(40, 219);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(191, 2);
			this->panel2->TabIndex = 8;
			// 
			// ckBoxTerms
			// 
			this->ckBoxTerms->AutoSize = true;
			this->ckBoxTerms->BackColor = System::Drawing::Color::Black;
			this->ckBoxTerms->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->ckBoxTerms->ForeColor = System::Drawing::Color::White;
			this->ckBoxTerms->Location = System::Drawing::Point(42, 246);
			this->ckBoxTerms->Name = L"ckBoxTerms";
			this->ckBoxTerms->Size = System::Drawing::Size(102, 20);
			this->ckBoxTerms->TabIndex = 9;
			this->ckBoxTerms->Text = L"I agree to the";
			this->ckBoxTerms->UseVisualStyleBackColor = false;
			this->ckBoxTerms->CheckedChanged += gcnew System::EventHandler(this, &MyForm::ckBoxTerms_CheckedChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label4->ForeColor = System::Drawing::Color::Blue;
			this->label4->Location = System::Drawing::Point(140, 247);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(131, 16);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Terms and Conditions";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// btnExit
			// 
			this->btnExit->BackColor = System::Drawing::Color::Transparent;
			this->btnExit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnExit->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->btnExit->ForeColor = System::Drawing::Color::Blue;
			this->btnExit->Location = System::Drawing::Point(164, 278);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(118, 29);
			this->btnExit->TabIndex = 11;
			this->btnExit->Text = L"Exit";
			this->btnExit->UseVisualStyleBackColor = false;
			this->btnExit->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// pnlTerms
			// 
			this->pnlTerms->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pnlTerms->Controls->Add(this->textBox1);
			this->pnlTerms->Controls->Add(this->label5);
			this->pnlTerms->Controls->Add(this->btnConfirm);
			this->pnlTerms->Location = System::Drawing::Point(40, 35);
			this->pnlTerms->Name = L"pnlTerms";
			this->pnlTerms->Size = System::Drawing::Size(282, 309);
			this->pnlTerms->TabIndex = 12;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::Black;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->textBox1->ForeColor = System::Drawing::Color::White;
			this->textBox1->Location = System::Drawing::Point(37, 65);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(205, 183);
			this->textBox1->TabIndex = 4;
			this->textBox1->Text = L"Smile Everyday !!";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(33, 27);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(209, 24);
			this->label5->TabIndex = 3;
			this->label5->Text = L"Terms and Conditions";
			// 
			// btnConfirm
			// 
			this->btnConfirm->BackColor = System::Drawing::Color::Blue;
			this->btnConfirm->FlatAppearance->BorderSize = 0;
			this->btnConfirm->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnConfirm->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->btnConfirm->ForeColor = System::Drawing::Color::White;
			this->btnConfirm->Location = System::Drawing::Point(74, 266);
			this->btnConfirm->Name = L"btnConfirm";
			this->btnConfirm->Size = System::Drawing::Size(118, 29);
			this->btnConfirm->TabIndex = 2;
			this->btnConfirm->Text = L"Confirm";
			this->btnConfirm->UseVisualStyleBackColor = false;
			this->btnConfirm->Click += gcnew System::EventHandler(this, &MyForm::btnConfirm_Click);
			// 
			// MyForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(585, 383);
			this->Controls->Add(this->pnlTerms);
			this->Controls->Add(this->btnExit);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->ckBoxTerms);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->txtPassword);
			this->Controls->Add(this->txtUsername);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnSignIn);
			this->Controls->Add(this->btnShowMessage);
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseMove);
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseUp);
			this->pnlTerms->ResumeLayout(false);
			this->pnlTerms->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


#pragma endregion
	private: System::Void btnShowMessage_Click(System::Object^ sender, System::EventArgs^ e) {
		if (MessageBox::Show("Would you like some...?", "Message", MessageBoxButtons::YesNo, MessageBoxIcon::Asterisk) == System::Windows::Forms::DialogResult::Yes) btnShowMessage->PerformClick();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (txtUsername->Text == "nancy")
		{
			if (txtPassword->Text == "0111")
			{
				CppCLRWinformsProjekt::Form1^ calculator = gcnew CppCLRWinformsProjekt::Form1;
				calculator->Show();
				this->Hide();
			}
			else MessageBox::Show("Wrong Password", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else MessageBox::Show(txtUsername->Text + "! I do not want to let you in.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {

		//this->BackgroundImage = gcnew Bitmap("‪C:\\Users\\licen\\Desktop\\backgroundImage.jpg");
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}

	private: System::Void ckBoxTerms_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (ckBoxTerms->Checked) btnSignIn->Enabled = true;
		else btnSignIn->Enabled = false;
	}
	private: System::Void btnConfirm_Click(System::Object^ sender, System::EventArgs^ e) {

		this->pnlTerms->Hide();
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
		this->pnlTerms->Show();
	}

		   bool bDragging;
		   Point pOffset;
	private: System::Void MyForm_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		bDragging = true;
		pOffset.X = e->X;
		pOffset.Y = e->Y;
	}
	private: System::Void MyForm_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (bDragging)
		{
			Point pCurrentScreenPosition = PointToScreen(Point(e->X, e->Y));
			Location = Point(pCurrentScreenPosition.X - pOffset.X, pCurrentScreenPosition.Y - pOffset.Y);
		}
	}
	private: System::Void MyForm_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		bDragging = false;
	}
	private: System::Void txtUsername_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyValue == (int)Keys::Enter) txtPassword->Focus();
	}
	private: System::Void txtPassword_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyValue == (int)Keys::Enter)
		{
			if (ckBoxTerms->Checked)btnSignIn->PerformClick();
		}
	}
	};
}
