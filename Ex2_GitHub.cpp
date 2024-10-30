#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
void main()
{
	srand(time(0));
	int random = rand() % 100 + 1, certo;
	cout << "Adivinha o numero em que pensei: \n";
	do
	{
		cin >> certo;
		if (certo < random) {
			cout << "Errado\n";
			cout << "O numero certo esta acima do seu numero\n";
			cout << "Tenta outra vez \n";
		}
		if (certo > random) {
			cout << "Errado\n";
			cout << "O numero certo esta a baixo do seu numero\n";
			cout << "Tenta outra vez \n";
		}
	} while (certo != random);
	cout << "Esta certo";
}