#include <iostream>
using namespace std; 
const int maxR = 100; 
const int maxC = 100;
void nhapMang(int a[maxR][maxR], int &r, int &c)
{
	cout << "Nhap so hang: "; cin >> r;
	cout << "Nhap so cot: "; cin >> c;
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cout << "a[" << i << "][" << j << "]: ";
			cin >> a[i][j];
		}
	}
}
void xuatmang(int a[maxR][maxC], int r, int c)
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
int tinhTBC(int a[maxR][maxC], int r, int c)
{
	int sum = 0;
	int dem = 0;
	int tbc;
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			sum += a[i][j];
			dem++;
		}
	}
	return tbc = sum / dem;
}
pair<int, int> timKiem(int a[maxR][maxC],int r, int c, int x)
{
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			if (x == a[i][j])
			{
				return { i,j };
			}
		}

	}
	return { -1,-1 };
}
void tinhTichCot(int a[maxR][maxC], int r, int c)
{
	int tich=1;
	int cot;
	cout << "Nhap cot can tinh: ";
	cin >> cot;
	for (int i = 0; i < r; i++)
	{
		tich *= a[i][cot];
	}
	cout << "Tich la: " << tich << endl;
}
void swap(int& a, int& b)
{
	a = a + b;
	b = a - b;
	a = a - b;

}
void hoanDoi(int a[maxR][maxC], int r, int c, int x, int y)
{
	pair<int, int> vtX= timKiem(a, r, c, x);
	pair <int, int> vtY= timKiem(a, r, c, y);
	if (vtX.first == -1 || vtY.first ==-1)
		cout << "Khong the hoan doi !";
	else
	{
		swap(a[vtX.first][vtX.second], a[vtY.first][vtY.second]);
		cout << "Mang sau khi hoan doi la: " << endl;
		xuatmang(a, r, c);
	}



}
int main() {
	int a[maxR][maxC]; 
	int r; int c;
	int tich;
	nhapMang(a,r,c);
	xuatmang(a, r, c);
	cout << "tbc: " << tinhTBC(a, r, c)<< endl;
	int x;
	cout << "Nhap gia tri can tim: ";
	cin >> x;
	pair<int, int > timX = timKiem(a, r, c, x);  
	cout << "Vi tri cua " << x << " o hang " << timX.first << " o cot " << timX.second << endl;
	tinhTichCot(a, r, c);
	hoanDoi(a, r, c, 1, 3);
	system("pause");
	return 0;
}