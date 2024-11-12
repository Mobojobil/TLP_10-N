#include <iostream>
using namespace std;

void main()
{
	int i	, num;
	do
	{
		cout << "Que numero de 0 a 100 deseja usar para o final countdown: ";
		cin >> num;

	} while (num < 0 || num > 100);
	for (i = num; i >= 0; i--)
	{
		if (i % 2 != 0)
		{
			cout << i << "\n";
		}
	}


}