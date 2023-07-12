#include "RockPaperScissors.h"
#include <cstdlib>
#include <iostream>
#include <sstream>
#include <string>

using namespace System;
using namespace System::Windows::Forms;
[STAThread]


void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Projectpractice::RockPaperScissors form;
	Application::Run(% form);

}

