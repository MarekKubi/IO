#include <iostream>
using namespace std;
int main()
{
	int a = 0;
	for (int i = 301; i < 1200; i += 2)
	{
		if (a == 1 && !(i % 100 == 1))
		{
			cout << " ";
		}
		cout << i;
		a = 1;
		if (i % 100 == 99)
		{
			if ((i+100) % 400 == 99)
			{
				cout << endl;
			}
			else
			{
				cout << "***";
			}
		}
	}
}