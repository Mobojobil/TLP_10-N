#include <iostream>
using namespace std;
void main()
{
	char escolha;
	int valor1, valor2;
	cout << "Se deseja somar +, subtarir digite -, multiplicar digite *, dividir digite /.\n";
	cin >> escolha;
	cout << "Escreva os numeros que deseja calcular\n";
    cin >> valor1;
	cin >> valor2;
	switch (escolha) {
		case
		'+':
		
			cout << "A sua conta deu: " << valor1 + valor2;
			break;
		case'-':
			cout << "A sua conta deu: " << valor1 - valor2;
			break;
		case'*':
			cout << "A sua conta deu: " << valor1 * valor2;
			break;
		case'/':
			cout << "A sua conta deu: " << valor1 / valor2;
			break;
	}
}