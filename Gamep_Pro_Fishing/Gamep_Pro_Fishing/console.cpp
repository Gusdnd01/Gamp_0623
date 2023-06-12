#include "pch.h"
#pragma comment (lib,"user32")

static HANDLE hMain = GetStdHandle(STD_OUTPUT_HANDLE);
void SetColor(int color, int bgcolor)
{
	SetConsoleTextAttribute(hMain,
		(bgcolor << 4) | color);
}
void CursorPos(int x, int y)
{
	COORD pos = { x, y };

	SetConsoleCursorPosition(hMain, pos);
}

void CursorSet(bool vis, DWORD dw)
{
	CONSOLE_CURSOR_INFO curinfo;
	curinfo.dwSize = dw; // Ä¿¼­ ±½±â(1~100)
	curinfo.bVisible = vis; // True: º¸ÀÓ, FALSE: ¼û±è
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &curinfo);
}

void FullScreen()
{
	//MoveWindow(GetConsoleWindow(), 0, 0, 1920, 768, TRUE);
	::SendMessage(::GetConsoleWindow(), WM_SYSKEYDOWN, VK_RETURN, 0x20000000);
}
