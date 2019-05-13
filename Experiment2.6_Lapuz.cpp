#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int i, num, sum;

	cout << "Input a Number: ";
	cin >> i;

	do
	{
		sum = 0;
		for (num = 1; num <= i; num++)
		{
			sum += num;
		}
		cout << "The sum of all whole numbers from 1 to " << i << " is " << sum << "." << endl;
		cout << "Input a Number: ";
		cin >> i;
	} while (i > 0);
	cout << "Thank you!" << endl;

	_getch();
	return 0;
}


