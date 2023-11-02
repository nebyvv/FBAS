/*#include <iostream>

using namespace std;

//int add(int numb1, int numb2);

// !!!!!!!!!!!!! WARNING !!!!!!!!!!!!

int add(int numb1, int numb2, int numb3 = 0);
float add(float numb1, float numb2);
double add(double numb1, double numb2);
double add(double numb1, int numb2);
double add(int numb1, double numb2);


// Po return type pereqruzok ne bivayet
//double add(int numb1, int numb2){
//	return numb1 + numb2;
//}



void showArr(int arr[], int length) {
	for (int i = 0; i < length; i++)
	{
		cout << arr[i] << ' ';
	}
	cout << '\n';
}

void showArr(char arr[], int length) {
	for (int i = 0; i < length; i++)
	{
		cout << arr[i] << ' ';
	}
	cout << '\n';
}

void showArr(double arr[], int length) {
	for (int i = 0; i < length; i++)
	{
		cout << arr[i] << ' ';
	}
	cout << '\n';
}

int main() {
	// Function overloading

	/*cout << addInt(5, 3) << endl;
	cout << addFloat(5.36, 3.8) << endl;
	cout << addDouble(5.6f, 3.78f) << endl;*/

	/*cout << add(3, 89) << endl;
	cout << add(3.56, 39.12)<< endl;
	cout << add(3.5f, 31.0f)<< endl;

	int arr[5]{ 5, 9, 8, 7, 2 };
	double arr2[5]{ 2.3, 36.45, 9.65, 4.12, 0.0001 };
	char arr3[5] = { 's','a','l','o','m' };

	showArr(arr, 5);
	showArr(arr2, 5);
	showArr(arr3, 5);*/


	/*cout << add(25.36, 8) << endl;
	cout << add(3, 78, 89) << endl;
	cout << add(25, 8.56) << endl;
	cout << add(3, 78) << endl;*/

	// 1.parameters datatype - tip dannix parametrov
	// 2.parameters position - mestopolojeniye parametrov
	// 3.parameters count - kolichestvo parametrov

//}

//int add(int numb1, int numb2) {
//	return numb1 + numb2;
//}

//double add(double numb1, double numb2) {
//	return numb1 + numb2;
//}
//
//float add(float numb1, float numb2) {
//	return numb1 + numb2;
//}
//
//double add(double numb1, int numb2) {
//	return numb1 + numb2;
//}
//
//double add(int numb1, double numb2) {
//	return numb1 + numb2;
//}
//
//int add(int numb1, int numb2, int numb3) {
//	return numb1 + numb2 + numb3;
//}
