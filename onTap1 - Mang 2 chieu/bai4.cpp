#include <iostream>
using namespace std;
const int maxR = 100;
const int  maxC = 100;
void ktGiatri(int a[maxR][maxC], int& x, int min, int max)
{
	do {
		cout << "Nhap gia tri lon hon" << min << "va be hon" << max<<": ";
		cin >> x;
		if (x<min || x> max)
		{
			cout << "Nhap sai !" << endl;

		}
	} while (x< min|| x>max);

}
void nhapMang(int a[maxR][maxC], int& r, int& c)
{
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cout << "a[" << i << "][" << j << "]: ";
			cin >> a[i][j];
		 }
	}
}
void xuatMang(int a[maxR][maxC], int r, int c)
{
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cout << a[i][j] << "\t";
		}
		cout << endl;
	}
}
void sumHang(int a[maxR][maxC], int r, int c)
{
	int hang;
	ktGiatri(a,hang,0,r - 1);
	int tong = 0; 
	for (int i = 0; i < c; i++)
	{
		tong += a[hang][i];
	}
	cout << "Tong cua hang " << hang << " la: " << tong << endl;
}
void sumCot(int a[maxR][maxC], int r, int c)
{
	int cot; 
	ktGiatri(a, cot, 0, c - 1);
	int tong = 0;
	for (int i = 0; i < r; i++)
	{
		tong += a[i][cot];
	}
	cout << "Tong cua cot" << cot << "la: " << tong << endl;

}
void timX(int a[maxR][maxC], int r, int c)
{
	int x; 
	cout << "Nhap x can tim : ";
	cin >> x;
	int dem = 0;
	for (int i = 0; i < r; i++)
	
		for (int j = 0; j < c; j++)
		{
			if (a[i][j] == x)
			{
				dem++;
				cout << "Tim thay x = " << x << " o hang " << i << ",cot " << j << ": \n";
			}
			

		 }
	if (dem == 0)
		cout << "khong tim thay x" << x << endl;
	else
		cout << "Tim thay x" << x << ": " << dem << " lan: " << endl;
}
int main() {
	int a[maxR][maxC]; 
	int r; int c;
	ktGiatri(a, r, 1, 5);
	ktGiatri(a, c, 1, 6);
	nhapMang(a, r, c);
	xuatMang(a, r, c);
	cout << "\nTong hang la \n";
	sumHang(a, r, c);
	cout << "\nTong cot la : \n";
	sumCot(a, r, c);
	timX(a, r, c);
	system("pause");
	return 0;
}