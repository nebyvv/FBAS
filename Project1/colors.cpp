//#include <iostream>
//#include <Windows.h>
//#include <iomanip>
//
//using namespace std;
//
//enum color {
//	Black,       
//	Blue,   
//	Green,
//	Aqua,     
//	Red,        
//	Purple,     
//	Yellow,     
//	White,
//	Gray,
//	Light_Blue,
//	Light_Green,
//	Light_Aqua,
//	Light_Red,
//	Light_Purple,
//	Light_Yellow,
//	Bright_White,
//	
//};
//
//int main() {
//	
//	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
//
//	/*for (size_t i = 1; i <= 256; i++)
//	{
//		SetConsoleTextAttribute(hConsole, i);
//		cout << setw(5) << i;
//
//		if ((i+1) % 16 == 0 && i != 0) {
//			cout << '\n';
//		}
//	}
//	SetConsoleTextAttribute(hConsole, 15);*/
//
//	SetConsoleTextAttribute(hConsole, ((Yellow & 0x0f) << 4) + (Red & 0x0F));
//	cout << "Hello" << endl;
//
//
//}