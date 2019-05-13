#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;

int main()
{
	int i, count;
	count = 1;
	for (i=1;i<=10;i++)
	{
		cout << count << ",";
		count++;
	}
	for (count=12;count<=30;)
	{
		cout << count << ",";
		count += 2;
	}
	_getch();
	return 0;
}