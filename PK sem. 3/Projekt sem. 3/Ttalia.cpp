#pragma once
#include "pch.h"
#include "Ttalia.h"
#include <iostream>
#include <time.h>

using namespace std;

Ttalia::Ttalia() {		//talia ma 52 kart, 21 czarnych i 21 czerwonych, po 13 każdego typu

}

void Ttalia::stworz()
{
	lista.tail = lista.head;
	Telement *nowy = new Telement{ 0, 0 };

	for (int i = 12; i >= 0; i--) {

		if (i == 12) {
			nowy = lista.add_element(i + 2, L'♠');
			lista.head = nowy;
			lista.head->prev = nullptr;
			lista.tail = lista.head;
		}
		else
		{
			nowy = lista.add_element(i + 2, L'♠');
			nowy->prev = lista.tail;
			lista.tail->next = nowy;
			lista.tail = lista.tail->next;
		}

		nowy = lista.add_element(i + 2, L'♣');
		nowy->prev = lista.tail;
		lista.tail->next = nowy;
		lista.tail = lista.tail->next;

		nowy = lista.add_element(i + 2, L'♥');
		nowy->prev = lista.tail;
		lista.tail->next = nowy;
		lista.tail = lista.tail->next;

		nowy = lista.add_element(i + 2, L'♦');
		nowy->prev = lista.tail;
		lista.tail->next = nowy;
		lista.tail = lista.tail->next;
	}
}

void Ttalia::tasuj() {
	srand(time(NULL));
	lista.tail = lista.head;
	int liczba;
	int karty = 0;

	while (lista.tail->next != nullptr) {
		karty++;
		lista.tail = lista.tail->next;
	}

	lista.tail = lista.head;

	for (int i = karty; i > 1; i--) {
		liczba = (std::rand() % karty) + 1;
		
		while (liczba >= 1) {
			if (lista.tail->next == nullptr)
				break;
			lista.tail = lista.tail->next;
			liczba--;
		}

		if (lista.tail->next == nullptr) {
			lista.tail->prev->next = nullptr;
		}
		else {
			lista.tail->next->prev = lista.tail->prev;
			lista.tail->prev->next = lista.tail->next;
		}

		lista.tail->next = lista.head;
		lista.tail->prev = nullptr;
		lista.tail->next->prev = lista.tail;
		lista.head = lista.tail;
	}
}


void Ttalia::wypisz() {
	Telement *help;
	help = lista.head;
	while (help!=nullptr)
	{
		help->get_karta();
		wcout << " ";
		help = help->next;
	}
	wcout << endl;
}

Telement* Ttalia::wyjmij() {
	lista.tail->prev->next = lista.tail->next;
	lista.tail->next->prev = lista.tail->prev;
	lista.tail->next = nullptr;
	lista.tail->prev = nullptr;

	return lista.tail;
}

Ttalia::~Ttalia()
{
	/*Telement *head;
	while (lista.head != nullptr) {

		head = lista.head;
		lista.head = lista.head->next;

		delete head;
	}
*/
}
