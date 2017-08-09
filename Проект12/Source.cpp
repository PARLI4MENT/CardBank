//Крестики - нолики

#include <iostream>
#include <conio.h>
#include <string>
#include <ctime>
#include <fstream>
#include <cmath>

using namespace std;

char name1[30];
char name2[30];
char table[3][3];
bool step;

void instr(){
	cout << "======Instraction======\n";
	cout << "" << endl;

	int l = 0;

	//вывод пример, без создания реального массива
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

	cout << "For step, tap number pool\n";
	cout << "For Star game, tap anykey.\n";

	_getch();
}

bool input(){
	for(int i(0); i<3; i++){
		for(int j(0); j<3; j++)
			cout << "| " << table[i][j] << ' ';
		cout << '|';
		cout << endl;
	}

	cout << "\n\n";

	if(step)
		cout << "Ходит " << name1 << " : ";
	else
		cout << "Ходит " << name2 << " : ";

	int n;
	cin >> n;

	if(n<1 || n>9)
		return false;
	int i,j;

	if (n%3 == 0){
		i = n/3-1;
		j = 2;
	}
	else{
		j = n%3-1;
		i = n/3;
	}

	if(table[i][j] == '0' || table[i][j] == 'X')
		return false;

	if (step){
		table[i][j] = 'X';
		step = false;
	}
	else{
		table[i][j] = '0';
		step = true;
	}

	return true;
}

bool win(){
	for(int i(0); i<3; i++)
		if((table[i][0] == table[i][1]) && (table[i][0] == table[i][2]))
			return true;
		else
			if((table[0][i] == table[1][i]) && (table[0][i] == table[2][i]))
				return true;
			else
				if((table[0][0] == table[1][1] && table[0][0] == table[2][2]) || (table[0][2] == table[1][1] && table[0][2] == table[2][0]))
					return true;

	return false;
}

int main()
{
	setlocale(LC_ALL, "Russian");

	instr();
	system("cls");

	//создание двух игроков
	cout << "Enter first name: ";
	cin.getline(name1, 30);
	cout << "Enter second name: ";
	cin.getline(name2, 30);

	//случайный выбор того кто ходит первый
	srand(time(NULL));
	if(rand() & 1)
		step = true;
	else step = false;

	while(!win()){
		system("cls");
		if(!input()){
			cout << "Error data, enter data again!";
			_getch();
		}
	}


	system("cls");
	_getch();
	return 0;
}