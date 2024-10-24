#include <iostream>
#include <locale.h>
using namespace std;
void main()
{
	setlocale(LC_ALL, "Portuguese");
	char F, C, Tipo;
	double numer, temperatura, temperatura_final;
	cout << "Deseja converter Celsius em Fahrenheit então digite C, ou Fahrenheit em Celsius então digite F\n";
	cin >> Tipo;

	switch(Tipo) {
	case 'C':
		cout << "Digite a temperatura a converter\n";
		cin >> temperatura;
		temperatura_final = (temperatura * 9 / 5) + 32;
		cout << "A temperatura em Fahrenheit é " << temperatura_final;
		break;

	case 'F':
		cout << "Digite a temperatura a converter\n";
		cin >> temperatura;
		temperatura_final = (temperatura - 32) * 5 / 9;
		cout << "A temperatura em Celsius é " << temperatura_final;
		break;

	default: 
		cout << "Isso não é um C ou F :/";
		break;
	}



}