/*#include <iostream>

using namespace std;

struct Point {
	int x;
	int y;
};

struct Student {
	char name[50];
	char surname[50];
	int birthyear;
	char groupname[50];
};

int getage(int year) {
	return 2023 - year;
}

void showStudent(Student student) {
	cout <<
		"Name: " << student.name << '\n' <<
		"Surname: " << student.surname << '\n' <<
		"Age: " << getage(student.birthyear) << '\n' <<
		"Group name: " << student.groupname << endl << endl;
}

int main() {
	// C Structs
	// Point x y

	//Point point1;
	//point1.x = 2;
	//point1.y = 5;

	//Point point2 = { 51,22 };

	//cout << "point1 x = " << point1.x << endl;
	//cout << "point1 y = " << point1.y << endl;

	//cout << "point2 x = " << point2.x << endl;
	//cout << "point2 y = " << point2.y << endl;

	Student nadir = { "Nadir", "Zamanov", 1980,"FBES_1_22_2" };
	//cout << nadir.name << endl;
	//cout << nadir.surname << endl;
	//cout << nadir.birthyear << endl;
	//cout << nadir.groupname << endl;

	//cout << &nadir << endl;
	//Student* ptrNadir = &nadir;
	//cout << ptrNadir->name << endl; // obrasaemsa cerez ukazatel - Nadir

	Student ruslan = { "Ruslan", "Nabiyev", 2004,"FBAS_1_23_2_ru" };

	Student students[2] = { nadir, ruslan };

	for (int i = 0; i < 2; i++)
	{
		showStudent(students[i]);
	}

}*/



////////////////////////////////////////   strcut in strcut  ///////////////////////////////////////////////////////////////////////////////////////////////////

/*#include <iostream>

using namespace std;

struct Point
{
	int x;
	int y;

};

struct Triangle
{
	Point a;
	Point b;
	Point c;
};

int main() {

	Triangle triangle = { {2,2},{5,5},{5,2} };
	cout << "a (x = " << triangle.a.x << ", y = " << triangle.a.y << ")" << endl;
	cout << "b (x = " << triangle.b.x << ", y = " << triangle.b.y << ")" << endl;
	cout << "c (x = " << triangle.c.x << ", y = " << triangle.c.y << ")" << endl;

}*/



////////////////////////////////////////   strcut alligment  ///////////////////////////////////////////////////////////////////////////////////////////////////

/*#include <iostream>

using namespace std;

struct Test
{
	char s;
	double ss;
	bool a;
	int  sss;
	bool b;
	bool sd;
};

struct Test1
{
	double s;
	int ss;
	char a;
	bool sss;
	bool b;
	bool sad;
};

struct MyStruct
{
	int a;
	MyStruct* my;
};



int main() {
	// struct alligment
	//cout << sizeof(Test) << endl; // 32byte
	//cout << sizeof(Test1) << endl; // 16byte
	//Test1* test1;
	//cout << sizeof(test1) << endl; // 8byte
	//MyStruct* mystruct;
	//cout << sizeof(mystruct) << endl; // 8byte

	MyStruct my{ 5 };
	MyStruct my1{ 6 ,&my};
	cout << my1.a << endl;
	cout << my1.my->a << endl;

	cout << sizeof(MyStruct) << endl; // 16byte
}*/