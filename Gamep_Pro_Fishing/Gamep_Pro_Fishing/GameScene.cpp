#include "pch.h"
#include "SceneManager.h"
#include "GameScene.h"

void GameScene::Init(PPLAYER _pPlayer)
{
	system("cls");
}

void GameScene::Update(PPLAYER _pPlayer,float dt)
{
	Input();

	if (m_bIsFishing) {
		Fishing();
	}
}

void GameScene::Render(PPLAYER _pPlayer)
{
	CursorPos(0, 0);
	cout << "asdasd";
}

void GameScene::Release()
{
}

void GameScene::Fishing()
{
	float percent = rand() % 100;

	if (percent >= 0 && percent && 30.0f) {
		//ÀÔÁú ¿È
	}
}

void GameScene::Input()
{
	if (GetAsyncKeyState((int)KEYTYPE::ESC)) {
		Release();
	}
	if (GetAsyncKeyState((int)KEYTYPE::SPACE)) {
		m_bIsFishing = !m_bIsFishing;
	}
	if (GetAsyncKeyState((int)KEYTYPE::S)) {
		GET_SINGLE(SceneManager)->LoadScene("ShopScene");
	}
}
