#pragma region Linear search algorihm

/*#include <iostream>

using namespace std;

	int main() {
	const int length = 100;
	int arr[100]{};

	for (int i = 0; i < length; i++)
	{
		arr[i] = i + 1;
	}
	int elem{}, index = -1;
	cout << "Enter any number: " << endl;
	cin >> elem;

	for (int i = 0; i < length; i++)
{
		if (elem == arr[i]) {
			index = i;
			break;
		}
	}
	if (index != -1) {
		cout << elem << " in this arr. arr[" << index << "]" << endl;
	}
	else {
		cout << elem << " is not found" << endl;
	}
}*/
#pragma endregion

#pragma region Binary search algorithm
//#include <iostream>
//
//using namespace std;
//
//int main() {
//	const int length = 100;
//	int arr[100]{};
//
//	for (int i = 0; i < length; i++)
//	{
//		arr[i] = i + 1;
//	}
//	int elem{}, index = -1;
//	int start = 0, end = length - 1, middle{};
//	cout << "Enter any number: " << endl;
//	cin >> elem;
//
//	while (start <= end)
//	{
//		middle = (start + end) / 2;
//		if (arr[middle] == elem) {
//			index = middle;
//			break;
//		}
//		else if (arr[middle] > elem) {
//			end = middle - 1;
//		}
//		else if (arr[middle] < elem) {
//			start = middle + 1;
//		}
//	}
//
//	if (index != -1) {
//		cout << elem << " in this arr. arr[" << index << "]" << endl;
//	}
//	else {
//		cout << elem << " is not found" << endl;
//	}
//}
#pragma endregion



//#pragma region sorting algorithms
//
//#include <iostream>
//#include <time.h>
//#include<iomanip>
//using namespace std;
//
//int main() {
//	srand(time(NULL));
//	const int length = 20;
//	int arr[length]{};
//
//	for (int i = 0; i < length; i++)
//	{
//		arr[i] = rand() % 41 - 20;
//	}
//
//	// before sorting 
//	for (int i = 0; i < length; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << '\n';
//
//	int tmp = 0;
//	int count = 0;

	//Bubble sorting v1

	/*for (int i = 0; i < length; i++)
	{
		for (int  j = 0; j < length - 1; j++)
		{
			if (arr[j] > arr[j + 1]) {
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}

		}
	}*/

	//Bubble sorting v2
	/*for (int i = 0; i < length; i++)
	{
		for (int j = i; j < length - 1; j++)
		{
			if (arr[j] > arr[j + 1]) {
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}

		}
	}*/

	//Bubble sorting v3

	/*bool isSwapped = false;
	do
	{
		isSwapped = false;
		for (int i = 0; i < length - 1; i++) {
			if (arr[i] > arr[i + 1]) {
				isSwapped = true;
				tmp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = tmp;
			}
		}
	} while (isSwapped);*/


	// Insertion sorting

	/*int i{}, j{};

	for(; i < length; i++)
	{
		tmp = arr[i];
		for (j = i - 1; j >= 0 && arr[j] > tmp;j--)
		{
			count++;
			arr[j + 1] = arr[j];
		}
		arr[j + 1] = tmp;
	}*/

	// Selection sorting
	/*int min_index{}, min{};

	for (int i = 0; i < length; i++)
	{
		min_index = i;
		min = arr[min_index];
		for (int j = i + 1; j < length; j++)
		{
			if (min > arr[j]) {
				count++;
				min = arr[j];
				min_index = j;
			}			
		}
		if (min != i) {
			count++;
			arr[min_index] = arr[i];
			arr[i] = min;
		}
	}

	//after sorting

	for (int i = 0; i < length; i++)
	{
		cout << arr[i] << " ";
	}
	cout << "\n";
	cout << count;

}*/

#pragma endregion