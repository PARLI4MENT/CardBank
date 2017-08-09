#include <iostream>
#include <conio.h>
#include <string>
#include <ctime>

using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");

	unsigned int c, b;
	cout << "Enter C, B: ";
	cin >> c >>  b;

	cout << "================================\n";

	cout << "~c: " << ~c << endl;
	cout << "~b: " << ~b << endl;
	cout << "a&b: " << (c&b) << endl;
	cout << "a|b: " << (c|b) << endl;


	cout << "================================\n";

	cout << "&c: " << &c << endl;
	cout << "&b: " << &b << endl;

	_getch();
}