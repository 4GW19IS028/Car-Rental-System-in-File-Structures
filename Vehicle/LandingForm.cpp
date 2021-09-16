#include "LandingForm.h"
#include "AdminHome.h"
#include "LecturerPage.h"
#include "StudentPage.h"
#include "HomeForm.h"




using namespace System;
using namespace System::Windows::Forms;

[STAThread]//leave this as is
void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew StuMgmtSys::HomeForm());
}


