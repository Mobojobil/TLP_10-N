#include <iostream>
using namespace std;
void main()
{
	int grupoA[10], grupoB[10], Conjunto[20], i;
	cout << "Da me 10 numeros \n";
	for (i = 0; i < 10; i++)
	{
		cin >> grupoA[i];
	}
	cout << "da me outros 10 numeros \n";
	for (i = 0; i < 10; i++)
	{
		cin >> grupoB[i];
	}
	for (i = 0; i < 10; i++)
	{
			Conjunto[i * 2] = grupoA[i];
			Conjunto[i * 2 + 1] = grupoB[i];
	}
	cout << "os numeros sao: \n";
	for (i = 0; i < 20; i++)
	{
		cout << Conjunto[i] << "\n";
	}
}
