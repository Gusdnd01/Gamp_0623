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
		Update(&tPlayer,fDt); //업데이트또한 랜더와 동일
		Render(&tPlayer); //Render에서는 SceneManager안에있는 엑티브씬의 랜더를 돌려줌
	}
}