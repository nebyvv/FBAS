/*#include<iostream>
#include<iomanip>
#include<time.h>

using namespace std;

void fillMdArray(int arr[][3], int row, int col);
void showMdArray(int arr[][3], int row, int col);

void fillDynamicMdArray(int** arr, int row, int col);
void showDynamicMdArray(int** arr, int row, int col);



int main() {*/
#pragma region pointer to pointer
	/*int number = 47;

	int* ptrNumber = &number;
	int** ptrToptrNumber = &ptrNumber;
	int*** pppNumber = &ptrToptrNumber;


	cout << "number = " << number << endl;
	cout << "*ptrNumber = " << *ptrNumber << endl;
	cout << "**ptrToptrNumber = " << **ptrToptrNumber << endl;
	cout << "***pppNumber = " << ***pppNumber << endl;
	cout << '\n';

	cout << "&number = " << &number << endl;
	cout << "ptrNumber = " << ptrNumber << endl;
	cout << "*ptrToptrNumber = " << *ptrToptrNumber << endl;
	cout << "***pppNumber = " << **pppNumber << endl;
	cout << '\n';


	cout << "Pointer to pointer" << endl;
	cout << "&ptrNumber = " << &ptrNumber << endl;
	cout << "ptrToptrNumber = " << &ptrToptrNumber << endl;
	cout << "***pppNumber = " << &pppNumber << endl;*/
#pragma endregion

	/*srand(time(NULL));
	// Multidimension static arrays
	int mdArray[3][3] = {};

	fillMdArray(mdArray, 3, 3);
	showMdArray(mdArray, 3, 3);


	// Multidimension dynamic arrays
	
	
	
	// Multidimension dynamic arrays delete
	int** mdDynamic = new int* [3];

	//mdDynamic[0] = new int[3];
	//mdDynamic[1] = new int[3]; // 1sposob
	//mdDynamic[2] = new int[3];

	for (int i = 0; i < 3; i++)		//s forom
	{							
		mdDynamic[i] = new int[3] {};

	}
	fillDynamicMdArray(mdDynamic, 3, 3);
	cout << '\n';
	showDynamicMdArray(mdDynamic, 3, 3);

	// delete dynamic multidimension array

	for (int i = 0; i < 3; i++)
	{
		delete[] mdDynamic[i];
	}
	delete[] mdDynamic;



	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			mdDynamic[i][j] = rand() % 90 + 10;
		}

	}
	// Multidimension dynamic arrays delete
	cout << '\n';
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << left << setw(4) <<  mdDynamic[i][j]; 
		}
		cout << '\n';

	}

}

void fillMdArray(int arr[][3], int row, int col) {
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			arr[i][j] = rand() % 90 + 10;
		}

	}

}

void showMdArray(int arr[][3], int row, int col) {
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << left << setw(4) << arr[i][j];
		}
		cout << '\n';

	}

}

void fillDynamicMdArray(int** arr, int row, int col) {
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			arr[i][j] = rand() % 90 + 10;
		}

	}
}
void showDynamicMdArray(int** arr, int row, int col) {
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << left << setw(4) << arr[i][j];
		}
		cout << '\n';

	}
}*/
