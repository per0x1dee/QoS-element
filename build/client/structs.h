#pragma once
#include "additional_headers.h"

//Taken from IW4x. https://github.com/XLabsProject/iw4x-client
struct MessageLine {
	int messageIndex;
	int textBufPos;
	int textBufSize;
	int typingStartTime;
	int lastTypingSoundTime;
	int flags;
};

struct Message {
	int startTime;
	int endTime;
};

struct MessageWindow {
	MessageLine* lines;
	Message* messages;
	char* circularTextBuffer;
	int textBufSize;
	int lineCount;
	int padding;
	int scrollTime;
	int fadeIn;
	int fadeOut;
	int textBufPos;
	int firstLineIndex;
	int activeLineCount;
	int messageIndex;
};

struct MessageBuffer {
	char gamemsgText[4][2048];
	MessageWindow gamemsgWindows[4];
	MessageLine gamemsgLines[4][12];
	Message gamemsgMessages[4][12];
	char miniconText[4096];
	MessageWindow miniconWindow;
	MessageLine miniconLines[100];
	Message miniconMessages[100];
	char errorText[1024];
	MessageWindow errorWindow;
	MessageLine errorLines[5];
	Message errorMessages[5];
};

struct Console {
	MessageWindow consoleWindow;
	MessageLine consoleLines[1024];
	Message consoleMessages[1024];
	char consoleText[65536];
	char textTempLine[512];
	unsigned int lineOffset;
	int displayLineOffset;
	int prevChannel;
	bool outputVisible;
	int fontHeight;
	int visibleLineCount;
	int visiblePixelWidth;
	float screenMin[2];
	float screenMax[2];
	MessageBuffer messageBuffer[1];
	float color[4];
};

struct dvar_t
{
	char padding[0x10];
	DWORD value;
};