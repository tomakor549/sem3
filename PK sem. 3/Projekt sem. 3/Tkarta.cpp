#pragma once
#include "pch.h"
#include "Tkarta.h"
#include <iostream>
#include <fcntl.h>
#include <io.h>

void Tkarta::ukryj_karte() {
	widok = 0;
}

void Tkarta::pokaz_karte() {
	widok = 1;
}

Tkarta::Tkarta()
{
	widok = 0;
	waga = 0;
	typ = 0;
}

Tkarta::~Tkarta() {

}

void Tkarta::get() {

	_setmode(_fileno(stdout), _O_U16TEXT);
	if (widok == 0)
		std::wcout << "??";
	else
		std::wcout << waga << typ;
}

bool Tkarta::stan_karty() {
	if (widok == 0)
		return 0;
	else
		return 1;
}

Tkarta & Tkarta::operator = (const Tkarta bazowa) {
	widok = bazowa.widok;
	waga = bazowa.waga;
	typ = bazowa.typ;
	return *this;
}

bool & Tkarta::operator == (const Tkarta bazowa) {
	bool T = true;
	bool F = false;
	if (typ == bazowa.typ)
		if (waga == bazowa.waga)
			return T;
	return F;
}

void Tkarta::set_waga(int a) {
	waga = a;
}
void Tkarta::set_typ(wchar_t a) {
	typ = a;
}
void Tkarta::set_widok(bool a) {
	widok = a;
}