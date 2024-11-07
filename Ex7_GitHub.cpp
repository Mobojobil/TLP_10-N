#include <iostream>
#include <string>
using namespace std;
void main()
{

	setlocale(LC_ALL, "Portuguese");
	int i;
	char b = 'n';
	string nomes[5];
	do
	{
		for (i = 0; i < 5; i++)
		{
			cout << "Diz-me " << i + 1 << "º nome\n";
			cin >> nomes[i];
		}
		for (i = 4; i >= 0; i--)
		{
			cout << nomes[i] << "\n";
		}
		cout << "Queres sair do programa (s/n)";
		cin >> b;
	} while (b == 's');
}