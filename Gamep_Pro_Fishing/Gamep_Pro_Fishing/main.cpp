#include "pch.h"
#include "Timer.h"

using std::cout;

int main() {
	PLAYER tPlayer = {};

	int count = 0;
	Scene* curScene;

	FullScreen();
	Init(&tPlayer);
	float fDt;
	while (true)
	{
		fDt = GET_SINGLE(Timer)->GetDeltaTime();
		Update(&tPlayer,fDt); //������Ʈ���� ������ ����
		Render(&tPlayer); //Render������ SceneManager�ȿ��ִ� ��Ƽ����� ������ ������
	}
}