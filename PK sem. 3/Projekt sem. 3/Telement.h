#pragma once
#include "Tkarta.h"

class Telement
{
	Tkarta karta;
public:
	Telement *next;
	Telement *prev;
	Telement *down;
	Telement(int numer, wchar_t rodzaj);
	Telement & operator=(const Telement przepisz);
	bool & operator==(const Telement porownaj);
	void get_karta();
	void karta_ukryj();
	void karta_pokaz();
	bool stan_karty();
	~Telement();
};

