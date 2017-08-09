//Модуль числа

#include <iostream>
#include <conio.h>
#include <string>
#include <ctime>
#include <fstream>
#include <cmath>


using namespace std;

double _mod(double a){

	return a < 0.0 ? a : -a;
}

int main()
{
	setlocale(LC_ALL, "Russian");

	cout << "Enter number: ";
	double n;
	cin >> n;

	cout << "Mod number is: " << _mod(n) << endl;	

	_getch();
	return 0;
}