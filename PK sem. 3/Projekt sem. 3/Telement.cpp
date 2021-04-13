#include "pch.h"
#include "Telement.h"
#include <iostream>
using namespace std;


Telement::Telement(int numer, wchar_t rodzaj)
{
	karta.set_waga(numer);
	karta.set_typ(rodzaj);
	karta.set_widok(0);
	next = nullptr;
	prev = nullptr;
	down = nullptr;
}

Telement & Telement::operator=(const Telement przepisz) {
	karta = przepisz.karta;
	next = przepisz.next;
	prev = przepisz.prev;
	down = przepisz.down;
	return *this;
}

bool & Telement::operator==(const Telement porownaj) {
	bool T = true;
	bool F = false;

	if (karta == porownaj.karta)
		return T;
	else
		return F;
}

void Telement::get_karta() {
	karta.get();
}

void Telement::karta_ukryj() {
	karta.ukryj_karte();
}

void Telement::karta_pokaz() {
	karta.pokaz_karte();
}
bool Telement::stan_karty() {
	return karta.stan_karty();
}

Telement::~Telement()
{

}
