#include <iostream>
using namespace std;
void verefy1(int numeros[10])
{
	int contar = 0, resultado;
	for (int i = 0;i < 10;i++)
	{
		contar = numeros[i] + contar;
	}
	resultado = contar / 10;
	cout <<"Media: " << resultado;
}
void verefy2(int numeros[10])
{
	int menor = 0;
	for (int i = 0; i < 10; i++)
	{
		if (numeros[i] < menor)
		{
			menor = numeros[i];
		}
	}
	cout << "Menor: " << menor;
}
void verefy3(int numeros[10])
{
	int maior = 0;
	for (int i = 0; i < 10; i++)
	{
		if (numeros[i] > maior)
		{
			maior = numeros[i];
		}
	}
	cout << "Maior: " << maior;
}
void main()
{
	int numeros[10], escolha;
	for (int i = 0;i < 10;i++)
	{
		cout << "Da me o "<< i + 1<<" numero : ";
		cin >> numeros[i];
	}
	cout << "Deseja: Calcular a média de numeros digite 1\n"<<"Achar o menor numero digite 2\n"<< "Achar o maior numero digite 3\n"<<"Sair digite 0\n";
	cin >> escolha;
	switch (escolha)
	{
		case 1:
		{
			verefy1(numeros);
			break;
		}
		case 2:
		{
			verefy2(numeros);
			break;
		}
		case 3:
		{
			verefy3(numeros);
			break;
		}
		case 0:
		{
			cout << "A sair...";
			break;
		}
		default:
		{
			cout << "Error!!!!!!";
			break;
		}
	}
}