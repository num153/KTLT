#include <iostream>
using namespace std; 
void nhap(int** p, int r, int c)
{
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cout << "p[" << i << "][" << j << "]:";
			cin >> p[i][j];
		}
	}
}
void xuat(int** p, int r, int c)
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

int main()
{
	int r, c; 
	do
	{
		cout << "Nhap so hang: "; cin >> r; 
		if (r <= 0)
			cout << "Nhap lai !";
	}while (r<=0);

	do
	{
		cout << "Nhap so cot: "; cin >> c;
		if (c <= 0)
			cout << "Nhap lai!";
	} while (c <= 0);
	
	int** a;
	int** b;

	a = new int* [r];
	for (int i = 0; i < r; i++)
		a[i] = new int[c];
	b = new int* [r];
	for (int i = 0; i < r; i++)
		b[i] = new int[c];

	cout << "Xuat mang A: \n";
	nhap(a, r, c);
	xuat(a, r, c);
	cout << endl;
	cout << "Xuat mang b: \n";
	nhap(b, r, c);
	xuat(b, r, c);

	for (int i = 0; i < r; i++)
		delete[]a[i];
	delete[]a;
	for (int i = 0; i < r; i++)
		delete[]b[i];
	delete[]b;
	int** tong;

	system("pause");
	return 0;
}