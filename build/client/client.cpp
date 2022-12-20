#include "additional_headers.h"
#include "structs.h"
#include "functions.h"

int wait;

void ShowDevConsole()
{
	reinterpret_cast<int(__cdecl*)()>(dllBase + 0x2C4230)();

	MSG m;
	while (GetMessage(&m, nullptr, 0, 0)) {
		TranslateMessage(&m);
		DispatchMessage(&m);
	}

	//TODO: Sys_Print(m) somehow...
	//TODO: Rebuild console? No image, no text printing, etc...
	//Conbuf_AppendText seems to do nothing in this game
}

void checkKeys()
{
	wait++;
	if (wait > 2)
	{
		Dvar_SetBoolByName("monkeytoy", 0);
		Dvar_SetBoolByName("com_maxfps", 999);
		Dvar_SetBoolByName("r_vsync", 0);
		Dvar_SetBoolByName("r_fullscreen", 0); //Idk if these actually set as the only one i can test is maxfps
		printf("monkeytoy\n\n");
	}

	if (wait > 15)
	{
		printf("wait over 15\n");

		/*if (Key_IsDown(key->key_tilde))
		{
			printf("tilde down\n");
		}*/
		Com_Printf(0, "Test\n");
		Com_Printf(1, "Test1\n");
		Com_Printf(2, "Test2\n");
		Com_Printf(3, "Test3\n");
		Com_Printf(4, "Test4\n");
		Com_Printf(5, "Test5\n");
		Com_Printf(6, "Test6\n");
		Com_Printf(7, "Test7\n");
		Com_Printf(8, "Test8\n");
		Com_Printf(9, "Test9\n");
		Com_Printf(10, "Test10\n");
		Com_Printf(11, "Test11\n");
		Com_Printf(12, "Test12\n");
		Com_Printf(13, "Test13\n");
		Com_Printf(14, "Test14\n");
		Com_Printf(15, "Test15\n");
		Com_Printf(16, "Test16\n");
		Com_Printf(17, "Test17\n");
		Com_Printf(18, "Test18\n");
		Com_Printf(19, "Test19\n");
	}
}

void R_EndFrame_hk()
{
	checkKeys();
	R_EndFrame();
}

/*void Com_Init_Try_Block_Function_hk()
{
	//3F9900
	Dvar_SetBoolByName("monkeytoy", 0);
	Com_Init_Try_Block_Function();
}*/