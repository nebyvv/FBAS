#pragma region task1
//функция определяет длину строки.
/*#include<iostream>
using namespace std;

int myStrLen(const char* str) {
	int length = 0;
	while (*str !='\0')
	{
		length++;
		str++;
	}
	return length;
}
int main() {
	int length{};
	const char* str = "ruslan nabiyev#";
	length = myStrLen(str);
	cout << length << endl;
}*/
#pragma endregion
#pragma region task2
//функция копирует str2 в str1 и возвращает указатель на str1.
//Функция возвращает указатель на первую строку (str1)

/*#include<iostream>

using namespace std;

char* myStrCpy(char* str1, const char* str2) {
	char* mystr = str1;

	while (*str2) {
		*str1 = *str2;
		str1++;
		str2++;
	}
	//*str1 = '\0';

	return mystr;
}

int main() {
	const char* str = "It step academy";
	char destination[50];

	char* str1 = myStrCpy(destination, str);
	cout << "str1 - " << str1 << endl;
}*/
#pragma endregion
