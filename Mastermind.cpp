#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
void main()
{
	int numeros[4], escolha[4], certo = 0, vezes = 0;
	srand(time(0));

	for (int i = 0; i < 4; i++)
	{
		numeros[i] = rand() % 2;
		i + 1;
	}
	do {
		certo = 0;
		cout << "Adivinha os 4 numeros ( 0/1 ): \n";
		for (int i = 0; i < 4; i++)
		{
			cin >> escolha[i];
			i + 1;
		}
		for (int i = 0; i < 4; i++)
		{
			if (escolha[i] == numeros[i])
			{
				certo++;
			}
		}
		vezes++;
		cout << "Voce acertou " << certo << "\n";
		if (certo == 4)
		{
			cout << "Parabens voce  ganhou 1 MILHAO DE DOLARESSSSSSSSS \n" << "Em " << vezes << " tentativas";
		}
	} while (certo < 4);

}