#include <iostream>
#include <conio.h>
#include <string>
#include <ctime>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));

	int n[10][2];

	for(int i(0); i< 10; i++){
		for(int j(0); j<2; j++){
			if(j == 0){
				n[i][j] = rand();
				cout << n[i][j] << "\t";
			}
			else{
				n[i][j] = rand() & 1;
				cout << n[i][j] << "\t";
			}
		}
		cout << endl;
	}

	_getch();
	return 0;
}