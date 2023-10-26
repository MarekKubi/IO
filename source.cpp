#include "header.h"
cyklicznosc::cyklicznosc()
{
	czy = 0;
	for (int i = 0; i < 7; i++)
	{
		tydzien[i] = 0;
	}
}

U_Zdarzenie::U_Zdarzenie()
{
	cyklicznosc b;
	a = b;
	czas = 0;
	okres = 0;
	pineska d;
	dane = d;
}