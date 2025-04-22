#include <iostream>
#include<ctime>
using namespace std;
void khoiTao(int** a, int r, int c)
{
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			a[i][j] = rand() % 256;
		}
	}
}
void xuat(int** a, int r, int c)
{
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cout << a[i][j] << " \t";
		}
		cout << endl;
	}
}

void matrixChuyenVi(int** a, int r, int c)
{
	for (int j = 0; j < r; j++)
	{
		for (int i = 0; i < c; i++)
		{
			cout << a[i][j] << "\t";
		}
		cout << endl;
	}
}

int main()
{
	srand(time(0));
	int r; int c;
	do
	{
		cout << "Nhap r >=1: "; cin >> r;
	} while (r <= 0); //gia su cot = 0 em cung cho ha mgoc ngo roi nam
	do
	{
		cout << "Nhap c >=1: "; cin >> c;
	} while (c <= 0);
	int** a;
	a = new int* [r];
	for (int i = 0; i < r; i++)
		a[i] = new int[c];

	khoiTao(a, r, c);
	cout << "mang ngau nhien: \n";
	xuat(a, r, c);
	cout << "mang chuyen vi: \n";
	matrixChuyenVi(a, r, c);


	//============GIAI PHONG===========
	for (int i = 0; i < r; i++)
		delete[]a[i];
	delete[]a;
	system("pause");
	return 0;
}