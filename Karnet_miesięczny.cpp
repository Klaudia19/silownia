#include <exception>
#include <iostream>
using namespace std;

#include "Karnet_miesięczny.h"
#include "Karnet.h"
#include"Klient.h"


Karnet_miesięczny::Karnet_miesięczny(int dzien, int miesiac, int cena)
{
	_dzien = dzien;
	_miesiac = miesiac;
	_cena = cena;
}

void Karnet_miesięczny::przedluz(Karnet* k, Klient* kl)
{
	//k->_miesiac + 01 = k;
	cout << "Karnet został przedłuzony do dnia: " << _dzien << ", miesiaca: " << _miesiac << endl;
	cout << "Koszt: " << _cena << "zl"<<endl;
}

void Karnet_miesięczny::zawies(Karnet* k1, Karnet_miesięczny karnet_miesięczny)
{

	cout << "Karnet został zawieszony do dnia:" << _dzien << ", miesiaca: " << _miesiac << endl;
	cout << "Koszt: " << _cena << "zl"<<endl;
}

