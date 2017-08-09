//Абсолютная / относительная величина

#include <iostream>
#include <conio.h>
#include <string>
#include <ctime>
#include <fstream>
#include <cmath>


using namespace std;

long long int _func(int m, int n){
	int l = n-m;
	unsigned long long temp = 1;

	if(l <= 0){
		return l;
	}
	else{
		for(int i(l+1); i<=n; i++){
			temp *= i;
		}
		return temp;
	}

}

int main()
{
	setlocale(LC_ALL, "Russian");

	int m, n;
	system("color a");
	cout << "Enter obshee kol-vo: ";
	cin >> n;
	cout << "Enter kol-vo var: ";
	cin >> m;

	cout << "Result: " << _func(m,n) << endl;

	_getch();
	return 0;
}