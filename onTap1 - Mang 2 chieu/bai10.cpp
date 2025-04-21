#include <iostream>
using namespace std;
const int maxR = 100;
const int maxC = 100;
void nhapGiatri(int a[maxR][maxC], int& x, int min, int max)
{
	do {
		cout << "Nhap gia tri be hon" << max << " va lon hon " << min << ": ";
		cin >> x;
		if (x > max || x < min)
		{
			cout << "Nhap sai! Nhap lai ";
		}

	} while (x > max || x < min);
}
void nhapMang(int a[maxR][maxC], int n)
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

int main()
{
	int a[maxR][maxC];
	int n;
	nhapGiatri(a, n, 2, 10);
	int dem = 0;
	while (dem <=n*n)
	{
		for ()
	}
	xuatMang(a, n);
	system("pause");
	return 0;

}