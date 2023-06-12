#include "pch.h"
#include "SceneManager.h"

#include "MenuScene.h"
#include "GameScene.h"

MenuScene menuScene;
GameScene gameScene;

void Init(PPLAYER _pPlayer)
{	
	srand(time(NULL));

	CursorSet(false, 1);
	system("cls");
	_pPlayer->sCurState = State::SELECTING;

	//모든 씬을 올려놓는 곳
	GET_SINGLE(SceneManager)->RegisterScene("menuScene", &menuScene);
	GET_SINGLE(SceneManager)->RegisterScene("gameScene", &gameScene);

	float fRandNum = rand() % 100;

	if (fRandNum >= 0 && fRandNum <= 30) {
		_pPlayer->fCurFeeling = Feeling::NORMAL;
	}
	else if (fRandNum >= 31 && fRandNum <= 50) {
		_pPlayer->fCurFeeling = Feeling::HAPPY;
	}
	else if (fRandNum >= 51 && fRandNum <= 70) {

		_pPlayer->fCurFeeling = Feeling::SAD;
	}
	else if (fRandNum >= 71 && fRandNum <= 90) {
		_pPlayer->fCurFeeling = Feeling::ANGRY;

	}
	else if (fRandNum >= 91 && fRandNum <= 100) {
		_pPlayer->fCurFeeling = Feeling::MAD;
	}

	_pPlayer->iMoney = 500;
	_pPlayer->iHealth = 100;

	GET_SINGLE(SceneManager)->LoadScene("menuScene");
}

void Update(PPLAYER _pPlayer, float dt)
{
	GET_SINGLE(SceneManager)->Update(_pPlayer, dt);
}

void Render(PPLAYER _pPlayer)
{
	CursorPos(0, 0);
	GET_SINGLE(SceneManager)->Render(_pPlayer);
}
