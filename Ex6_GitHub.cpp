#include <iostream>
using namespace std;
void main()
{
	int num_num[10]{}, i, escolha, contador = 0, somatorio = 0;
	for (i = 0; i < 10; i++)	
	{
		cout << "Diz os numero: \n";
		cin >> num_num[i];
	}
	cout << "Queres contar negativos(1), ou somar negativos(2)\n";
	cin >> escolha;
	switch (escolha)
	{
	case 1:
		for (i = 0; i < 10; i++)
		{
			if (num_num[i] < 0) 
			{
				contador = contador + 1;
			}
		}
		cout << "Inseriste " << contador << " numeros negativos\n";
		break;
	case 2:
		for (i = 0; i < 10; i++);
		{
			if (num_num[i] < 0) 
			{
				somatorio = somatorio + num_num[i];
			}
		}
		cout << "O somatorio de todos os numeros e" << somatorio;
		break;
	default:
		break;
	}
}