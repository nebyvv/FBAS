//#include <iostream>
//
//using namespace std;
//
//void sayWelcome(char* name, char* lastName) {
//	cout << "Welcome " << name << ' ' << lastName << '\n';
//
//}
//
//int myStrLen(const char* str) {
//	int length{};
//
//	while (str[length++] != '\0');
//	return length - 1;
//}
//
//int main() {
#pragma region char array
	// C - string - C stroki
	/*char symbol = 'H';

	char word[6]{ 'H', 'e', 'l', 'l', 'o', '\0'};*/

	/*for (int i = 0; i < 5; i++)
	{
		cout << word[i] << " ";
	}
	cout << "\n";*/

	/*cout << word << endl;

	for (int i = 0; i < 6; i++)
	{
		cout << (int)(word[i]) << " ";
	}
	cout << " ";*/

	// '\0' - null terminator
#pragma endregion

#pragma region c string - char array

	/*char word[] = "Hello";
	char word1[] = "Azerbaijan";
	cout << word << endl;
	cout << word1 << endl;*/

	//char name[20];
	//char lastName[30];
	//cout << "Enter your name: " << endl;
	//cin >> name;
	///*cout << "Enter your last name: " << endl;
	//cin >> lastName;*/

	////sayWelcome(name, lastName);

	//for (int i = 0; i < myStrLen(name); i++)
	//{
	//	cout << name[i] << ' ';
	//}
	//cout << '\n';
#pragma endregion

#pragma region c string - dynamic char array
	/*const char* newName = "Maksim";
	cout << myStrLen(newName) << endl;
	char word1[] = "Azerbaijan";
	cout << myStrLen(word1) << endl;*/

	/*char* name = new char[20];
	cin >> name;
	cout << name;*/



	////////
	/*int number{};
	cin >> number;
	const int num = number;
	int array[num]{};*/
#pragma endregion

	// C srting array
//
//	const char* weekDays[7]{
//		"Monday",
//		"Tuesday",
//		"Wednesday",
//		"Thursday",
//		"Friday",
//		"Saturday",
//		"Sunday",
//	};
//
//	for (int i = 0; i < 7; i++)
//	{
//		cout << weekDays[i] << endl;
//	}
//
//
//
//}	


//#include <iostream>
//
//using namespace std;
//
//void generationLogin(const char* name, const char* lastname, char* login);
//void generationParola(char* password);
//
//int main() {
//	char name[60];
//	char lastname[60];
//	int year;
//
//	cout << "Enter your name: ";
//	cin >> name;
//
//	cout << "Enter your lastname: ";
//	cin >> lastname;
//
//	cout << "Enter year of birth: ";
//	cin >> year;
//
//
//	char login[7];
//	char parola[9];
//
//	cout << "Enter login: " << endl;
//	cin >> login;
//
//	cout << "Enter parola: " << endl;
//	cin >> parola;
//
//}
//
//
//void generationLogin(const char* name, const char* lastname, char* login) {
//	for (int i = 0; i < 3; i++)
//	{
//		login[i] = name[i];
//		login[i] >= 'A' && login[i] <= 'Z';
//	}
//}
//
//void generationParola(char* password) {
//
//}
