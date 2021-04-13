#include "pch.h"
#include "Tgra.h"


Tgra::Tgra()
{
	talia.stworz();
	talia.tasuj();
	stos.set_talia(talia.lista.head, talia.lista.tail);
	stos.stos_podstawowy();
	talia = stos.talia;
	stos.ustaw_stos();
	talia.lista.head->prev = talia.lista.tail;
	talia.lista.tail->next = talia.lista.head;
}

void Tgra::pokaz_stos() {

}

Tgra::~Tgra()
{
}
