#include <iostream>
using namespace std;
void main()
{
	float resultado;
	char escolha;
	int valor1, valor2;
	cout << "Se deseja somar +, subtarir digite -, multiplicar digite *, dividir digite /.\n";
	cin >> escolha;
	switch (escolha) {
		case
		'+':
			cout << "Escreva os numeros que deseja calcular\n";
			cin >> valor1;
			cin >> valor2;
			resultado = valor1 + valor2;
			cout << "A sua conta deu: " << resultado;
			break;
		case'-':
			cout << "Escreva os numeros que deseja calcular\n";
			cin >> valor1;
			cin >> valor2;
			resultado = valor1 - valor2;
			cout << "A sua conta deu: " << resultado;
			break;
		case'*':
			cout << "Escreva os numeros que deseja calcular\n";
			cin >> valor1;
			cin >> valor2;
			resultado = valor1 * valor2;
			cout << "A sua conta deu: " << resultado;
			break;
		case'/':
			cout << "Escreva os numeros que deseja calcular\n";
			cin >> valor1;
			cin >> valor2;
			resultado = valor1 / valor2;
			cout << "A sua conta deu: " << resultado;
			break;
	}
}