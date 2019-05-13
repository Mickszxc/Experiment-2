#include <iostream>
#include <iomanip>
#include <conio.h>
#include <math.h>

using namespace std;
int main()

{
	int extraC = 20;
	int demandC = 35;
	char balance;
	double unpaidB, usedG, totalR, totalB;
	const double consumption = 1.10;

	cout << "Unpaid Balance (Put '0' if Paid): "; cin >> unpaidB;
	cout << "Total Gallons used: "; cin >> usedG;

	if (unpaidB > 0)
	{
		totalB = (consumption * usedG) + demandC + unpaidB + extraC;
		cout << setprecision(2) << fixed;
		cout << "Total Water Bill is " << totalB << " Pesos" << endl;
	}
	else
	{
		totalB = (consumption * usedG) + demandC;
		cout << setprecision(2) << fixed;
		cout << "Total Water Bill is " << totalB << " Pesos" << endl;
	}

	_getch();
	return 0;
}