#include <iostream> 
#include <locale.h>
#include <time.h>

using namespace std;
void main() {
	setlocale(LC_ALL, "Portuguese");
	int i, contar = 0, numero, contarletras1[26] = { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 }, contarletras2[26] = { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 };
	char palavra1[100], palavra2[100], abc[26] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','u','v','w','x','y','z' };
	cout << "Quantas letras têm as tuas palavras?";
	cin >> numero;
	cout << "\n Diz me a primeira palavra \n";
	for (i = 0; i < numero; i++)
	{
		cin >> palavra1[i];
	}
	cout << "\n Diz me a segunda palavra \n";
	for (i = 0; i < numero; i++)
	{
		cin >> palavra2[i];
	}
	for (i = 0;i < 26;i++)
	{
		for (int j = 0; j < numero; j++)
		{
			if (palavra1[j] == abc[i])
			{
				contarletras1[i] = contarletras1[i] + 1;
			}
			if (palavra2[j] == abc[i])
			{
				contarletras2[i] = contarletras2[i] + 1;
			}
		}
	}
	for (i = 0; i < 26; i++)
	{
		if (contarletras1[i] == contarletras2[i])
		{
			contar = contar + 1;
		}
	}
	if (contar == 26)
	{
		cout << "É um anagrama";
	}
	else
	{
		cout << "Não é um anagrama";
	}
}