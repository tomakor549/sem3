#pragma once
#include "Tplansza.h"
#include "Ttalia.h"
#include "Tstos.h"

class Tgra
{
	Ttalia talia;
	Tstos stos;
public:
	Tplansza plansza;
	Telement *wsk;
	void pokaz_stos();
	Tgra();
	~Tgra();
};

