// ProjektZwolskiMemories_02.cpp : main project file.

#include "StdAfx.h"
//#include "Game.h"
#include "Form1.h"


using namespace ProjektZwolskiMemories_02;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// Enabling Windows XP visual effects before any controls are created
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// Create the main window and run it
	Application::Run(gcnew Form1());
	return 0;
}
