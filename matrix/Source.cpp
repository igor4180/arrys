#include<iostream>
using namespace std;
#define tab "\t"
#define delimiter "\n-----------------------\n"
//#define ADDITION

void main()
{
	setlocale(LC_ALL, "Russian");
	const int m = 3;
	const int n = 3;
	int A[m][n] = {};
	int B[m][n] = {};
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			A[i][j] = rand() % 10;
			B[i][j] = rand() % 10;
		}
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << A[i][j] << tab;
		}
		cout << endl;
	}
	cout << delimiter << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << B[i][j] << tab;

		}
		cout << endl;
	}
	cout << delimiter;
#ifdef ADDITION//Сложение матриц:
	int C[m][n] = {};
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			C[i][j] = A[i][j] + B[i][j];
		}
	}
#endif
	int C[m][n] = {};
	for (int i = 0; i < m; i++)
	{
		//i - выбирает строку матрицы "A"
		for (int j = 0; j < n; j++)
		{
		  //j - выбирает столбец матрицы "B"
			for (int k = 0; k < n; k++)
			{
				//k перебирает элементы выбранной строки матрицы "ФЭ и выбранного столбца матрицы "B"
				C[i][j] += A[i][k] * B[k][j];
			}

		}
	}
	//Вывод результата на экран:
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
		cout << C[i][j] << tab;
		}
	cout << endl;
	}
}
