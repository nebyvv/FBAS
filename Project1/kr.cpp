/*#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void fillArr(int*** arr, int row, int col, int cl);
void showArr(int*** arr, int row, int col, int cl);
void clearArr(int*** arr, int row, int col, int cl);

int main() {
	srand(time(NULL));

	int*** mdDyanmic = new int** [3] {};
	for (int i = 0; i < 3; i++)
	{
		mdDyanmic[i] = new int* [3] {};
		for (int j = 0; j < 3; j++)
		{
			mdDyanmic[i][j] = new int[3] {};
		}
	}

	fillArr(mdDyanmic, 3, 3, 3);
	showArr(mdDyanmic, 3, 3, 3);
	clearArr(mdDyanmic, 3, 3, 3);
	
}

void fillArr(int*** arr, int row, int col, int cl) {
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			for (int v = 0; v < cl; v++) {
				arr[i][j][v] = rand() % 90 + 10;
			}
		}
	}
}

void showArr(int*** arr, int row, int col, int cl) {
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			for (int v = 0; v < cl; v++) {
				cout << left << setw(4) << arr[i][j][v];
			}
			cout << '\t';
		}
		cout << '\n';

	}
}

void clearArr(int*** arr, int row, int col, int cl) {
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++) {
			delete[] arr[i][j];
		}
		delete[] arr[i];
	}
	delete[] arr;
}*/


//////////////////////////////////////////////////


/*#include<iostream>
#include<iomanip>

using namespace std;

int main() {
	int** jaggedArray = new int* [4];
	jaggedArray[0] = new int[1];
	jaggedArray[1] = new int[5];
	jaggedArray[2] = new int[2];
	jaggedArray[3] = new int[3];

	jaggedArray[0][0] = 1;

	jaggedArray[1][0] = 3;
	jaggedArray[1][1] = 6;
	jaggedArray[1][2] = 5;
	jaggedArray[1][3] = 8;
	jaggedArray[1][4] = 5;

	jaggedArray[2][0] = 3;
	jaggedArray[2][1] = 2;

	jaggedArray[3][0] = 1;
	jaggedArray[3][1] = 5;
	jaggedArray[3][2] = 6;

	cout << jaggedArray[0][0] << endl;
	cout << jaggedArray[1][2] << endl;
}*/










//#include <iostream>
//
//using namespace std;
//
//char uPPER(char* str);
//char lower(char* str);
//char Space(char* str);
//
//int main() {
//	char str;
//
//
//	while (true)
//	{
//		cout << "Enter: " << endl;
//		cin >> str;
//		if (str == '0') {
//			break;
//		}
//		str = uPPER(&str);
//		str = lower(&str);
//		str = Space(&str);
//		cout << str << endl;
//	}
//}
//
//char uPPER(char* str) {
//	if (*str >= 'a' && *str <= 'z') {
//		*str = *str - (97 - 65);
//	}
//	return *str;
//}
//
//char lower(char* str) {
//	if (*str >= 'A' && *str <= 'Z') {
//		*str = *str - (65 - 97);
//	}
//	return *str;
//}
//
//char Space(char* str) {
//	if (*str >= 48 && *str <= 57) {
//		return ' ';
//	}
//	return *str;
//}
//

/*#include <iostream>
#include<conio.h>
#include<string.h>

int main() {
	char simvol{};

	while (true)
	{
		simvol = _getch();
		if (simvol == '0') {
			break;
		}
		else if (simvol >= 'a' && simvol <= 'z') {
			putchar(simvol - 32);
		}
		else if (simvol >= 'A' && simvol <= 'Z') {
			putchar(simvol + 32);
		}
		else if (simvol >= '0' && simvol <= '9') {
			putchar(' ');
		}
	}
}*/