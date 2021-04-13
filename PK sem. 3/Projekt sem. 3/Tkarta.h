#pragma once
#include <string>

class Tkarta {

	int waga;
	wchar_t typ;	//Osobna klasa typu
	bool widok;		//karta na pocztku jest zawsze niewidoczna = 0

public:
	Tkarta();
	Tkarta & operator = (const Tkarta bazowa);
	bool & operator == (const Tkarta bazowa);
	void ukryj_karte();
	void pokaz_karte();
	void set_waga(int a);
	void set_typ(wchar_t a);
	void set_widok(bool a);
	bool stan_karty();	//pokazuje stan karty - widoczna/niewidoczna
	~Tkarta();
	
	void get();
};