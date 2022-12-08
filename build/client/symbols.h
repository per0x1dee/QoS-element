#pragma once
extern DWORD dllBase;
extern dvar_t* com_maxfps;

typedef unsigned int (*Scr_GetNumParam_t)();
extern Scr_GetNumParam_t Scr_GetNumParam;

typedef const char* (*Scr_GetConstString_t)(unsigned int index);
extern Scr_GetConstString_t Scr_GetConstString;

typedef int (*Com_Printf_t)(int channel, const char* fmt, ...);
extern Com_Printf_t Com_Printf;

typedef void (*G_Init_Game_t)();
extern G_Init_Game_t G_Init_Game;

typedef void (*Sys_ShowConsole_t)();
extern Sys_ShowConsole_t Sys_ShowConsole;