#include "pch.h"
#include "MenuScene.h"
#include "SceneManager.h"
#include<io.h>
#include<iomanip>
#include<fcntl.h>

void MenuScene::Init(PPLAYER _pPlayer)
{

}

void MenuScene::Update(PPLAYER _pPlayer, float dt)
{

}

void MenuScene::Render(PPLAYER _pPlayer)
{
	GameTitle();
	int iMenu = MenuDraw();
	if (iMenu == 0) //게임 시작
		GET_SINGLE(SceneManager)->LoadScene("gameScene");
	else if (iMenu == 1) {

	}
	else if (iMenu == 2) {
		cout << '\n' << "게임을 종료합니다." << '\n';

		for (int i = 0; i < 3; i++) {
			cout << '\r' << 3 - i << "...";
			Sleep(1000);
		}

		exit(0);
	}
}

void MenuScene::Release()
{

}

void MenuScene::GameTitle()
{
	cout << std::setw(25);
	int mode = _setmode(_fileno(stdout), _O_U16TEXT);
	wcout << L"  _______  ___   _______  __   __  ___   __    _  _______    ___      ___   _______  _______		" << '\n';
	wcout << L"|        ||   | |       ||  | |  ||   | |  |  | ||       |  |   |    |   | |       ||       |	" << '\n';
	wcout << L"|     ___||   | |  _____||  |_|  ||   | |   |_| ||    ___|  |   |    |   | |    ___||  ___  |	" << '\n';
	wcout << L"|    |___ |   | | |_____ |       ||   | |       ||   | __   |   |    |   | |   |___ |   |___		" << '\n';
	wcout << L"|     ___||   | |_____  ||       ||   | |  _    ||   ||  |  |   |___ |   | |    ___||    ___|	" << '\n';
	wcout << L"|    |    |   |  _____| ||   _   ||   | | | |   ||   |_| |  |       ||   | |   |    |   |___		" << '\n';
	wcout << L"| ___|    |___| |_______||__| |__||___| |_| |__ ||_______|  |_______|| ___||___|    |_______|	" << '\n';
	mode = _setmode(_fileno(stdout), _O_TEXT);
}

int MenuScene::KeyController()
{
	int iKey = _getch();

	if (iKey == 224) {
		iKey = _getch();
		switch (iKey)
		{
		case 72:
			return (int)KEYTYPE::UP;
		case 80:
			return (int)KEYTYPE::DOWN;
		default:
			break;
		}
	}
	else if (iKey == 32)
	{
		return (int)KEYTYPE::SPACE;
	}
	return 0;
}

int MenuScene::MenuDraw()
{
	//게임 시작, 게임 정보,종료 하기
	int x = 30;
	int y = 12;
	if (y == 12) {

	}
	CursorPos(x, y);
	cout << "게임 시작";
	CursorPos(x, y + 1);
	cout << "게임 정보";
	CursorPos(x, y + 2);
	cout << "종료 하기";
	while (true)
	{
		int iKey = KeyController();
		switch (iKey)
		{
		case (int)KEYTYPE::UP: {
			if (y > 12) {
				CursorPos(x - 2, y);
				cout << " ";
				CursorPos(x - 2, --y);
				cout << ">";
			}
		}
							 break;
		case (int)KEYTYPE::DOWN:
			if (y < 14) {
				CursorPos(x - 2, y);
				cout << " ";
				CursorPos(x - 2, ++y);
				cout << ">";
			}
			break;
		case (int)KEYTYPE::SPACE: {
			return y - 12;
		}
								break;
		default:
			break;
		}
	}

	return 0;
}
