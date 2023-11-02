#pragma region task1
/*1. Для выделения памяти
  2. Для очищения памяти	
  3. Для заполнения рандомными числами
  4. Для вывода массива
  5. Для добавления элемента по индексу
  6. Для удаления последнего элемента*/

/*#include <iostream>
#include <time.h>

using namespace std;

int* allocation(int length);
void clearMemory(int* arr);
void fillArr(int* arr, int length);
void showArr(int* arr, int length);
void addByIndex(int* &arr, int& length, int element, int index);
void pop(int* &arr, int& length);
void remove(int* arr, int& length, int index);





int main() {
	srand(time(NULL));
	int length = 5;
	int* array = allocation(5);

	fillArr(array, length);
	showArr(array, length);

	int element{};
	int addindex{};
	cout << "Enter element: " << endl;
	cin >> element;
	cout << "Enter index: \n";
	cin >> addindex;
	addByIndex(array, length, element, addindex);
	showArr(array, length);

	pop(array, length);
	cout << "\n\n";
	showArr(array, length);



	clearMemory(array);

}

int* allocation(int length) {
	int* dynamicArr = new int[length];
	return dynamicArr;
}

void clearMemory(int* arr) {
	delete[] arr;
}

void fillArr(int* arr, int length) {
	for (int i = 0; i < length; i++)
	{
		*(arr + i) = rand() % 21;
	}
}

void showArr(int* arr, int length) {
	for (int i = 0; i < length; i++)
	{
		cout << *(arr + i) << " ";
	}
	cout << " ";
}

void addByIndex(int* &arr, int& length, int element, int index) {
	int* newArr = new int[6];

	for (int i = 0; i < index; i++)
	{
		newArr[i] = arr[i];
	}

	newArr[index] = element;

	for (int i = index; i < length; i++)
	{
		newArr[i+1] = arr[i];
	}
	delete[] arr;
	arr = newArr;
	length = 6;
}

void pop(int* &arr, int& length) {
	length = length - 1;
	int* newArr = new int[length];

	for (int i = 0; i < length; i++)
	{
		newArr[i] = arr[i];
	}
	delete[] arr;
	arr = newArr;
	length = length;
}

void remove(int* arr, int& length, int index) {
	int* newArr = new int[length];

	for (int i = 0; i < index; i++)
	{

	}
}*/

#pragma endregion
