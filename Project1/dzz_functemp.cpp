/*#include <iostream>
#include <time.h>

using namespace std;

template<typename add>
void add_arr(add arr[], int length);

template<typename add2>
void add_arr(add2 arr[], int length);

template<typename add3>
void add_arr(add3 arr[], int length);

template<typename add4>
void add_arr(add4 arr[], int length);

template<typename Showarr>
void ShowInfoArr(Showarr arr[], int length);

template<typename Showarr2>
void ShowInfoArr(Showarr2 arr[], int length);

template<typename Showarr3>
void ShowInfoArr(Showarr3 arr[], int length);

template<typename Showarr4>
void ShowInfoArr(Showarr4 arr[], int length);

template<typename Find>
int FindIndex(Find arr[], int length, int elem);

int main() {
	srand(time(NULL));

	const int length = 10;
	int arr[length]{};
	int elem{};
	add_arr(arr, length);
	cout << "\ndisplay the element you are looking for:";
	cin >> elem;
	FindIndex(arr, length, elem);
}

template<typename add>
void add_arr(add arr[], int length) {
	for (int i = 0; i < length; i++)
	{
		arr[i] = rand() % 11;
	}
}

template<typename add2>
void add_arr(add2 arr[], int length) {
	for (int i = 0; i < length; i++)
	{
		arr[i] = (rand() % 10001 / 100.0);
	}
}

template<typename add3>
void add_arr(add3 arr[], int length) {
	for (int i = 0; i < length; i++)
	{
		arr[i] = char(rand() % ('~' - '!' + 1) + '!')
	}
}

template<typename add4>
void add_arr(add4 arr[], int length) {
	for (int i = 0; i < length; i++)
	{
		arr[i] = rand() % 2;
	}
}


template<typename Find>
int FindIndex(Find arr[], int length, int elem) {
	for (int i = 0; i < length; i++) {
		if (arr[i] == elem) {
			cout << "\nThis element is at index{" << i << "}";
		}
	}
	return -1;
}


template<typename Showarr>
void ShowInfoArr(Showarr arr[], int  length) {
	for (int i = 0; i < length; i++)
	{
		cout << arr[i] << " ";
	}
	cout << "\n";
}

template<typename Showarr2>
void ShowInfoArr(Showarr2 arr[], int  length) {
	for (int i = 0; i < length; i++)
	{
		cout << arr[i] << " ";
	}
	cout << "\n";
}

template<typename Showarr3>
void ShowInfoArr(Showarr3 arr[], int  length) {
	for (int i = 0; i < length; i++)
	{
		cout << arr[i] << " ";
	}
	cout << "\n";
}

template<typename Showarr4>
void ShowInfoArr(Showarr4 arr[], int  length) {
	for (int i = 0; i < length; i++)
	{
		cout << arr[i] << " ";
	}
	cout << "\n";
}*/