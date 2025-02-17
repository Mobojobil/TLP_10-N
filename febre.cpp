#include <iostream>
using namespace std;

// Com Tomas Dias

void main()
{
	int febrei[2], febref[2], i;

	cin >> febrei[0];
	cin >> febrei[1];
	cin >> febref[0];
	cin >> febref[1];

	if (febref[0] <= 36)
	{
		cout << "Nao tem febre\n";
	}

	else
	{
		if (febrei[0] == febref[0])
		{

			if ((febref[0] >= 37) && (febrei[1] == febref[1]))
			{
				cout << "\nA febre se manteve";
			}
		}

		if (febref[0] == febrei[0])
		{
			if (febref[1] > febrei[1])
			{
				cout << "A febre aumentou\n";
			}

			else if (febref[1] < febrei[1])
			{
				cout << "A febre diminuiu\n";
			}
		}
	}
}