#pragma once

namespace CppCLR_Winforms_Test {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for PictureViewer
	/// </summary>
	public ref class PictureViewer : public System::Windows::Forms::Form
	{
	public:
		PictureViewer(void)
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
		~PictureViewer()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pctImage;
	protected:

	protected:
	private: System::Windows::Forms::Button^ btnReset;
	private: System::Windows::Forms::Button^ btnNext;
	private: System::Windows::Forms::Button^ btnPrevious;
	private: System::Windows::Forms::Button^ btnZoomIn;
	private: System::Windows::Forms::Button^ btnZoomOut;
	private: System::Windows::Forms::Button^ btnZoomOriginal;
	private: System::Windows::Forms::Button^ btnOpen;
	private: System::Windows::Forms::Button^ btnClose;
	private: System::Windows::Forms::Panel^ pnlContrl;
	private: System::Windows::Forms::Panel^ pnlImage;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->pctImage = (gcnew System::Windows::Forms::PictureBox());
			this->btnReset = (gcnew System::Windows::Forms::Button());
			this->btnNext = (gcnew System::Windows::Forms::Button());
			this->btnPrevious = (gcnew System::Windows::Forms::Button());
			this->btnZoomIn = (gcnew System::Windows::Forms::Button());
			this->btnZoomOut = (gcnew System::Windows::Forms::Button());
			this->btnZoomOriginal = (gcnew System::Windows::Forms::Button());
			this->btnOpen = (gcnew System::Windows::Forms::Button());
			this->btnClose = (gcnew System::Windows::Forms::Button());
			this->pnlContrl = (gcnew System::Windows::Forms::Panel());
			this->pnlImage = (gcnew System::Windows::Forms::Panel());
			this->openFileDialog = (gcnew System::Windows::Forms::OpenFileDialog());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pctImage))->BeginInit();
			this->pnlContrl->SuspendLayout();
			this->pnlImage->SuspendLayout();
			this->SuspendLayout();
			// 
			// pctImage
			// 
			this->pctImage->Location = System::Drawing::Point(0, 0);
			this->pctImage->Name = L"pctImage";
			this->pctImage->Size = System::Drawing::Size(593, 357);
			this->pctImage->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pctImage->TabIndex = 0;
			this->pctImage->TabStop = false;
			// 
			// btnReset
			// 
			this->btnReset->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->btnReset->Location = System::Drawing::Point(12, 13);
			this->btnReset->Name = L"btnReset";
			this->btnReset->Size = System::Drawing::Size(65, 47);
			this->btnReset->TabIndex = 1;
			this->btnReset->Text = L"Reset";
			this->btnReset->UseVisualStyleBackColor = true;
			this->btnReset->Click += gcnew System::EventHandler(this, &PictureViewer::btnReset_Click);
			// 
			// btnNext
			// 
			this->btnNext->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->btnNext->Location = System::Drawing::Point(144, 13);
			this->btnNext->Name = L"btnNext";
			this->btnNext->Size = System::Drawing::Size(65, 47);
			this->btnNext->TabIndex = 2;
			this->btnNext->Text = L">";
			this->btnNext->UseVisualStyleBackColor = true;
			this->btnNext->Click += gcnew System::EventHandler(this, &PictureViewer::btnNext_Click);
			// 
			// btnPrevious
			// 
			this->btnPrevious->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->btnPrevious->Location = System::Drawing::Point(78, 13);
			this->btnPrevious->Name = L"btnPrevious";
			this->btnPrevious->Size = System::Drawing::Size(65, 47);
			this->btnPrevious->TabIndex = 3;
			this->btnPrevious->Text = L"<";
			this->btnPrevious->UseVisualStyleBackColor = true;
			this->btnPrevious->Click += gcnew System::EventHandler(this, &PictureViewer::btnPrevious_Click);
			// 
			// btnZoomIn
			// 
			this->btnZoomIn->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->btnZoomIn->Location = System::Drawing::Point(230, 13);
			this->btnZoomIn->Name = L"btnZoomIn";
			this->btnZoomIn->Size = System::Drawing::Size(65, 47);
			this->btnZoomIn->TabIndex = 4;
			this->btnZoomIn->Text = L"Zoom    +";
			this->btnZoomIn->UseVisualStyleBackColor = true;
			this->btnZoomIn->Click += gcnew System::EventHandler(this, &PictureViewer::btnZoomIn_Click);
			// 
			// btnZoomOut
			// 
			this->btnZoomOut->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->btnZoomOut->Location = System::Drawing::Point(296, 13);
			this->btnZoomOut->Name = L"btnZoomOut";
			this->btnZoomOut->Size = System::Drawing::Size(65, 47);
			this->btnZoomOut->TabIndex = 5;
			this->btnZoomOut->Text = L"Zoom    -";
			this->btnZoomOut->UseVisualStyleBackColor = true;
			this->btnZoomOut->Click += gcnew System::EventHandler(this, &PictureViewer::btnZoomOut_Click);
			// 
			// btnZoomOriginal
			// 
			this->btnZoomOriginal->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->btnZoomOriginal->Location = System::Drawing::Point(362, 13);
			this->btnZoomOriginal->Name = L"btnZoomOriginal";
			this->btnZoomOriginal->Size = System::Drawing::Size(65, 47);
			this->btnZoomOriginal->TabIndex = 6;
			this->btnZoomOriginal->Text = L"Zoom    .";
			this->btnZoomOriginal->UseVisualStyleBackColor = true;
			this->btnZoomOriginal->Click += gcnew System::EventHandler(this, &PictureViewer::btnZoomOriginal_Click);
			// 
			// btnOpen
			// 
			this->btnOpen->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->btnOpen->Location = System::Drawing::Point(450, 13);
			this->btnOpen->Name = L"btnOpen";
			this->btnOpen->Size = System::Drawing::Size(65, 47);
			this->btnOpen->TabIndex = 7;
			this->btnOpen->Text = L"Open";
			this->btnOpen->UseVisualStyleBackColor = true;
			this->btnOpen->Click += gcnew System::EventHandler(this, &PictureViewer::btnOpen_Click);
			// 
			// btnClose
			// 
			this->btnClose->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->btnClose->Location = System::Drawing::Point(516, 13);
			this->btnClose->Name = L"btnClose";
			this->btnClose->Size = System::Drawing::Size(65, 47);
			this->btnClose->TabIndex = 8;
			this->btnClose->Text = L"Close";
			this->btnClose->UseVisualStyleBackColor = true;
			this->btnClose->Click += gcnew System::EventHandler(this, &PictureViewer::btnClose_Click);
			// 
			// pnlContrl
			// 
			this->pnlContrl->BackColor = System::Drawing::Color::Black;
			this->pnlContrl->Controls->Add(this->btnReset);
			this->pnlContrl->Controls->Add(this->btnClose);
			this->pnlContrl->Controls->Add(this->btnNext);
			this->pnlContrl->Controls->Add(this->btnOpen);
			this->pnlContrl->Controls->Add(this->btnPrevious);
			this->pnlContrl->Controls->Add(this->btnZoomOriginal);
			this->pnlContrl->Controls->Add(this->btnZoomIn);
			this->pnlContrl->Controls->Add(this->btnZoomOut);
			this->pnlContrl->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->pnlContrl->Location = System::Drawing::Point(0, 357);
			this->pnlContrl->Name = L"pnlContrl";
			this->pnlContrl->Size = System::Drawing::Size(593, 71);
			this->pnlContrl->TabIndex = 9;
			// 
			// pnlImage
			// 
			this->pnlImage->Controls->Add(this->pctImage);
			this->pnlImage->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pnlImage->Location = System::Drawing::Point(0, 0);
			this->pnlImage->Name = L"pnlImage";
			this->pnlImage->Size = System::Drawing::Size(593, 357);
			this->pnlImage->TabIndex = 10;
			// 
			// openFileDialog
			// 
			this->openFileDialog->FileName = L"openFileDialog1";
			this->openFileDialog->Filter = L"*JPGE|*.jpg|All Files|*.**";
			// 
			// PictureViewer
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(593, 428);
			this->Controls->Add(this->pnlImage);
			this->Controls->Add(this->pnlContrl);
			this->Name = L"PictureViewer";
			this->Text = L"PictureViewer";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pctImage))->EndInit();
			this->pnlContrl->ResumeLayout(false);
			this->pnlImage->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
		array<String^>^ aFiles;
		String^ sPath;
		int iCurrentIndex;
		const int iZoomLevel = 100;
		int iZooms = 0;
	private: System::Void btnReset_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Restart();
	}
	private: System::Void btnClose_Click(System::Object^ sender, System::EventArgs^ e) {
		pctImage->ImageLocation = "";
	}
	private: System::Void btnOpen_Click(System::Object^ sender, System::EventArgs^ e) {
		if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			pctImage->ImageLocation = openFileDialog->FileName;
			sPath = System::IO::Path::GetDirectoryName(openFileDialog->FileName);
			aFiles = System::IO::Directory::GetFiles(sPath);
			for (int i = 0;i<aFiles->Length;i++)
			{
				if (aFiles[i] == openFileDialog->FileName)
				{
					iCurrentIndex = i;
					break;
				}
			}
		}
	}
	private: System::Void btnPrevious_Click(System::Object^ sender, System::EventArgs^ e) {
		if (iCurrentIndex > 0) iCurrentIndex--;
		pctImage->ImageLocation = aFiles[iCurrentIndex];
	}
	private: System::Void btnNext_Click(System::Object^ sender, System::EventArgs^ e) {
		if (iCurrentIndex != aFiles->Length-1) iCurrentIndex++;
		pctImage->ImageLocation = aFiles[iCurrentIndex];
	}
	private: System::Void btnZoomOriginal_Click(System::Object^ sender, System::EventArgs^ e) {
		int iNewZoom = iZooms;
		if (iZooms > 0)
		{
			for (int i = 0; iNewZoom > i; i++) btnZoomOut->PerformClick();
		}
		if (iZooms < 0)
		{
			for (int i = 0; iNewZoom < i; i--) btnZoomIn->PerformClick();
		}

		iZooms = 0;
	}
	private: System::Void btnZoomOut_Click(System::Object^ sender, System::EventArgs^ e) {
		pctImage->Top += iZoomLevel / 2;
		pctImage->Left += iZoomLevel / 2;
		pctImage->Height -= iZoomLevel;
		pctImage->Width -= iZoomLevel;

		iZooms--;
	}
	private: System::Void btnZoomIn_Click(System::Object^ sender, System::EventArgs^ e) {
		pctImage->Top -= iZoomLevel / 2;
		pctImage->Left-= iZoomLevel / 2;
		pctImage->Height += iZoomLevel;
		pctImage->Width += iZoomLevel;

		iZooms++;
	}
	};
}
