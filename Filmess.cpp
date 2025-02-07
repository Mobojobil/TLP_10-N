#include <iostream>
#include <string>
using namespace std;
string filmes[4] = { "A Space Odissey", "The Godfather", "Raiders of the Lost Ark", "Schindlers list" };
int ator(int nota[4][4], string avaliacoes[4])
{
	int contar = 0;
	for (int j = 0; j < 4;j++)
	{
		cout << "No filme " << filmes[j] << " avalias o/a " << avaliacoes[0] << " de 1 a 5: ";
		cin >> nota[0][j];
		contar = contar + nota[0][j];
	}
	cout << "\n";
	return nota[4][4], contar;
}
int atriz(int nota[4][4], string avaliacoes[4])
{
	int contar = 0;
	for (int j = 0; j < 4;j++)
	{
		cout << "No filme " << filmes[j] << " avalias o/a " << avaliacoes[1] << " de 1 a 5: ";
		cin >> nota[1][j];
		contar = contar + nota[1][j];
	}
	cout << "\n";
	return nota[4][4], contar;
}
int foto(int nota[4][4], string avaliacoes[4])
{
	int contar = 0;
	for (int j = 0; j < 4;j++)
	{
		cout << "No filme " << filmes[j] << " avalias o/a " << avaliacoes[2] << " de 1 a 5: ";
		cin >> nota[2][j];
		contar = contar + nota[2][j];
	}
	cout << "\n";
	return nota[4][4], contar;
}
int banda(int nota[4][4], string avaliacoes[4])
{
	int contar = 0;
	for (int j = 0; j < 4;j++)
	{
		cout << "No filme " << filmes[j] << " avalias o/a " << avaliacoes[3] << " de 1 a 5: ";
		cin >> nota[3][j];
		contar = contar + nota[3][j];
	}
	cout << "\n";
	return nota[4][4], contar;
}
void main()
{
	string avaliacoes[4] = { "Melhor ator", "Melhor atriz", "Melhor fotografia", "Melhor banda Sonora" };
	int escolha = 0, nota[4][4], contar1 = 0, contar2 = 0, contar3 = 0, contar4 = 0;
	do
	{
		cout << "Deseja fazer o que:\nMelhor ator - 1\nMelhor atriz - 2\nMelhor fotografia - 3\nMelhor banda Sonora - 4\nSair - 0\nIntroduza: ";
		cin >> escolha;
		switch (escolha)
		{
		case 1:
		{
			nota[4][4], contar1 = ator(nota, avaliacoes);
			break;

		}
		case 2:
		{
			nota[4][4], contar2 = atriz(nota, avaliacoes);
			break;
		}
		case 3:
		{
			nota[4][4], contar3 = foto(nota, avaliacoes);
			break;
		}
		case 4:
		{
			nota[4][4], contar4 = banda(nota, avaliacoes);
			break;
		}
		}
	} while (escolha != 0);
}