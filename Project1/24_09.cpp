/*#include<iostream>

using namespace std;

void Foo(int i) {
	if (i == 10) return;

	cout << "Hello" << endl;
	Foo(++i);
}



long long Factorial(int num) {
	if (num == 0 || num == 1) return 1;

	long long fact = 1;
	for (int i = 2; i < num; i++)
	{
		fact *= i;
	}
	return fact;
}

long long FactorialR(int number) {
	if (number == 0) return 1;
	// n! = n * (n-1)!
	return number * FactorialR(number - 1);
}

int main() {
#pragma region Recursion


#pragma endregion

	cout << FactorialR(5) << endl;
	cout << FactorialR(6) << endl;
	//Foo(1);
	// Call stack

}*/