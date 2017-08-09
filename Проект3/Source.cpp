//Enum (color)


#include <iostream>
#include <conio.h>
#include <string>
#include <Windows.h>
#include <ctime>

using namespace std;

enum color{Red = red, Green, Blue};

int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));

	cout << "==============================\n";
	cout << "1 - Red\n";
	cout << "2 - Green\n";
	cout << "3 - Blue\n";

	unsigned int a;

	do{
		cout << "Enter color: ";
		cin >> a;
	} while (a == 0 || a > 3);

		switch (a)
	{
		case Red: system("color 2"); cout << "Hello"; break;
		case Green: system("color 3"); cout << "Hello"; break;
		case Blue: system("color 3"); cout << "Hello"; break;
	}

	_getch();
	return 0;
}