#include <iostream>
using namespace std;
int calculo(int numeros, int resultado)
{
	resultado = numeros * numeros;
	return resultado;
}
void main()
{
	int numeros, resultado = 0;
	cin >> numeros;
	resultado = calculo(numeros, resultado);
	cout << resultado;
}