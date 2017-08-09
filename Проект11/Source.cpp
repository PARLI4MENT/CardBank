//Крестики - нолики

#include <iostream>
#include <conio.h>
#include <string>
#include <ctime>
#include <fstream>
#include <cmath>

using namespace std;

char table[3][3];

void instr(){
	cout << "======Instraction======\n";
	cout << "" << endl;

	int l = 0;

	for(int i(0); i<3;i++){
		for(int j(0); j<3; j++){
			cout << "| " << l+1 << ' ';
			table[i][j] = char(49+l);
			l++;
		}
		cout << "|";
		cout << endl;
	}

	cout << "\n\n";

	/*for(int i(0); i<3; i++){
		for(int j(0); j<3; j++){
			cout << "| " << table[i][j] << " ";
		}
		cout << "|";
		cout << endl;
	}*/
}

int main()
{
	setlocale(LC_ALL, "Russian");

	instr();


	

	_getch();
	return 0;
}