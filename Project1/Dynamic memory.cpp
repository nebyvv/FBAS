//#include <iostream>
//
//using namespace std;
//
//void fillArray(int* arr, int length);
//void showArray(int* arr, int length);
//int* addElement(int* arr, int& length, int element);
//
//int main() {
//	srand(time(NULL));
//	int length{};
//	cin >> length;
//
//#pragma region increment & decrement
//	/*int arr[5]{2, 65, 4, 12, 2};
//
//	int* ptr = arr;
//	cout << *(ptr++) << endl;	//2
//	cout << *(ptr++) << endl;	//65
//	cout << *(ptr++) << endl;	//4
//	cout << *(ptr++) << endl;	//12
//	cout << *(ptr++) << endl;	//2
//
//	cout << "\n";
//
//	cout << *(ptr) << endl;	    //2
//	cout << *(--ptr) << endl;	//12
//	cout << *(--ptr) << endl;	//4
//	cout << *(--ptr) << endl;	//65
//	cout << *(--ptr) << endl;	//2*/
//#pragma endregion
//
//#pragma region comparison
//
//	/*int a = 26;
//	int b = 66;
//	int* ptra = &a;
//	int* ptrb = &b;
//
//	//cout << boolalpha << (ptra > ptrb) << endl;
//	//cout << boolalpha << (ptra < ptrb) << endl;
//	//cout << boolalpha << (ptra <= ptrb) << endl;
//	//cout << boolalpha << (ptra >= ptrb) << endl;
//	cout << boolalpha << (ptra == ptrb) << endl;
//	cout << boolalpha << (ptra != ptrb) << endl;*/
//
//#pragma endregion
//
//#pragma region dynamic memory
//
//	/*int* number = new int(5);
//	cout << *number << endl;
//	delete number;
//	number = nullptr;
//	number = new int(68);
//	cout << *number << endl;*/
//
//#pragma endregion
//	int* dynamicArr = new int[length];
//	fillArray(dynamicArr, length);
//	showArray(dynamicArr, length);
//	//delete[] dynamicArr;
//	/*while (true) {
//		dynamicArr = new int[100000];
//		delete dynamicArr;
//	}*/
//	dynamicArr = addElement(dynamicArr, length, 36);
//	showArray(dynamicArr, length);
//
//	
//}
//
//void fillArray(int* arr, int length) {
//	for (int i = 0; i < length; i++)
//	{
//		*(arr + i) = rand() % 100 + 10;
//	}
//}
//
//void showArray(int* arr, int length) {
//	for (int i = 0; i < length; i++)
//	{
//		cout << *(arr + i) << " ";
//	}
//	cout << "\n";
//}
//
//int* addElement(int* arr, int& length, int element) {
//	int* tmp = new int[length + 1];
//	for (int i = 0; i < length; i++)
//	{
//		*(tmp + i) = *(arr + i);
//	}
//	tmp[length] = element;
//	delete[] arr;
//	arr = tmp;
//	length++;
//	return arr;
//
//}
