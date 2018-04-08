#include "stdafx.h"
#include "ReportTool.h"

using namespace IT310Program3ACB;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int Main(array<System::String^> ^args)

{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Application::Run(gcnew ReportTool());
	return 0;
}