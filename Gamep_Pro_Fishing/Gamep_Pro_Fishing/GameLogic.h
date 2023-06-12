#pragma once
#include<Windows.h>
#include<iostream>

enum class Feeling {
	NORMAL = 0,
	HAPPY,
	SAD,
	ANGRY,
	MAD,
};

enum class State {
	NORMAL = 0,
	Fishing,
	BITE,
	CLEAR,
	SELECTING,
};

enum class Fish {
	SALMON,
	TROUT,
	TUNA,
	BASS,
	COD,
	POLLOCK,
	YELLOWTAIL,
	SNAPPER,
	BREAM,
	CROAKER,
};

typedef struct _tagpos {
	int x;
	int y;
}POS, * PPOS;

typedef struct _tagplayer {
	POS tPos;
	Feeling fCurFeeling;
	State sCurState;
	int iMoney;
	int iHealth;
}PLAYER, * PPLAYER;


class Scene;

void Init(PPLAYER _pPlayer);
void Update(PPLAYER _pPlayer, float dt);
void Render(PPLAYER _pPlayer);
