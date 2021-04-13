#pragma once
#include "Tkarta.h"
#include "Ttalia.h"
#include "Tlista.h"

class Tstos
{
public:
	Ttalia talia;
	Tlista stos;
	void set_talia(Telement *&head, Telement *&tail);
	void stos_podstawowy();
	void pokaz_stos();
	void ustaw_stos();
	Tstos();
	~Tstos();
};

