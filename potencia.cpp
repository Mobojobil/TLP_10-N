#include <iostream>
using namespace std;
void main()
{
	int base, expoente, resultado = 1;
	cin >> base >> expoente;
	for (int i = 0; i < expoente;i++)
	{
		resultado = resultado * base;
	}
	cout << resultado;
}