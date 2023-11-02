//#include <iostream>
//#include <time.h>
//#include <string.h>
//#include <conio.h>
//
//
//
//using namespace std;
//
//
//
//int main() {
	// c-string functions

	// getchar() - vozvrashayet chislovoye

	/*int code = getchar();
	cout << code << endl;*/
	/////////////////////////////////////////

	// _getch() - vozvrashayet chislovoye znachenie (ASCII) simvola vvodioqo s klaviaturi bez najatiye na enter

	/*while (true)
	{
		cout << _getch() << endl;
	}*/
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	// putchar(int code) - vivodit na konsol simvol

	//putchar(96);
	/////////////////////////////////////////////////////////////////////////////////////

	// strlen(str) - vozvrashayet dlinu strok

	// strcpy_s(str1, size, str2) - str2 kopiruet na str1

	/*char* str1 = new char[50] {"Internationalism"};
	char* str2 = new char[50] {};*/

	/*cin >> str2;
	strcpy_s(str1, 50, str2);

	cout << "str1 - " << str1 << endl;
	cout << "str1 length -" << strlen(str1) << endl;
	cout << "str2 - " << str2 << endl;
	cout << "str2 length -" << strlen(str2) << endl;*/
	/////////////////////////////////////////////////////////////////////////////////////


	// strncpy_s(str_dest, size, str_sourch, 5);

	/*strncpy_s(str2, 50, str1, 15);

	cout << "str1 - " << str1 << endl;
	cout << "str1 length -" << strlen(str1) << endl;
	cout << "str2 - " << str2 << endl;
	cout << "str2 length -" << strlen(str2) << endl; */
	////////////////////////////////////////////////////////////////////////////////////////

	// strncat_s( );

	/*strcat_s(str1, 50, " Salam");


	cout << str1 << endl;
	cout << str2 << endl;*/


	/*strncat_s(str1, 50, " Salam", 4);


	cout << str1 << endl;
	cout << str2 << endl;*/
	/////////////////////////////////

	// strcmp - sravneniye dvux strok esli pravaya cast bolshe vozvrashayet(-1), esli levaya(1), esli ravni(0)

	/*char* name = new char[50] {"Abd"};
	char* name2 = new char[50] {"Abd"};


	cout << strcmp(name, name2) << endl;*/


	// _strcmpi - sravneniye
	/*char* name3 = new char[50] {"Murad"};
	char* name4 = new char[50] {"murad"};

	cout << _strcmpi(name3, name4) << endl;
	cout << _stricmp(name3, name4) << endl;*/


	// strncmp - sravnivayet ukazennoye kolicestvo simvolov s dvumya strokami
	/*cout << strncmp("Abdullah", "Abdul", 1) << endl;
	cout << strncmp("Abdullah", "Abdul", 3) << endl;
	cout << strncmp("Abdullah", "Abdul", 6) << endl;*/


	// _strlwr_s - vozvrashayet stroku nijnem reqistrem
	// _strupr_s - vozvrashayet stroku verxnim reqistrem

	/*char* name5 = new char[50] {"Murad"};
	_strlwr_s(name5, 50);
	cout << name5 << endl;

	_strupr_s(name5, 50);
	cout << name5 << endl;*/
	////////////////////////////


	//char* str = new char[50] {"Antananarivu"};

	/**cout << strchr(str, 't') << endl; */ // vozvrashayet stroku posle "t"

	// cout << strrchr(str, 'i') << endl; v obratnom poryadke

	/*cout << strlen(str) - strlen(strchr(str, 'a')) < < endl;
	cout << strchr(str, 'a') - str << endl;*/

	
	//char* str = new char[50] {"Antananarivu"};
	//cout << strstr(str, "i") << endl; // ivu

	/*char* str = new char[50] {"Antananarivu"};

	_strrev(str); // v obratnom poryatke

	cout << str << endl;*/

	/*char* str = new char[50] {"Antananarivu"};

	_strset_s(str, 50, '_');
	cout << str << endl;  eto sroku prevrashayet na simvol '_'

	_strnset_s(str, 50, 's', 1);
	cout << str << endl;*/			//eto sroku prevrashayet na simvol 's' po ukazennomu cislu


	/*int number = atoi("16128");
	cout << number << endl; //stroku na int;*/


	/*char* numb = new char[50];
	_itoa_s(255, numb, 50, 16); //s.scisleniye
	cout << numb << endl;*/
	
	//cout << atof("25.12") + 3 << endl; // double
	
	/*char* str = new char[50];
	gets_s(str, 50); // vvodit
	cout << str << endl;

	cin.getline(str, 50); // ucitivayet probel
	cout << str << endl;

	puts(str); // vivodit*/

//}



