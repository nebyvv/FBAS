//#include <iostream>
//#include <time.h>
//
//using namespace std;
//
//int add(int left, int right);
//
//int subtract(int left, int right);
//
//int multiple(int left, int right);
//
//int divide(int left, int right);
//
//void foo();
//
//int calculator(int left, int right, int(*operation)(int, int));
//
//
//void fillArray(int* arr, int length);
//void showArray(int* arr, int length);
//
//void selectionSortingAsc(int* arr, int length);
//
//void selectionSortingDesc(int* arr, int length);
//
//void selectionSorting(int* arr, int length, bool asc = true);
//
//template <class T>
//void selectionSorting(T* arr, int length, bool(*func)(T, T));
//
//template <class T>
//bool min(T left, T right);
//
//template <class T>
//bool max(T left, T right);
//
//bool minStr(const char* left, const char* right);
//
//bool maxStr(const char* left, const char* right);
//
//int main() {
//	// pointer to function
//	/*cout << add << endl;
//	int(*funcPtr)(int, int) = add;
//	cout << add(25, 65) << endl;
//	cout << funcPtr(25, 65) << endl;*/
//#pragma region Calculator with pointer to function
//	/*int(*calc)(int, int) = nullptr;
//	int leftValue{}, rightValue{};
//	short menuItem{};
//
//
//	cout << "Enter first value:\n";
//	cin >> leftValue;
//
//	cout << "Enter second value:\n";
//	cin >> rightValue;
//
//	enum operations {
//		ADD = 1,
//		SUBTRACT,
//		MULTIPLY,
//		DIVIDE
//	};
//	cout << "Choice operation:\n";
//	cout << "1. Add:\n";
//	cout << "2. Subtract:\n";
//	cout << "3. Multiply:\n";
//	cout << "4. Divide:\n";
//
//	cin >> menuItem;
//	switch (menuItem)
//	{
//	case ADD:
//		calc = add;
//		break;
//	case SUBTRACT:
//		calc = subtract;
//		break;
//	case MULTIPLY:
//		calc = multiple;
//		break;
//	case DIVIDE:
//		calc = divide;
//		break;
//	default:
//		cout << "Incorrect menu item" << endl;
//		break;
//	}
//
//	if (calc != nullptr) {
//		cout << "Result = " << calc(leftValue, rightValue);
//	}*/
//#pragma endregion
//
//#pragma region pointer to function as parameter
//	/*cout << calculator(6, 3, add) << endl;
//	cout << calculator(6, 3, divide) << endl;*/
//#pragma endregion
//	
//	srand(time(NULL));
//
//	/*const int length = 20;
//	int arr[length]{};
//
//	fillArray(arr, length);
//	showArray(arr, length);
//	selectionSortingAsc(arr, length);
//	showArray(arr, length);
//	selectionSortingDesc(arr, length);
//	showArray(arr, length);*/
//
//	const char* strings[]{
//		"Elbey",
//		"Laman",
//		"Jamal",
//		"Ali",
//		"Faiq",
//		"Emil",
//		"Ruslan",
//		"Murad",
//		"Xalid",
//		"Yusif"
//	};
//
//	for (size_t i = 0; i < 10; i++)
//	{
//		cout << strings[i] << endl;
//	}
//}
//
//
//
//int add(int left, int right) {
//	return left + right;
//}
//
//int subtract(int left, int right) {
//	return left - right;
//}
//
//int multiple(int left, int right) {
//	return left * right;
//}
//
//int divide(int left, int right) {
//	return left / right;
//}
//
//
//void foo() {
//	cout << "Hello" << endl;
//}
//
//int calculator(int left, int right, int(*operation)(int, int)) {
//	return operation(left, right);
//}
//
//void selectionSortingAsc(int* arr, int length) {
//	int min_ind{}, min{};
//
//	for (size_t i = 0; i < length; i++)
//	{
//		min_ind = i;
//		min = arr[i];
//		for (size_t j = i + 1; j < length; j++)
//		{
//			if (min > arr[j]) {
//				min = arr[j];
//				min_ind = j;
//			}
//		}
//		if (min_ind != i) {
//			arr[min_ind] = arr[i];
//			arr[i] = min;
//		}
//	}
//}
//
//
//void selectionSortingDesc(int* arr, int length) {
//	int max_ind{}, max{};
//
//	for (size_t i = 0; i < length; i++)
//	{
//		max_ind = i;
//		max = arr[i];
//		for (size_t j = i + 1; j < length; j++)
//		{
//			if (max < arr[j]) {
//				max = arr[j];
//				max_ind = j;
//			}
//		}
//		if (max_ind != i) {
//			arr[max_ind] = arr[i];
//			arr[i] = max;
//		}
//	}
//	
//}
//
//void fillArray(int* arr, int length) {
//	for (size_t i = 0; i < length; i++)
//	{
//		arr[i] = rand() % 90 + 10;
//	}
//}
//
//void showArray(int* arr, int length) {
//	for (size_t i = 0; i < length; i++)
//	{
//		cout << arr[i] << ' ';
//	}
//	cout << '\n';
//}
//
//void selectionSorting(int* arr, int length, bool asc = true) {
//	int min_ind{}, min{};
//
//	for (size_t i = 0; i < length; i++)
//	{
//		min_ind = i;
//		min = arr[i];
//		for (size_t j = i + 1; j < length; j++)
//		{
//			if (asc) {
//				if (min > arr[j]) {
//					min = arr[j];
//					min_ind = j;
//				}
//			}
//			else {
//				if (min < arr[j]) {
//					min = arr[j];
//					min_ind = j;
//				}
//			}
//		}
//		if (min_ind != i) {
//			arr[min_ind] = arr[i];
//			arr[i] = min;
//		}
//	}
//}
//
//
//template <class T>
//void selectionSorting(T* arr, int length, bool(*func)(T, T)) {
//
//	int min_ind{};
//	T min{};
//
//	for (size_t i = 0; i < length; i++)
//	{
//		min_ind = i;
//		min = arr[i];
//		for (size_t j = i + 1; j < length; j++)
//		{
//			if (func(min, arr[j])) {
//				min = arr[j];
//				min_ind = j;
//			}
//		}
//		if (min_ind != i) {
//			arr[min_ind] = arr[i];
//			arr[i] = min;
//		}
//	}
//}
//
//
//template <class T>
//bool min(T left, T right) {
//	return left < right;
//}
//
//template <class T>
//bool max(T left, T right) {
//	return left > right;
//}
//
//
//bool minStr(const char* left, const char* right) {
//	if (strcmp(left, right) == 1) {
//		return true;
//	}
//	return false;
//}
//
//bool maxStr(const char* left, const char* right) {
//	if (strcmp(left, right) == -1) {
//		return true;
//	}
//	return false;
//}





////////////////////////////////////////// Union

//#include <iostream>
//
//using namespace std;
//
//struct {
//	double var1;
//	int var2;
//	bool var3;
//} Variables;
//
//union Var{
//	double var1;
//	int var2;
//	bool var3;
//};
//
//struct Human {
//	char name[20];
//	char surname[20];
//	int age;
//};
//
//struct Animal {
//	char Klichka[10];
//	int age;
//};
//
//union Other {
//	Human human;
//	Animal animal;
//	bool check;
//};
//
//int main() {
//
//	/*Var variables;
//	variables.var1 = 25.6;
//	cout << variables.var1 << endl;
//
//	variables.var3 = true;
//	cout << boolalpha<< variables.var3 << endl;
//
//	variables.var2 = 25;
//	cout << variables.var2 << endl;
//	cout << variables.var2 << endl;*/
//
//	Other var;
//	var.check = true;
//
//	cout << var.check << endl;
//	cin >> var.human.name;
//	cin >> var.human.surname;
//	var.human.age = 42;
//	cout << var.human.name << endl;
//	cout << var.animal.Klichka << endl;
//	cout << var.animal.age << endl;
//}

