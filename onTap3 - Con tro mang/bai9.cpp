#include <iostream>
#include <cmath>
using namespace std; 
bool ktNTo(int n)
{
	if (n < 2) return false;
	if (n == 2) return true; 
	for (int i = 2; i < sqrt(n); i++)
		if (n%i == 0)
			return false;
	return true;
}

void nhapMT(int** p, int r, int c)
{
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cout << "p[" << i << "][" << j << "]: ";
			cin >> p[i][j];
		}
	}
}
void xuatMT(int** p, int r, int c)
{
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cout << p[i][j] << " ";
		}
		cout << endl;
	}
}
int  tinhTongSNT(int** p, int r, int c)
{
	int tong = 0;
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			if (ktNTo(p[i][j]))
				tong += p[i][j];

		}
	}
	return tong;
}
//void xuatTong(int** p, int r, int c)
//{
//	for (int i = 0; i < r; i++)
//	{
//		for (int j = 0; j < c; j++)
//		{
//			if (ktNTo(p[i][j]))
//				cout << p[i][j] << " ";
//		}
//		cout << endl;
//	}
//}
int main()
{
	int r, c;
	do
	{
		cout << "Nhap so hang: "; cin >> r;
		if (r <= 0)
			cout << "Nhap sai !!!";
	} while (r<=0);

	do
	{
		cout << "Nhap so cot: "; cin >> c;
		if (c <= 0)
			cout << "Nhap sai !!!";
	} while (c <= 0);

	int** p;
	p = new int* [r];
	for (int i = 0; i < r; i++)
		p[i] = new int[c];// cap phat mang con tro cho moi phan tu 
	nhapMT(p, r, c);
	xuatMT(p, r, c);
	//xuatTong(p, r, c); cout << endl;
	cout << "Tong cac so nguyen to trong mang la: " << tinhTongSNT(p, r, c) << endl;

	// giai phong 
	for (int i = 0; i < r; i++)
		delete[]p[i];
	delete[]p;

	system("pause");
	return 0;
}