#include <iostream>
#include <conio.h>
#include <string>
#include <ctime>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	int n;

	cin >> n;
	cout << "\n";
	int temp = n;

	temp = (n % 10) ;
	cout << "temp: " << temp << endl;

	_getch();
	return 0;
}