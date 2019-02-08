#include "MainWindow.h"

using namespace System;
using namespace System::Windows::Forms;


[STAThread]
void Main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Advenced_Screen_Maker::MainWindow mainWindow;
	Application::Run(%mainWindow);
}
