//#include "MainForm.h"
#include "LoginForm.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

[STAThreadAttribute]
int Main(array<System::String ^> ^args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	//Mustafa:: MainForm form;
	Mustafa::LoginForm form;
	Application::Run(%form);
	

	return 0;
}
