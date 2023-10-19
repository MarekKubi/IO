#include <iostream>
using namespace std;

int main()
{
	int AA[10];
	int u = 0;
	cout << "Podaj 10 liczb(0 nie jest ujemne)" << endl;
	for (int i = 0; i < 10; i++)
	{
		cin >> AA[i];
		if (AA[i] < 0)
		{
			u++;
		}
	}
	int* BB = new int[u];
	int j = 0;
	for (int i = 0; i < 10; i++)
	{
		if (AA[i] < 0)
		{
			BB[j] = AA[i];
			j++;
			cout << AA[i] << endl;
		}
	}
	cout << "Liczb bylo " << j <<endl<< "Pominietych bylo " << (10-j);
	delete[u] BB;
}