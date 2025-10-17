/******************************************************************************
*  File Name:    MyForm.cpp
*  Author:       Raashtra KC
*  Date:         2022-10-25
*  Language:     C++
*  Notes:        Requires the class files in /lib to compile.
******************************************************************************/

#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project1::MyForm form;
	Application::Run(% form);
}