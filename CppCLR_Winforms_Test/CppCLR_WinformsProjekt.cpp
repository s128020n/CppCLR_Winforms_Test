#include "pch.h"

using namespace System;

//int main(array<System::String ^> ^args)
//{
//    return 0;
//}

#include "Calculator.h"
#include "MyForm1.h"
#include "PictureViewer.h"

using namespace System::Windows::Forms;

[STAThread]
int main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew CppCLR_Winforms_Test::PictureViewer);
	/*Application::Run(gcnew CppCLRWinformsProjekt::Form1());
	CppCLR_Winforms_Test::MyForm form;
	Application::Run(% form);*/

	return 0;
}

