#include <iostream>
using namespace  std;
double valores(float nrpessoas, float despesa) {
	float resultado;
	resultado = despesa / nrpessoas;
	return resultado;}
void main() {
	float despesa, resultado, nrpessoas;
	cin >> nrpessoas >> despesa;
	resultado = valores(nrpessoas, despesa);
	cout << resultado;}

