//Arrays
#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5; //количество элементов массива
	int arr[n] = {3,5,8,13,21};
	//arr[2] = 123;
	//cout << "Введите элементы массива (" << n << "шт):";
	int minRand;
	int maxRand;
	cout << " Введите  минимально возможное случайное число:"; cin >> minRand;
	cout << " Введите максимально возможное случайное число:"; cin >> maxRand;
	for (int i = 0; i < n; i++)
	{
	//	cin >> arr[i];
		arr[i] = rand() % (maxRand - minRand) + minRand;
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	for (int i = n - 1; i >= 0; i--)
	{
		
		cout << arr[i] << "\t";
	}
	cout << endl; 
	
	int sum = 0;
	{
		cout << endl << "Массив = ";
		for (int i = 0; i < n; ++i)
		{
			//int ElementValue = arr[i];
			//cout << ElementValue << " ";
			cout << arr[i] << " ";
			sum = sum + arr[i];

		}
	} 	cout << endl << "Сумма элементов массива = " << sum;
	cout << "Среднее арифметическое элементов массива:" << (double) sum / n << endl;
	int min, max;
	min = max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
		if (arr[i] > max)max = arr[i];
	}
	cout << " Минимальное значение в массиве:" << min << endl;
	cout << " Максимальное значение в массиве:" << max << endl;


		
}		