#pragma once

#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <string>
#include <map>
#include <ostream>
#include "console.h"
#include "Input.h"
#include "GameLogic.h"
#include "Scene.h"

using std::cout;
using std::wcout;
using std::shared_ptr;
using std::string;
using std::make_pair;
using std::map;
using std::ofstream;
using std::ifstream;

// ½Ì±ÛÅæ µðÆÄÀÎ Ã³¸®
#define INIT_SINGLE(type)		\
private:						\
	type() {}					\
	~type() {}					\
public:							\
	static type* GetInstance()	\
	{							\
		static type instance;	\
		return &instance;		\
	}							\

#define GET_SINGLE(type)	type::GetInstance()