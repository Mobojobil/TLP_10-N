#include <iostream>
#include <string>
#include <locale.h>
using namespace std;
string produtos[5] = { "batatas", "cenouras", "couves", "alface", "brocolos" },
meses[12] = { "Janeiro", "Fevereiro", "Marco", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro" };
int produtosnomes[5][12];
int mensais()
{
	for (int i = 0; i < 5;i++)
	{
		for (int j = 0; j < 12;i++)
		{
			cout << "Foram gastos serca de: " << produtosnomes[i][j] << " em " << meses[j] << "\n";
		}
	}
	return 0;
}
int produto()
{
	for (int i = 0; i < 5;i++)
	{
		for (int j = 0; j < 12;i++)
		{
			cout << "O produto " << produtos[i] << " foi gasto " << produtosnomes[i][j] << "\n";
		}
	}
	return 0;
}
int valores()
{
	for (int i = 0; i < 5;i++)
	{
		for (int j = 0; j < 12;i++)
		{
			cout << "O produto "<< produtos[j] << " no mes "<< meses[i] << " foi gasto: ";
			cin >> produtosnomes[i][j];
		}
	}
	return 0;
}
void main()
{
	setlocale(LC_ALL, "Portuguese");
	string produtos[5] = { "batatas", "cenouras", "couves", "alface", "brocolos" },
		meses[12] = { "Janeiro", "Fevereiro", "Marco", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro" };
	int escolha;
	do
	{
		cout << "Deseja: \n" << "Sair - 0 \n" << "Calcular totais mensais - 1 \n" << "Calcular totais por produto - 2 \n" << "Inserir valores - 3\n";
		cin >> escolha;
		switch (escolha)
		{
			case 1:
			{
				mensais();
				break;
			}
			case 2:
			{
				produto();
				break;
			}
			case 3:
			{
				valores();
				break;
			}
		}
	} while (escolha == 0);
}