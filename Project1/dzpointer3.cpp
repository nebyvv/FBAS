#pragma region task1
/*1. Пользуясь указателем на массив целых чисел, посчитать сумму элементов массива.
Использовать в программе арифметику указателей для продвижения по массиву, а также оператор разыменования. */

/*#include <iostream>

using namespace std;

void showArray(int* arr, int length);
int arraySumma(int* arr, int length);

int main() {
	int array[5]{ 2,5,11,9,20 };

	cout << "Massiv - ";
	showArray(array, 5);
	cout << "Array sum - ";
	cout << arraySumma(array, 5);
}

void showArray(int* arr, int length) {
	for (int i = 0; i < length; i++)
	{
		cout << *(arr + i) << " ";
	}
	cout << "\n";
}

int arraySumma(int* arr, int length) {
	int summa = 0;
	for (int i = 0; i < length; i++)
	{
		summa += *arr;
		arr++;
	}
	return summa;
}*/
#pragma endregion

#pragma region task2
/*2. Пользуясь двумя указателями на массив целых чисел, скопировать один массив в другой.
Использовать в программе арифметику указателей для продвижения по массиву, а также оператор разыменования.*/

/*#include <iostream>

using namespace std;

void copyArr(int* firstarr, int* lastarr, int length);
void showNewArray(int* arr, int length);

int main() {
	int firstArray[5]{ 3,12,7,9,1};
	int lastArray[5]{};

	copyArr(firstArray, lastArray, 5);
	cout << "New massiv - ";
	showNewArray(lastArray, 5);
}

void copyArr(int* firstarr, int* lastarr, int length) {
	for (int i = 0; i < length; i++)
	{
		*lastarr = *firstarr;
		firstarr++;
		lastarr++;
	}
}

void showNewArray(int* arr, int length) {
	for (int i = 0; i < length; i++)
	{
		cout << *(arr + i) << " ";
	}
	cout << "\n";
}*/
#pragma endregion

#pragma region task3
/*3. Пользуясь указателем на массив целых чисел, изменить порядок следования элементов массива на
противоположный. Использовать в программе арифметику указателей для продвижения по массиву,
а также оператор разыменования.*/


/*#include <iostream>

using namespace std;

void swapArr(int* arr, int length);
void showArray(int* arr, int length);

int main() {
	int array[5]{ 21,56,70,99,7 };

	swapArr(array, 5);
	showArray(array, 5);
}

void swapArr(int* arr, int length) {
	int *start = arr;
	int	*end = arr + length - 1;

	while (start < end)
	{
		int tmp = *start;
		*start = *end;
		*end = tmp;

		start++;
		end--;
	}
}

void showArray(int* arr, int length) {
	for (int i = 0; i < length; i++)
	{
		cout << *(arr + i) << " ";
	}
	cout << " ";
}*/
#pragma endregion

#pragma region task4
/*4. Пользуясь двумя указателями на массивы целых чисел, скопировать один массив в другой так,
чтобы во втором массиве элементы нахо-дились в обратном порядке.
Использовать в программе арифметику указателей для продвижения по массиву, а также оператор разыме-нования.*/

/*#include <iostream>

using namespace std;

void copyreverArr(int* firstArr, int* lastArr, int length);
void showNewArr(int* arr, int length);

int main() {
	int firstArr[5]{ 26,11,3,17,10 };
	int lastArr[5]{};

	copyreverArr(firstArr, lastArr, 5);
	showNewArr(lastArr, 5);
}

void copyreverArr(int *firstArr, int *lastArr, int length) {
	int *first = firstArr + length - 1;
	int *last = lastArr;

	for (int i = 0; i < length; i++)
	{
		*last = *first;
		first--;
		last++;
	}
}

void showNewArr(int* arr, int length) {
	for (int i = 0; i < length; i++)
	{
		cout << *(arr + i) << " ";
	}
	cout << "\n";
}*/
#pragma endregion

#pragma region task5
/*5. Пользуясь указателем на массив целых чисел, найти минимальный и максимальный элемент массива.
Использовать в программе арифметику указателей для продвижения по массиву, а также оператор разыменования.*/

/*#include <iostream>

using namespace std;

void searchMiElemandMaxElem(int* arr, int length, int &min, int &max);

int main() {
	int array[5]{ 53,34,76,89,45 };
	int min, max;
	searchMiElemandMaxElem(array, 5, min, max);
}
void searchMiElemandMaxElem(int* arr, int length, int &min, int &max) {
	min = *arr;
	max = *arr;

	for (int i = 0; i < length; i++)
	{
		if (*(arr + i) < min) {
			min = *(arr + i);
		}
		if (*(arr + i) > max) {
			max = *(arr + i);
		}
	}
	cout << min << " " << max;
}*/
#pragma endregion

