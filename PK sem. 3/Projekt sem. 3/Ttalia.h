#pragma once
#include "Tkarta.h"
#include "Tlista.h"

class Ttalia
{	//doda� funkcj� tasuj�c� gotow� tali�
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

