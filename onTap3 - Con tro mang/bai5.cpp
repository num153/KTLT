#include <iostream>
#include<ctime>
using namespace std; 
void swap(int& a, int& b)
{
	int tmp = a; a = b; b = tmp;
}
void khoiTao(int* p, int n)
{
	for (int i = 0; i < n; i++)
		p[i] = rand() % 100;
}
void xuatMang(int* p, int n)
{
	for (int i = 0; i < n; i++)
		cout << *(p + i) << " ";
	cout << endl;
}
void daoMang(int* p, int n)
{
	int left = 0;
	int right = n - 1;
	while (left < right)
	{
		swap(*(p + left), *(p + right));
		left++; right--;
	}
}
int main() {
	srand(time(0));
	int n; 
	do {
		cout << "Nhap n >=1: ";
		cin >> n;
	} while (n < 1);
	int* p = new int[n];
	khoiTao(p, n);
	cout << "Mang truoc khi dao nguoc la: " << endl;
	xuatMang(p, n);
	cout << "Mang sau khi dao nguoc la: " << endl;
	daoMang(p, n);
	xuatMang(p, n);
	delete[]p;

	system("pause");
	return 0;
}