#include <iostream>
using namespace std;
void main()
{
	char palavra[100];
	int tamanho;
	cout << "Da me o tamanho da palavra:\n";
		cin >> tamanho;
	cout << "Escreve me a palavra que deseja tranformar na lingua dos Ps \n";

	for (int i = 0;i < tamanho;i++)
	{
		cin >> palavra[i];
	}
	for (int i = 0;i < tamanho;i++)
	{
		if (palavra[i] == 'a'|| palavra[i] == 'e'|| palavra[i] == 'i'|| palavra[i] == 'o'|| palavra[i] == 'u')
		{
			cout << palavra[i];
			cout << "p";
			cout << palavra[i];
		}
		else
		{
			cout << palavra[i];
		}
	}
}