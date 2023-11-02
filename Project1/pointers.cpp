/*#include <iostream>

using namespace std;

int main() {*/
	//pointers - ukazateli
	//Ukazateli eto tip kotoriy mojet v sebe xranit adres pere,ennix

#pragma region Pointer
	/*int number = 25;


	int* ptrNumber = &number;  // * - pointer - ukazatel

	cout << "&number = " << &number << endl;  // & - adress of - vzyatiye adresa
	cout <<"ptrNumber = "<< & number << endl;  //
	cout <<"number = "<< number << endl;  //
	cout << "*ptrNumber = " << *ptrNumber << endl << endl;  // * - dereference - razimenovaniye

	*ptrNumber = 12;
	cout << "number = " << number << endl;  //

	double variable = 265.115;
	double* ptrVariable = &variable;

	cout << ptrVariable << endl;*/
#pragma endregion

#pragma region Pointer size
	/*int numb = 15;
	int* ptrNumb = &numb;

	float value = 31.5;
	float* ptrValue = &value;

	char letter = 'b';
	char* ptrLetter = &letter;

	double num = 32.65;
	double* ptrNum = &num;

	bool check = true;
	bool* ptrCheck = &check;


	cout << "int - \t\t" << sizeof(numb) << " byte" << endl;
	cout << "float - \t" << sizeof(value) << " byte" << endl;
	cout << "char - \t\t" << sizeof(letter) << " byte" << endl;
	cout << "double - \t" << sizeof(num) << " byte" << endl;
	cout << "bool - \t\t" << sizeof(check) << " byte" << endl << endl;


	cout << "int* - \t\t" << sizeof(ptrNumb) << " byte" << endl;
	cout << "float* - \t" << sizeof(ptrValue) << " byte" << endl;
	cout << "char* - \t" << sizeof(ptrLetter) << " byte" << endl;
	cout << "double* - \t" << sizeof(ptrNum) << " byte" << endl;
	cout << "bool* - \t" << sizeof(ptrCheck) << " byte" << endl;*/

#pragma endregion

	/*int number1 = 65, number2 = 33;
	int* ptrNumber = &number1;
	cout << "ptrNumber = " << ptrNumber << endl;
	cout << "&number1 = " << &number1 << endl;
	cout << "&number2 = " << &number2 << endl;
	ptrNumber = &number2;
	cout << "ptrNumber = " << ptrNumber << endl;

	int* ptrOther = ptrNumber;
	cout << "ptrOther = " << ptrOther << endl;*/


#pragma region pointer to const
	//const float PI = 3.14f;
	//const float E = 2.7182818f;
	// pointer to const - ukazatel na konstantu
	//const float* ptrPI = &PI;
	//cout << ptrPI << endl;
	//cout << &PI << endl;
	//ptrPI = &E;
	//cout << ptrPI << endl;
#pragma endregion

#pragma region pointer default value
	// pointer default value - nullptr
	// null pointer

	/*int* ptrInt = nullptr;
	double* ptrDouble = nullptr;
	const float* ptrConstFloat{};
	cout << sizeof(ptrConstFloat) << endl; // 8
	*/
#pragma endregion

	//task1
	/*int num1{}, num2{};
	cin >> num1 >> num2;

	int* ptrNum1 = &num1;
	int* ptrNum2 = &num2;

	if (*ptrNum1 > *ptrNum2) {
		cout << *ptrNum1;
	}
	else {
		cout << *ptrNum2;
	}*/

	//task2
	/*int num{};
	cin >> num;
	
	int* ptrNum = &num;

	if (*ptrNum < 0) {
		cout << "-" << endl;
	}
	else {
		cout << "+" << endl;
	}*/

	//task3
	
	/*int num1{}, num2{}, num3{};
	cin >> num1 >> num2;
	cout << "num1 - " << num1 << endl;
	cout << "num2 - " << num2 << endl << endl;

	int* ptrNum1 = &num1;
	int* ptrNum2 = &num2;
	int* ptrNum3 = &num3;

	*ptrNum3 = num1;
	*ptrNum1 = num2;
	*ptrNum2 = num3;

	cout << "num1 - " << num1 << endl;
	cout << "num2 - " << num2 << endl;
	

}*/