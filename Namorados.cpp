#include <iostream>
#include <locale.h>
#include <time.h>
#include <string>
using namespace std;
void main()
{
	srand(time(0));
	string namorados[5] = { "Antonio", "Guilherme", "Ricardo", "Daniel", "Nuno" },
		local[5] = { "restaurante", "Parque de Diversoes", "Galeria", "Praia", "Jardim" };
	cout << namorados[rand() % 5];
	cout << local[rand() % 5];
}