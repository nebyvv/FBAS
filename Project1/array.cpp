/*#include<iostream>
#include<time.h>
#include<iomanip>



using namespace std;



int main() {
  srand(time(NULL));*/
  // Multidimension arrays
  //const int rows = 3;
  //const int cols = 3;
  //int multiArr[rows][cols]{
  //  {2, 9, 36},
  //  {37, 11, 5},
  //  {23, 8, 7}
  //};
  //// iomanip: setw(), rigth, left, setfill()
  //for (int i = 0; i < rows; i++)
  //{
  //  for (int j = 0; j < cols; j++)
  //  {
  //    cout<<setw(3)<< left << multiArr[i][j]<<' ';
  //  }
  //  cout << '\n';
  //}





/*int mdArr[3][3]{5, 9, 87, 15, 63, 2, 51, 9, 13};
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      cout<<setw(3)<< left << mdArr[i][j]<<' ';
    }
    cout << '\n';
  }*/



  /*cout << mdArr[1][0] << endl;*/
  /*cout << mdArr[0][3] << endl;
  cout << mdArr[2][-3] << endl;*/



	/*int arr[][3]{2, 8, 3, 18, 36, 7};



	  for (int i = 0; i < 2; i++)
	  {
	    for (int j = 0; j < 3; j++)
	    {
	      cout << setw(3) << left << arr[i][j] << ' ';
	    }
	    cout << '\n';
	  }*/



	 /*int myArr[3][3]{};



	    for (int i = 0; i < 3; i++)
	    {
	      for (int j = 0; j < 3; j++)
	      {
	        myArr[i][j] = rand() % 90 + 10;
	      }
	    }
	    for (int i = 0; i < 3; i++)
	    {
	      for (int j = 0; j < 3; j++)
	      {
	        cout << setw(3) << left << myArr[i][j];
	      }
	      cout << '\n';
	    }



	    cout << myArr[0][1];*/



	/*int arr[5]{ 2, 69, 2, 36, 12 };



		  for (int i : arr) {
		    cout << i << ' ';
		  }
		  cout << '\n';*/





#pragma region task1



	/*1. Дан двумерный массив 5х5. Массив заполняется случайными числами от 0 до 20. Вычислить сумму всех элементов массива.*/



		 /*int arr[5][5]{};



		    int summa = 0;



		    for (int i = 0; i < 5; i++) {
		      for (int j = 0; j < 5; j++)
		      {
		        arr[i][j] = rand() % 21;
		      }



		    }
		    for (int i = 0; i < 5; i++) {
		      for (int j = 0; j < 5; j++) {
		        summa += arr[i][j] << ' ';
		      }
		    }





		    for (int i = 0; i < 5; i++) {
		      for (int j = 0; j < 5; j++) {
		        cout << setw(3) << left << arr[i][j] << ' ';
		      }
		      cout << '\n';
		    }
		    cout << "\n";
		    cout << summa << endl;



		  }*/
#pragma endregion



#pragma region task4
/*4. Дан двумерный массив 5х5. Массив заполняется случайными числами от -5 до 5. Найдите количество отрицательных, положительных и нулевых элементов.*/



		 /*int arr[5][5]{};



		 int count_negative = 0, count_positive = 0, count_zero = 0;





		    for (int i = 0; i < 5; i++) {
		      for (int j = 0; j < 5; j++) {



		        arr[i][j] = rand() % 11 - 5;
		      }
		    }



		    for (int i = 0; i < 5; i++) {
		      for (int j = 0; j < 5; j++) {



		        if (arr[i][j] > 0) {
		          count_positive++;
		        }
		        else if (arr[i][j] < 0) {
		          count_negative++;
		        }
		        else if (arr[i][j] == 0) {
		          count_zero++;
		        }
		      }
		    }



		    for (int i = 0; i < 5; i++) {
		      for (int j = 0; j < 5; j++) {
		        cout << setw(3) << left << arr[i][j] << ' ';
		      }
		      cout << '\n';
		    }



		    cout << '\n';
		    cout << "positive - " << count_positive << endl;
		    cout << '\n';
		    cout << "negative - " << count_negative << endl;
		    cout << '\n';
		    cout << "zero - " << count_zero << endl;
		  }*/
#pragma endregion



#pragma region task3
/*3. Дан двумерный массив 5X5. Массив заполняется случайными числами от -100 до 100. Найдите минимальный и максимальный элементы.
		  Выведите индексы минимального и максимального элемента и значенияю*/



	/*int arr[5][5]{};



	int max = arr[0][0];
	int min = arr[0][0];
		 int indexImax = -1;
		 int indexJmax = -1;
		  int indexImin = -1;
		 int indexJmin = -1;

		    for (int i = 0; i < 5; i++) {
		      for (int j = 0; j < 5; j++) {



		        arr[i][j] = rand() % 201 - 100;
		      }
		    }



		    for (int i = 0; i < 5; i++) {
		      for (int j = 0; j < 5; j++) {


		        if (arr[i][j] > max) {
		          max = arr[i][j];
		          indexImax = i;
		          indexJmax = j;



		        }
		        else if (arr[i][j] < min){
		          min = arr[i][j];
		          indexImin = i;
		          indexJmin = j;
		        }

		      }
		    }
		    for (int i = 0; i < 5; i++) {
		      for (int j = 0; j < 5; j++) {
		        cout << setw(3) << left << arr[i][j] << ' ';
		      }
		      cout << '\n';
		    }



		    cout << '\n';
		    cout << "Max number [" << indexImax << "][" << indexJmax << "] - " << max << endl;
		    cout << "Min number [" << indexImin << "][" << indexJmin << "] - " << min << endl;



		  }*/







#pragma endregion







//#include<iostream>
//#include<time.h>
//#include<iomanip>
//
//
//
//using namespace std;
//
//
//
//int main() {
//	srand(time(NULL));
//	
//	int arr1[4][4]{};
//
//	/*for (int i = 0; i < 4; i++) {
//		for (int j = 0; j < 4; j++) {
//			arr1[i][j] = (i + 1) * 10 + (j + 1);
//			cout << arr1[i][j] << ' ';
//		
//		
//		}
//		cout << "\n";
//	}*/
//	//task2
//	for (int i = 0; i < 4; i++) {
//		for (int j = 0; j < 4; j++) {
//			
//			if (j % 2 != 0) {
//				arr1[i][j] = 1;
//			}
//			
//			cout << arr1[i][j] << ' ';
//
//		}
//		cout << "\n";
//	}
//}




//int F(int x, int y) {
//	int i, j;
//	for (i = 1; i <= x; i++)
//	{
//		for (j = 1; j <= y; j++)
//		{
//			cout << "*";
//		}
//		cout << "\n";
//	}return(x, y);
//}
//void main()
//{
//	int K, N;
//	cout << " ";
//	cin >> N >> K;
//	F(K, N);
//}
