#pragma once
#include <iostream>
using namespace std;

class pineska
{
	//  KLASA ODPOWIEDZIALNA ZA PINESKI, NIE W KOMPETENCJI DODAWANIA ZDARZENIA
};
class cyklicznosc
{
	bool czy;
	bool tydzien[7];
	friend class U_Zdarzenie;
public:
	cyklicznosc();
};


class U_Zdarzenie
{
	long long int czas;
	int okres;
	pineska dane;
	cyklicznosc a;
public:
	U_Zdarzenie();
	void daj_czas_okres();

};
