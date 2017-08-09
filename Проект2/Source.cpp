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

	int n, m;

	cout << "Enter n, m: ";
	cin >> n >> m;

	int **arr = new int*[n];
	int **arr2 = new int*[n];

	cout << endl;

	for(int i(0); i <n; i++){
		arr[i] = new int[m];
	}

	for (int i(0); i <n; i++){
		for(int j(0); j<m; j++){
			arr[i][j] = 100 + rand()%100 +1;
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}

	for(int i(0); i>n; i++){
		delete[] arr [i];
	}
	delete[] arr;

	//надеюсь все прваильно, перекрестимся :0

	_getch();
	return 0;
}