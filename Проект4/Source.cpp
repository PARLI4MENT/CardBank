#include <iostream>
#include <conio.h>
#include <string>
#include <ctime>

using namespace std;

enum color{ Green = 1, Blue, Red, TREE};


int main()
{
	setlocale(LC_ALL, "Russian");

	cout << "=================================\n";

	unsigned int a;

	cout << "1 - Green\n";
	cout << "2 - Blue\n";
	cout << "3 - Red\n";

	do
	{	
		cout << "Enter color: ";
		cin >> a;
	} while (a == 0 || a > 4);

	color c = (color)a;

	switch (a) {
	case Green: system("color 2"); break;
	case Blue: system("color 1"); break;
	case Red: system("color 3"); break;
	case TREE: system("tree"); break;
	}
	_getch();
	return 0;
}