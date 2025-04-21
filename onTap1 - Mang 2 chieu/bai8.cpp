#include <iostream>
using namespace std;
const int maxR = 100;
const int maxC = 100;
void nhapMANG(int a[maxR][maxC], int n) 
{
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "a[" << i << "][" << j << "]: ";
			cin >> a[i][j];
		}
	}
}
void xuatMang(int a[maxR][maxC], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << a[i][j] << "\t";
		}
		cout << endl;
	}
}
void  tong2MT(int a[maxR][maxC], int b[maxR][maxC], int c[maxR][maxC], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			c[i][j] = a[i][j] + b[i][j];
		}
	}
	xuatMang(c, n);
}
void tich2MT(int a[maxR][maxC], int b[maxR][maxC], int c[maxR][maxC], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			c[i][j] = 0;
			for (int k = 0; k < n; k++)
				c[i][j] = a[i][k] * a[k][j];
		}
	}
	xuatMang(c, n);
}
int main() {
	int a[maxR][maxC];
	int b[maxR][maxC];
	int tong[maxR][maxC];
	int tich[maxR][maxC];

	int n;
	cout << "Nhap n: ";
	cin >> n;
	nhapMANG(a, n);
	cout << "Mang A: \n";
	xuatMang(a, n);
	nhapMANG(b, n);
	cout << "Mang B: \n";
	xuatMang(b, n);
	cout << endl;
	cout << "tong hai ma tran la: \n";
	tong2MT(a, b, tong, n);
	cout << "tich hai ma tran la: \n";
	tich2MT(a, b, tich, n);

	system("pause");
	return 0;
}