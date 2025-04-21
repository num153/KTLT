#include <iostream>
using namespace std;
const int max = 100;
void nhapmang(int a[100][100], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "a[" << i << "][" << j << ": ";
			cin >> a[i][j];
		}
	}
}
void xuatMang(int a[100][100], int n)
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
int tongCheoChinh(int a[100][100], int n)
{
	int tong = 0;
	for (int i = 0; i < n; i++) {
		tong += a[i][i];
	}
	return tong;

}
int tongCheophu(int a[100][100], int n)
{
	int tong = 0;
	for (int i = 0; i < n; i++)
	{
		tong += a[i][n - 1 - i];

	}
	return tong ;
}
int tongBien(int a[100][100], int n)
{
	int tong = 0; 
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i == 0 || j == 0 || i == n - 1 || j == n - 1)
				tong += a[i][j];
		}
	}
	return tong;
}
int tongRuot(int a[100][100], int n)
{
	int tong = 0; 
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i != 0 && j != 0 && i != n - 1 && j != n - 1)
				tong += a[i][j];
		}
	}
	return tong;

}
int main()
{
	int a[100][100]; 
	int n;
	//int r, int c;
	cout << "Nhap n: "; cin >> n;
	nhapmang(a, n);
	xuatMang(a, n);
	cout << "Tong duong cheo chinh la: " << tongCheoChinh(a, n) << endl;
	cout << "Tong duong cheo phu la: " << tongCheophu(a, n) << endl;
	cout << "Tong bien la: " << tongBien(a, n) << endl;
	cout << "Tong ruot la: " << tongRuot(a, n) << endl;

	system("pause");
	return 0;
}