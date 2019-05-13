#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;

int main()
{
	int i, fibo1 = 0, fibo2 = 1, fibo;
	const int num = 22;

	cout << "Fibonacci Numbers: " << "\n" << endl;

	for (i = 0; i < num; i++)
	{
		if (i <= 1)fibo = i;
		else
		{
			fibo = fibo1 + fibo2;
			fibo1 = fibo2;
			fibo2 = fibo;
		}
		cout << fibo << ",";
	}
	_getch();
	return 0;
}