#include <iostream>
#include <conio.h>
#include <string>
#include <ctime>
#include <fstream>


using namespace std;

double mod_numb(int n)
{
	if (n < 0) {
		n *= -1;
	}
	
	return n;
}

int main()
{
	setlocale(LC_ALL, "Russian");

	cout << "Enter number of ABS: ";
	int n;
	cin >> n;

	cout << "=========================\n";
	cout << "Number of: " << mod_numb(n) << endl;

	_getch();
	return 0;
}