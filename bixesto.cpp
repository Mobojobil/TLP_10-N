#include <iostream>
using namespace std;
void main()
{
	int bixesto = 0;
	cin >> bixesto;
	if (bixesto % 4 == 0)
	{
		cout << "Ano bixesto: 366 dias";
	}
	else
	{
		cout << "Ano nao e bixesto: 365 dias";
	}
}