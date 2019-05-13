#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	char p;
	float time;

	cout << "Package A: For P995/mo 10 hrs of access are provided. Additional hours are P20/hr." << "\n" << "Package B: For P1495/mo 20hrs of access are provided. Additional hours are P10/hr." << "\n" << "Package C: For P1995/mo of unlimited access is provided." << "\n" << endl;
	cout << "What package (A,B,C) did you purchased: " ; cin >> p;

	switch (p)
	{

	case 'a':
	case 'A':
		cout << "How many hours were used: "; cin >> time;
		if (time <= 10)
			cout << "Your total amount due is: P995";
		else
			cout << "Your total amount due is: P" << 995 + (time - 10) * 20;
		break;
	case 'b':
	case 'B':
		cout << "How many hours were used? "; cin >> time;
		if (time <= 20)
			cout << "Your total amount due is: P1495";
		else
			cout << "Your total amount due is: P" << 1495 + (time - 20) * 10;
		break;
	case 'c':
	case 'C':
		cout << "Your total amount due is P1995.";
		break;
	default: cout << "Enter A, B or C only.";
		
	}
	_getch();
	return 0;

}