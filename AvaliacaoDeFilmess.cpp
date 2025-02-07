#include <iostream>
#include <string>
using namespace std;
string filmes[4] = { "A Space Odissey", "The Godfather", "Raiders of the Lost Ark", "Schindlers list" };
int ator(int nota[4][4], string avaliacoes[4])
{
	int maior = 0;
	for (int j = 0; j < 4;j++)
	{
		cout << "No filme " << filmes[j] << " avalias o/a " << avaliacoes[0] << " de 1 a 5: ";
		cin >> nota[0][j];
		if (nota[0][j] > maior)
		{
			maior = nota[0][j];
			filmes[j] = nota[0][j];
			cout << "O melhor filme desta categoria e " << filmes[j];
		}
	}
	return nota[4][4];
}
int atriz(int nota[4][4], string avaliacoes[4])
{
	for (int j = 0; j < 4;j++)
	{
		cout << "No filme " << filmes[j] << " avalias o/a " << avaliacoes[1] << " de 1 a 5: ";
		cin >> nota[1][j];
	}
	return nota[4][4];
}
int foto(int nota[4][4], string avaliacoes[4])
{
	for (int j = 0; j < 4;j++)
	{
		cout << "No filme " << filmes[j] << " avalias o/a " << avaliacoes[2] << " de 1 a 5: ";
		cin >> nota[2][j];
	}
	return nota[4][4];
}
int banda(int nota[4][4], string avaliacoes[4])
{
	for (int j = 0; j < 4;j++)
	{
		cout << "No filme " << filmes[j] << " avalias o/a " << avaliacoes[3] << " de 1 a 5: ";
		cin >> nota[3][j];
	}
	return nota[4][4];
}
void main()
{
	string avaliacoes[4] = { "Melhor ator", "Melhor atriz", "Melhor fotografia", "Melhor banda Sonora" };
	int escolha = 0, nota[4][4];
	do
	{
		cout << "Deseja fazer o que:\nMelhor ator - 1\nMelhor atriz - 2\nMelhor fotografia - 3\nMelhor banda Sonora - 4\nSair - 0\nIntroduza: ";
		cin >> escolha;
		switch (escolha)
		{
		case 1:
		{
			nota[4][4] = ator(nota, avaliacoes);
			break;
		}
		case 2:
		{
			nota[4][4] = atriz(nota, avaliacoes);
			break;
		}
		case 3:
		{
			nota[4][4] = foto(nota, avaliacoes);
			break;
		}
		case 4:
		{
			nota[4][4] = banda(nota, avaliacoes);
			break;
		}
		}
	} while (escolha != 0);
	cout << "Leaving...";
}