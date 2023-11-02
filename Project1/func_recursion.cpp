/*#include <iostream>
#include <time.h>

using namespace std;

void pramauqolnik(int N, int K);
int cub(int num);
template<typename T>
T findMax(T num1, T num2);
int ispositive(int num);
int prameNum(int num);


int main() {
	pramauqolnik(4, 10);
	cout <<"\n" << cub(5);
	cout  << "\n" << findMax(8, 5);
	cout <<"\n"<< ispositive(6);
	cout << "\n" << prameNum(19);
}

void pramauqolnik(int N, int K) {
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < K; j++)
	{
			cout << "*" << " ";
		}
		cout << "\n";
	}
}

int cub(int num) {
	return num * num * num;
}

template<typename T>
T findMax(T num1, T num2) {
	if (num1 > num2) {
		return num1;
	}
	return num2;
}
int ispositive(int num) {
	if (num >= 0) {
		return true;
	}
	return false;
}

int prameNum(int num) {
	for (int i = 2; i < num; i++)
	{
		if (num % i == 0) {
			return false;
		}
	}
	return true;
}*/

/*void task1(int num, int base = 0) {
	if (num==base) {
		return;
	}
	for (int i = 0; i < num; i++)
	{
		cout << "* ";
	}
	cout << "\n";
	task1(num,++base);

}
int main() {
	task1(5);

}*/


