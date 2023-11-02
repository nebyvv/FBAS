/*#include<iostream>

using namespace std;

void swap_values(int* left, int* right) {
	int tmp = *left;
	*left = *right;
	*right = tmp;

}

void pointer_example(int* ptrVariable, int variable) {
	int* ptrInFunc = &variable;
	cout << "ptrInFunc = " << ptrInFunc << endl;
	cout << "ptrVariable = " << ptrVariable << endl;

}

int main() {
	int number1 = 5;
	int number2 = 3;
	cout << "number1 = " << number1 << endl;
	cout << "number2 = " << number2 << endl;
	cout << '\n';
	swap_values(&number1, &number2);
	swap(number1, number2);
	cout << "number1 = " << number1 << endl;
	cout << "number2 = " << number2 << endl;

	pointer_example(&number1, number1);
	cout << "&number1 = " << &number1 << endl;
}*/

//
//#include<iostream>
//
//using namespace std;
//void showArray(int* arr, int length) {
//	for (int i = 0; i < length; i++)
//	{
//		cout << *(arr + i) << ' ';
//	}
//	cout << '\n';
//}
//int main() {
//	// pointer arithmetics - arifmetika ukazateley
//
//	int a = 5;
//	int b = 3;
//	int* ptrA = &a;
//	int* ptrB = &b;
//	// Error
//	/*cout << ptrA + ptrB << endl;*/
//
//	// Error
//	/*cout << ptrA * ptrB << endl;*/
//
//	// Error
//	/*cout << ptrA / ptrB << endl;*/
//
//	/*cout << ptrA - ptrB << endl;
//	cout << ptrB - ptrA << endl;
//
//	*(ptrA + 8) = 36;
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;*/
//
//
//	int arr[] = { 346464, 35, 1, 88, 24 };
//
//	/*cout << *(arr) << endl;*/
//	cout << arr[3] << endl;
//	cout << arr << endl;
//	cout << *(arr + 3) << endl;
//
//	showArray(arr + 2, 3);
//}
//#include<iostream>
//
//using namespace std;
//void showArray(int* arr, int length) {
//	for (int i = 0; i < length; i++)
//	{
//		cout << *(arr + i) << ' ';
//	}
//	cout << '\n';
//}
//int main() {
//	// pointer arithmetics - arifmetika ukazateley
//
//	int a = 5;
//	int b = 3;
//	int* ptrA = &a;
//	int* ptrB = &b;
//	// Error
//	/*cout << ptrA + ptrB << endl;*/
//
//	// Error
//	/*cout << ptrA * ptrB << endl;*/
//
//	// Error
//	/*cout << ptrA / ptrB << endl;*/
//
//	/*cout << ptrA - ptrB << endl;
//	cout << ptrB - ptrA << endl;
//
//	*(ptrA + 8) = 36;
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;*/
//
//
//	int arr[] = { 346464, 35, 1, 88, 24 };
//
//	/*cout << *(arr) << endl;*/
//	cout << arr[3] << endl;
//	cout << arr << endl;
//	cout << *(arr + 3) << endl;
//
//	showArray(arr + 2, 3);
//}

