#include <iostream>
#include <string>
using namespace std;
void main()
{
	char letras[26] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' }, frase[666];
	string morse[26] = { ".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.." }, frasemorse[666];
	int escolha, tamanho, i, j;
	cout << "Queres traduzir de portugues para morse(1) ou de morse para portugues(2) \n";
	cin >> escolha;
	cout << "Qual o tamanho da frase \n";
	cin >> tamanho;
	cout << "Diz me a frase que queres traduzir \n";

	switch (escolha)
	{		
		case 1:
		{
			for (i = 0; i < tamanho; i++)
			{
				cin >> frase[i];
			}
			for (i = 0;i < tamanho;i++)
			{
				for (j = 0;j < 26;j++)
				{
					if (frase[i] == letras[j])
					{
						cout << morse[j] << " ";
					}
				}
			}
			break;
		}
		case 2:
		{
			for (i = 0; i < tamanho; i++)
			{
				cin >> frasemorse[i];
			}
			for (i = 0;i < tamanho;i++)
			{
				for (j = 0;j < 26;j++)
				{
					if (frasemorse[i] == morse[j])
					{
						cout << letras[j];
					}
				}
			}
			break;
		}
		default:
		{
			break;
		}
	}
}