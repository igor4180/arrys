//Numerics
#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	int decimal; //десятичное число
	const int SIZE = 32; //максимально возможная разрядность
	bool bin[SIZE] = {};// разряды числа
	cout << " Введите десятичное число:"; cin >> decimal;
	int n = 0; //фактическая разрядность числа
	int i = 0;
	for (; decimal > 0; i++)
	{
		bin[i] = decimal % 2;
		decimal /= 2;
		n++;
	}
	for (int i = n - 1; i >= 0; i--)
	{
		cout << bin[i];
	}

}