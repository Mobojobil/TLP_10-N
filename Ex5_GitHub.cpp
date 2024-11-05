#include <iostream>
using namespace std;
void main()
{
	int fatias, pessoas;
	cout << "Quantas fatias o bolo tem\n";
	cin >> fatias;
	cout << "Quantas pessoas estao na festa\n";
	cin >> pessoas;
	cout << "Sao destribuidas " << fatias / pessoas << " por pessoa\n";
	cout << "Sobra" << fatias % pessoas;
}
