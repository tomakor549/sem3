#pragma once
#include "Telement.h"

class Tlista{
public:
	Telement *head;
	Telement *tail;
	Telement* add_element(int wartosc, wchar_t znak);
	Telement* take_head();
	Tlista();
	~Tlista();
};

