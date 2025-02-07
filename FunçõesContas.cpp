#include <iostream>
using namespace std;
int somar(int numero1, int numero2)
{
	int resultado = numero1 + numero2;
	return resultado;
}
int subtrair()
{

}
int multiplicar()
{

}
int dividir()
{

}
void main()
{
	int numero1, numero2, escolha = 0, back;
	cout << "Dejesa fazer oque:\nsomar(1)\nsubtrair(2)\nmultiplicar(3)\ndividir\nsair(0)\n";
	cin >> escolha;
	cout << "Diz me os dois numeros que deseja calcular\n";
	cin >> numero1;
	cin >> numero2;
	do 
	{
		switch (escolha)
		{
			case 1:
			{
				back = somar(numero1,numero2);
				cout << back;
				break;

			}
			case 2:
			{
				
				break;
			}
			case 3:
			{
				
				break;
			}
			case 4:
			{

				break;
			}
		}
		cin >> numero1;
		resultado = somar(numero1);
	} while (escolha == 0);
}