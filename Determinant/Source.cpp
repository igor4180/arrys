#include<iostream>
using namespace std;
#define tab "\t"

void main()

{
	setlocale(LC_ALL, "");
    int const m = 3;
    int const n = 3;
    int A[m][n] = {};
	int B[m][n*2] = {};
    int a[m][n] = {};
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            A[i][j] = rand() % 10;
            B[i][j + n] = B[i][j] = A[i][j];
            cout << A[i][j] << " ";

        }
        cout << endl;
    }
    cout << endl;
    //Дублирование
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n * 2; j++)
        {
            cout << B[i][j] << " ";
        }
        cout << endl;
    }
        long int det;
        det = a[0][0] * a[1][1] * a[2][2] - a[0][0] * a[1][2] * a[2][1] - a[0][1] * a[1][0] * a[2][2] + a[0][1] * a[1][2] * a[2][0]+ a[0][2] * a[1][0] * a[2][1] - a[0][2] * a[1][1] * a[2][0];

        cout << "det = " << det << endl;
 
}