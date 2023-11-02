/*#include <iostream>
#include <time.h>

using namespace std;

void Showarr(int arr[], int length);
void Showarr(double arr[], int length);
void Showarr(char arr[], int length);
void Showarr(bool arr[], int length);

void fillArr(int arr[], int length);
void fillArr(double arr[], int length);
void fillArr(char arr[], int length);
void fillArr(bool arr[], int length);
	


int main() {
	srand(time(NULL));
	const int length = 5;
	int arr[length]{};
	double arr1[length]{};
	char arr2[length]{};
	bool arr3[length]{};

	fillArr(arr, length);
	fillArr(arr1, length);
	fillArr(arr2, length);
	fillArr(arr3, length);

	Showarr(arr, length);
	Showarr(arr1, length);
	Showarr(arr2, length);
	Showarr(arr3, length);

}

void fillArr(int arr[], int length) {
	for (int i = 0; i < length; i++)
	{
		arr[i] = rand() % 101;
	}
}

void fillArr(double arr[], int length) {
	for (int i = 0; i < length; i++)
	{
		arr[i] = (rand() % 10001 / 100.0);
	}
}


void fillArr(char arr[], int length) {
	for (int i = 0; i < length; i++)
	{
		arr[i] = char(rand() % ('~' - '!' + 1) + '!');
	}
}

void fillArr(bool arr[], int length) {
	for (int i = 0; i < length; i++)
	{
		arr[i] = rand() % 2;
	}
}


void Showarr(int arr[], int length) {
	for (int i = 0; i < length; i++)
	{
		cout << arr[i] << ' ';
	}
	cout << '\n';
}

void Showarr(double arr[], int length) {
	for (int i = 0; i < length; i++)
	{
		cout << arr[i] << ' ';
	}
	cout << '\n';
}

void Showarr(char arr[], int length) {
	for (int i = 0; i < length; i++)
	{
		cout << arr[i] << ' ';
	}
	cout << '\n';
}

void Showarr(bool arr[], int length) {
	for (int i = 0; i < length; i++)
	{
		cout << arr[i] << ' ';
	}
	cout << '\n';
}*/




/*#include <iostream>

using namespace std;

template<typename T>
T add(T numb1, T numb2);

template<class T1, class T2>
T2 add(T1 numb1, T2 numb2);

template <class T>
void showArr(T arr[], int length);

int main() {
	// Template functions - Shablonniye funksii

	int arr[5]{ 5, 9, 8, 7, 2 };
	double arr2[5]{ 2.3, 36.45, 9.65, 4.12, 0.0001 };
	char arr3[5] = { 's','a','l','o','m' };

	showArr(arr, 5);
	showArr(arr2, 5);
	showArr(arr3, 5);

	cout << add(3, 56)<<endl;
	cout << add(12.8, 32.95)<<endl;
	cout << add(121.8f, 132.95f)<<endl;
	cout << add(121.95f, 132)<<endl;
}



template<typename T>
T add(T numb1, T numb2) {
	return numb1 + numb2;
}

template<class T1, class T2>
T2 add(T1 numb1, T2 numb2) {
	return numb1 + numb2;
}

template <class T>
void showArr(T arr[], int length) {
	for (int i = 0; i < length; i++)
	{
		cout << arr[i] << ' ';
	}
	cout << '\n';
}*/





