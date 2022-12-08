#include "additional_headers.h"

DWORD dllBase = reinterpret_cast<DWORD>(GetModuleHandleA("jb_mp_s.dll"));

Scr_GetNumParam_t Scr_GetNumParam = Scr_GetNumParam_t(dllBase + 0x17384A4);
Scr_GetConstString_t Scr_GetConstString = Scr_GetConstString_t(dllBase + 0x235F50);
Com_Printf_t Com_Printf = Com_Printf_t(dllBase + 0x003F6400);
G_Init_Game_t G_Init_Game = G_Init_Game_t(dllBase + 0x1ACA10);
Sys_ShowConsole_t Sys_ShowConsole = Sys_ShowConsole_t(dllBase + 0x2C4230);

dvar_t* com_maxfps = *(dvar_t**)(dllBase + 0x711AF8);