#include <iostream>
using namespace std;
float IMC_peso[10], IMC_altura[10];
float digitar()
{
	for (int i = 0; i < 10; i++)
	{
		cin >> IMC_peso[i];
		cin >> IMC_altura[i];
	}
	return 0;
}
float calcular1()
{
	int escolha, nr;
	float resultado = 0;
	cin >> nr;
	resultado = 50 / (IMC_peso[nr - 1] * IMC_peso[nr - 1]);
	if (resultado < 18.5)
	{
		cout << resultado << " baixo peso\n";
	}
	else if (resultado >= 18.5 && resultado < 24.9)
	{
		cout << resultado << " peso normal\n";
	}
	else if (resultado >= 25 && resultado < 29.9)
	{
		cout << resultado << " excesso de peso\n";
	}
	else if (resultado >= 30 && resultado < 35)
	{
		cout << resultado << " obesidade\n";
	}
	else if (resultado >= 35)
	{
		cout << resultado << " obesidade extrema\n";
	}
	return 0;
}
float geral()
{
	float resultado = 0;
	for (int i = 0; i < 10;i++)
	{
		resultado = resultado + 50 / (IMC_peso[i] * IMC_peso[i]);
	}
	resultado = resultado / 10;
	cout << resultado;
	return 0;
}
void main()
{
	int escolha = 0, IMC_peso[10], IMC_altura[10];
	do
	{
		cin >> escolha;
		switch (escolha)
		{
			case 1:
			{
				digitar();
				break;
			}
			case 2:
			{
				calcular1();
				break;
			}
			case 3:
			{
				geral();
				break;
			}
			default:
			{
				break;
			}
		}
	} while (escolha != 0);
}