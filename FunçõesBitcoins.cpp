#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
void IniciarEcra()
{
	int escolha, deposita, saldos = 1000, random;
	cout << "A iniciar o ecra...\n";
	do
	{
		cout << "Depositar - 1\nEnviar Dinheiro - 2\nVerificar saldo - 3\nSair - 0\n";
		cin >> escolha;
		switch (escolha)
		{
		case 1:
		{
			deposita = depositar(deposita);
		}
		case 2:
		{
			debito(saldos);
		}
		case 3:
		{
			saldos = saldo(saldos, deposita);
			if (saldos > 2000)
			{
				srand(time(0));
				random = rand() % 4 + 1;
				if (random == 1)
				{
					cout << "Uau! Ainda vais preso!";
				}
				else if (random == 2)
				{
					cout << "A nadar em dinheiro, ahn?";
				}
				else if (random == 3)
				{
					cout << "Cuidado para nao afundares o banco com tanto dinheiro!";
				}
				else if (random == 4)
				{
					cout << "Ja vi que finalmete tomaste banho e foste a casa da madrinha";
				}
			}
		}
		}
	} while (escolha == 0);
}
int depositar(int deposita)
{	
	cout << "Quanto deseja depositar na sua conta?";
	cin >> deposita;
	return deposita;
}
int saldo(int saldos,int deposita)
{
	saldos = saldos + deposita;
	cout << "O seu saldo é " << saldos << "\n";
	return saldos;
}
int debito(int saldos)
{
	int enviar;
	cout << "Quanto dinheiro deseja levantar\n";
	cin >> enviar;
	if (enviar > saldos)
	{
		cout << "Nao tens dinheiro pobre!";
		return 0;
	}
}
void main()
{
	IniciarEcra();
}

