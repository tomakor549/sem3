#include "pch.h"
#include "Tstos.h"
#include <ctime>
#include <iostream>

Tstos::Tstos() {

}

void Tstos::set_talia(Telement *&head, Telement *&tail) {
	talia.lista.head = head;
	talia.lista.tail = tail;
}

void Tstos::stos_podstawowy() {		//pojepa³o siê coœ :/
	int j;
	Telement *help;

	stos.head = help = talia.lista.take_head();
	

	for (int i = 1; i <= 7; i++) {
		j = i;

		while (j != 1) {
			stos.tail = talia.lista.take_head();
			stos.tail->next = stos.tail->prev = nullptr;
			help->down = stos.tail;
			help = help->down;
			j--;
		}

		stos.head->next = talia.lista.take_head();
		stos.head->next->next = stos.head->next->prev = nullptr;
		stos.head->next->prev = stos.head;
		stos.head = stos.head->next;
		help = stos.head;
	}
	stos.head->next = nullptr;
	stos.tail = stos.head;

	while (stos.head->prev != nullptr) {
		stos.head = stos.head->prev;
	}
}

void Tstos::pokaz_stos() {
	Telement *glowa = stos.head;
	Telement *ogon = stos.tail;
	int i = 1;

	while (glowa->next != nullptr) {
		ogon = glowa;

		std::wcout <<i<< ")\t";
		glowa->get_karta();
		std::wcout << "\t";
		while (ogon->down != nullptr) {
			ogon->down->get_karta();
			std::wcout << "\t";
			ogon = ogon->down;
		}
		std::wcout << std::endl;

		glowa = glowa->next;
	}
}

void Tstos::ustaw_stos() {
	Telement *head = stos.head;
	Telement *tail = stos.tail;
	Telement *help;

	head->karta_pokaz();
	head = head->next;

	while (head != tail) {
		help = head;
		while (help->down != nullptr) {
			help->karta_ukryj();
			help = help->down;
		}
		help->karta_pokaz();
		head = head->next;
	}
}

Tstos::~Tstos()
{
	
}
