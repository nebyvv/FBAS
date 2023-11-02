#pragma region task1
/*1.  Создать динамический "рванный массив" в виде треугольника и заполнить рандомными числами.
все операции (создание, заполнение, вывод) должны быть отдельными функциями. Пример:
35
65 32
22 69 88
33 28 45 69*/

/*#include<iostream>
#include<time.h>

using namespace std;

int** TriangleArray(int rows);
void fillArray(int** arr, int rows);
void showArray(int** arr, int rows);
void deleteArr(int** arr, int rows);


int main() {
	srand(time(NULL));
	int rows = 4;
	int** arrtriangle = TriangleArray(rows);

	fillArray(arrtriangle, rows);
	showArray(arrtriangle, rows);
	deleteArr(arrtriangle, rows);

}

int** TriangleArray(int rows) {
	int** triangle1 = new int* [rows];

	for (int i = 0; i < rows; i++) {
		triangle1[i] = new int[i + 1];
	}
	return triangle1;
}

void fillArray(int** arr, int rows) {
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j <= i; j++) {
			arr[i][j] = rand() % 90 + 10;
		}
	}
}

void showArray(int** arr, int rows) {
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << arr[i][j] << ' ';
		}
		cout << '\n';
	}
}

void deleteArr(int** arr, int rows) {
	for (int i = 0; i < rows; i++)
	{ 
		delete[] arr[i];
	}
	delete[] arr;
}*/


#pragma endregion

#pragma region task2

/*2. Создать динамический "рванный массив и заполнить рандомными числами.
все операции (создание, заполнение, вывод) должны быть отдельными функциями
размеры мвссива:  2, 7, 3, 5, 1, 6, 9 , 11, 2
как на рисунке
*/

/*#include<iostream>
#include<time.h>

using namespace std;

int** TriangleArray(int rows, int* length);
void fillArray(int** arr, int rows, int* length);
void showArray(int** arr, int rows, int* length);
void deleteArr(int** arr, int rows);

int main() {
	srand(time(NULL));
	int length[] = { 2, 7, 3, 5, 1, 6, 9 , 11, 2 };
	int rows = 9;
	int** arrtriangle = TriangleArray(rows,length);

	fillArray(arrtriangle, rows, length);
	showArray(arrtriangle, rows,length);
	deleteArr(arrtriangle, rows);

}

int** TriangleArray(int rows, int* length) {

	int** triangle1 = new int* [rows];

	for (int i = 0; i < rows; i++) {
		triangle1[i] = new int[length[i]];
	}
	return triangle1;
}

void fillArray(int** arr, int rows, int* length) {
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < length[i]; j++) {
			arr[i][j] = rand() % 90 + 10;
		}
	}
}

void showArray(int** arr, int rows, int* length) {
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < length[i]; j++)
		{
			cout << arr[i][j] << ' ';
		}
		cout << '\n';
	}
}

void deleteArr(int** arr, int rows) {
	for (int i = 0; i < rows; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;
}*/

#pragma endregion



