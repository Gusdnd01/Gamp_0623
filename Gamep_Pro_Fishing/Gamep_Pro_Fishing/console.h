#pragma once
#include<Windows.h>
enum class COLOR
{
    BLACK, BLUE, GREEN, SKYBLUE, RED,
    VIOLET, YELLOW, LIGHT_GRAY, GRAY, LIGHT_BLUE,
    LIGHT_GREEN, MINT, LIGHT_RED, LIGTH_VIOLET,
    LIGHT_YELLOW, WHITE
};
void SetColor(int color, int bgcolor);
void CursorPos(int, int);
void CursorSet(bool vis, DWORD dw);
void FullScreen();