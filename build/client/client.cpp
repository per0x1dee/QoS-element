#include "additional_headers.h"

void ShowDevConsole()
{
	reinterpret_cast<int(__cdecl*)()>(dllBase + 0x2C4230)();
	MSG m;
	while (GetMessage(&m, nullptr, 0, 0)) {
		TranslateMessage(&m);
		DispatchMessage(&m);
		

		//TODO: Sys_Print(m) somehow...
		//TODO: Rebuild console? No image, no text printing, etc...
		//Conbuf_AppendText seems to do nothing in this game
	}
}