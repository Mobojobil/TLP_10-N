#include <iostream>
using namespace std;
void main()
{
	int alturas[30], idades[30], media, soma = 0, i, j, contar = 0;
	for (i = 0; i < 30; i++)
	{
		cout << "Diz me a idade do " << i + 1 << " aluno: \n";
		cin >> idades[i];
	}
	for (i = 0; i < 30; i++)
	{
		cout << "Diz me a altura do " << i + 1 << " aluno: \n";
		cin >> alturas[i];
		soma += alturas[i];
	}
	media = soma / idades[i];
	cout << media;
	for (i = 0; i < 30; i++) 
	{
		if (idades[i] >= 13)
		{
			if (alturas[i] < media) 
			{
				contar++;
			}
		}
	}
	cout << "Serca de " << contar << " tem mais de 13 anos e tem a altura abaixo da media\n";
}
	
	
	