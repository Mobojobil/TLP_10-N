#include <iostream>
#include <time.h>
#include <locale.h>
using namespace std;
int main()
{
	int aposta[20], njogadores, maior = 0, numeromaior = 0, aleatorio = rand() % 98 + 1;
	srand(time(0));
	cout << "Quantos jogadores: ";
	cin >> njogadores;
	cout << aleatorio;
	for (int i = 0; i < njogadores; i++)
	{
		cout << "What is the bet of the " << i + 1 << " player >> ";
		cin >> aposta[i];
	}
	for (int i = 0; i < njogadores; i++)
	{
		if (aposta[i] <= aleatorio)
		{
			if (aposta[i] > maior)
			{
				maior = aposta[i];
			}
		}
	}
	for (int i = 0; i < njogadores; i++)
	{
		if (aposta[i] > aleatorio)
		{
			numeromaior = numeromaior + 1;
		}
		if ((aposta[i] < aleatorio) && (aposta[i] == maior))
		{
			cout << "A aposta nr " << i + 1 << " ganhou ";
			break;
		}
		else if (aposta[i] == aleatorio)
		{
			cout << "A aposta nr " << i + 1 << " ganhou ";
			break;
		}
		else if (numeromaior == njogadores)
		{
			cout << "Ninguem ganhou";
		}
	}
}