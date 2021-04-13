#pragma once
#include "Tkarta.h"
#include "Tlista.h"

class Ttalia
{	//dodaæ funkcjê tasuj¹c¹ gotow¹ taliê
public:
	Tlista lista;

	Ttalia();
	~Ttalia();
	void stworz();
	Telement* wyjmij();
	void tasuj();
	void wypisz();
	//metoda do rozmieszczenia kart
};

