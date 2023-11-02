/*#include <iostream>
#include <string.h>
#include <conio.h>

using namespace std;

void show(int arr[][10]);

int main(){
	enum arrows {UP = 72,
	DOWN = 80,
	LEFT = 75,
	RIGHT = 77};

	int arr[10][10]{};
	int x = 5, y = 5;
	arr[x][y] = 1;
	show(arr);

	int key{};

	while (true)
	{
		key = _getch();
		if (key == 224) {
			key = _getch();
		}
		if (key == 'w' || key == 'W' || key == UP) {
			swap(arr[x][y], arr[x - 1][y]);
			x--;
		}
		else if (key == 's' || key == 'S'|| key == DOWN) {
			swap(arr[x][y], arr[x + 1][y]);
			x++;
		}
		else if (key == 'a' || key == 'A' || key == LEFT) {
			swap(arr[x][y], arr[x][y-1]);
			y--;
		}
		else if (key == 'd' || key == 'D' || key == RIGHT) {
			swap(arr[x][y], arr[x][y + 1]);
			y++;
		}
		system("cls");
		show(arr);
	}


}

void show(int arr[][10]) {
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++)
		{
			if (arr[i][j] == 0) {
				cout << unsigned char(176) << char(176);
			}
			else {
				cout << unsigned char(184) << char(184);

			}
		}
		cout << '\n';

	}
}*/