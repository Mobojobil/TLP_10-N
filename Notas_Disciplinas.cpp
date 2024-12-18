#include <iostream>
#include <string>
using namespace std;
void main()
w{
	string alunos[666], disciplinas[666];
	int notas[100][100], nralunos = 0, i = 0, resultado = 0, nrdisciplinas = 0, j, resultado2 = 0;
	cout << "Quantos alunos tem a turma? \n";
	cin >> nralunos;
	cout << "Quantas disciplinas existem: \n";
	cin >> nrdisciplinas;
	for (i = 0;i < nralunos;i++)
	{
		cout << "Qual o nome do " << i + 1 << " aluno\n";
		cin >> alunos[i];
	}
	for (i = 0;i < nrdisciplinas;i++)
	{
		cout << "Qual o nome da " << i + 1 << " disciplina\n";
		cin >> disciplinas[i];
	}
	for (i = 0;i < nralunos;i++)
	{
		for (j = 0;j < nrdisciplinas;j++)
		{
			cout << "Qual a nota do/a " << alunos[i] << "  em " << disciplinas[j] << "\n";
			cin >> notas[i][j];
		}
	}
	for (i = 0;i < nralunos;i++)
	{
		resultado = 0;
		for (j = 0;j < nrdisciplinas;j++)
		{
			resultado = resultado + notas[i][j];
		}
		cout << "A media do/a aluno/a " << alunos[i] << " :" << resultado / nrdisciplinas << " \n";
	}
	for (i = 0;i < nrdisciplinas;i++)
	{
		for (j = 0;j < nralunos;j++)
		{
			resultado2 = resultado2 + notas[j][i];
		}
		cout << "A media da disciplina " << disciplinas[i] << " :" << resultado / nralunos << " \n";
	}
}