//Матрицы (умножение матриц)


#include <iostream>
#include <conio.h>
#include <string>
#include <Windows.h>
#include <ctime>



using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));

	int n,m;

	cout << "Enter n, m: ";
	cin >> n >> m;

	int **_arr1 = new int*[n];
	int **_arr2 = new int*[n];
	
	
	for(int i(0); i<n; i++){
		_arr1[i] = new int[m];
		_arr2[i] = new int[m];
	}

	//генерация случайных значений для матрицы 1
	for (int i(0); i < n; i++) {
		for (int j(0); j < m; j++) {
			_arr1[i][j] = 100 + rand() % 100 + 1;
			cout << _arr1[i][j] << "\t";
		}
		cout << "\n";
	}

	cout << "\n" << "======================================" << endl;

	//генерация случайных значений для матрицы 2
	for (int i(0); i < n; i++) {
		for (int j(0); j < m; j++) {
			_arr2[i][j] = 100 + rand() % 100 + 1;
			cout << _arr2[i][j] << "\t";
		}
		cout << "\n";
	}

	cout << "\n" << "======================================" << endl;

	//Умножение матриц
	for (int i(0); i<n; i++){
		for(int j(0);j<n; j++){
			_arr1[i][j] = _arr1[i][j] * _arr2[i][j];
			cout << _arr1[i][j] << "\t";
		}
		cout << "\n";
	}

	//уничтожение ячеек после использования
	for(int i(0); i<n; i++){
		delete[] _arr1[m];
		delete[] _arr2[m];
	}
	delete[] _arr1; delete[] _arr2;

	_getch();
	return 0;
}