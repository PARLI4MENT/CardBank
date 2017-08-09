#include <iostream>
#include <conio.h>
#include <string>
#include <ctime>

using namespace std;

typedef unsigned long = ul;

long chisl(int n) {

	int chisl1(1);

for (int i(1); i <= n; i++)
	chisl1 *= i;

	return chisl1;
}

long znam(int n, int m) {

	long _znam(1);
	long _znam2(1);

	int gtemp = n - m;

	for (int i(1); i<=gtemp; i++)
		_znam *= i;
	 for (int i(1); i<=m; i++)
		_znam2 *= i;
	_znam *= _znam2;

	return(_znam);
}

int main()
{
	setlocale(LC_ALL, "Russian");

	cout << "===============================\n";

	int n, m;
	
	cout << "Enter n, m: ";
	cin >> n >> m;
	
	int result;

	if((n <= 0 || m <= 0) || n<m)
		goto err_exit;

	cout << "Числитель: " << chisl(n) << endl;
	cout << "Знаменатель: " << znam(n,m) << endl;

	result = chisl(n) / znam(n, m);

	cout << "C (n/m): " << result << endl;

	err_exit: (cout << "Error, please correct Error!");

	_getch();
	return 0;
}
