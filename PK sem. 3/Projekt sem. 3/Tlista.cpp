#include "pch.h"
#include "Tlista.h"
#include <time.h>

Tlista::Tlista()
{
	head = nullptr;
	tail = nullptr;
}

Telement* Tlista::add_element(int wartosc, wchar_t znak) {
	Telement *element = new Telement{ wartosc, znak };
	element->next = nullptr;
	element->prev = nullptr;
	return element;
}


Telement* Tlista::take_head() {
	Telement *help = head;
	head = head->next; 
	head->prev->next = nullptr;
	head->prev = nullptr;

	return help;
}

Tlista::~Tlista()
{
	Telement *help;
	while (head!=nullptr)
	{
		help = head;
		head = head->next;
		delete help;
	}
}
