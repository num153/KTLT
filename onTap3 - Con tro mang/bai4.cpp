#include<iostream>
#include<ctime>
using namespace std; 
void nhapMang(int* p, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "p[" << i << "]: ";
		cin >> p[i];
	}
}
void xuatMang(int* p, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << *(p + i) << " ("<< p+i<< ") ";
	}
	cout << endl;
}
void xuatLe(int* p, int n)
{
	for (int i=0; i < n; i++)
	{
		int tmp = *(p + i);
		if (tmp % 2 != 0)
			cout << tmp << " ";

	}
	cout << endl;
}
int * timMax(int* p, int n)
{
	int *max = p;
	for (int i = 0; i < n; i++)
		if (*(p + i) > *max)
			max = p + i; 
		return max;

}
int main()
{
	srand(time(0));
	int n; 
	do
	{
		cout << "Nhap n>=1: ";
		cin >> n;
	} while (n<1);
	int* p = new int[n];
	nhapMang(p, n);
	xuatMang(p, n);
	cout << "So le la: ";
	xuatLe(p, n);
	cout << "Dia chi cua phan tu lon nhat trong mang la : " << timMax(p, n) << endl;
	delete[] p;
	system("pause");
	return 0;
}