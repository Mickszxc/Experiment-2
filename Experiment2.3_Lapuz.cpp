#include <iostream>
#include <iomanip>
#include <conio.h>
#include <math.h>

using namespace std;
int main()
{
	double V;
	const double z = 2.5;
	int xval, yval;

	cout << "Enter any value of x:";
	cin >> xval;
	cout << "Enter any value of y:";
	cin >> yval;

	switch (xval)
	{
	case 1:
		if (yval >= 1 && yval < 5)
		{
			V = xval * yval * z;
		}
		else if (yval >= 5)
		{
			V = xval + (yval / z);
		}
		else
		{
			V = xval + yval + z;
		}
		cout << setprecision(2) << fixed;
		cout << "The computed V is " << V << endl;
		break;

	case 2:
		if (yval <= 5)
		{
			V = abs((xval - yval) / z);
		}
		else if (yval > 5)
		{
			V = xval - sqrt(yval + z);
		}
		else
		{
			V = xval + yval + z;
		}
		cout << setprecision(2) << fixed;
		cout << "The computed V is " << V << endl;
		break;

	default:
		V = xval + yval + z;
		cout << "The computed V is " << V << endl;
	}

	_getch();
	return 0;

}