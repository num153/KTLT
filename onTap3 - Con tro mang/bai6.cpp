#include <iostream>
#include<ctime>
using namespace std;
void khoiTao(int* p, int n)
{
	for (int i = 0; i < n; i++)
		p[i] = rand() % 100;
}
void xuatMang(int* p, int n)
{
	for (int i = 0; i < n; i++)
		cout << *(p+i) << " ";
	cout << endl;
}
void *timKiem(int* p, int n,int x)
{
	for (int i = 0; i < n; i++)
		if (*(p + i) == x)
			return p + i;
	return NULL;
		
}
int main()
{
	srand(time(0));
	int n; 
	do
	{
		cout << "Nhap n>=1: ";
		cin >> n;
	} while (n < 1);
	int* p = new int[n];
	khoiTao(p, n);
	xuatMang(p, n);
	int x; 
	cout << "Nhap so can tim: "; cin >> x;
	void* vt = timKiem(p, n, x);
	if (vt)
		cout << "Tim thay " << x << "tai vi tri: " << vt << endl;
	else
		cout << "Khong tim thay !!" << endl;

	delete[]p;
	system("pause");
	return 0;
}