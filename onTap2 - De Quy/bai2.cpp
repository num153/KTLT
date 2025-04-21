#include <iostream>
#include<cmath>
using namespace std;
int giaiThua(int n)
{
	if (n <= 0)
		return 1;
	return giaiThua(n - 1) * n;

}

int Fibo(int n)
{
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;
	return Fibo(n - 1) + (n - 2);
}

double luyThua(int x, int n)
{
	if (n == 0)
		return 1;
	if (n > 0)
		return luyThua(x, n - 1) * x;
	return 1.0 / luyThua(x, -n);

}
int demChuSo(int n)
{
	if (n < 10)
		return 1;
	return demChuSo(n / 10) + 1;

}
int daoNguoc(int n,int sdn = 0)
{
	if (n == 0)
		return sdn;
	return daoNguoc(n / 10, sdn * 10 + n % 10);
}
int tongChan(int n)
{
	if (n == 0)
		return 0;
	else if ((n % 10) % 2 == 0)
		return tongChan(n / 10)+ n % 10;
	return tongChan(n / 10);
}
int tongLe(int n)
{
	if (n == 0)
		return 0;
	else if ((n % 10) % 2 != 0)
		return tongLe(n / 10) + n % 10;
	return tongLe(n / 10);
}
//de quy duoi 
int tong(int n)
{
	if (n <= 0)
		return 0;
	if (n == 1)
		return 1;
	return n+ tong(n - 1) ;
}
// de quyv ho tuong
bool Le(int n);
bool Chan(int n)
{
	if (n < 0) n = -n;
	if (n == 0) return true;
	return Le(n - 1);
}
bool Le(int n)
{
	if (n < 0) n = -n;
	if (n == 0) return false;
	return Chan(n - 1);
}

int tu10sang2(int n)
{
	if (n == 0)
		return 0;
	return tu10sang2(n / 2) * 10 + (n % 2);

}

int tu2sang10(int n)
{
	if (n == 0)
		return 0;
	return tu2sang10(n / 10) * 2 + (n % 10);
}
int UCLN(int a, int b)
{
	if (b == 0)
		return a;
	return UCLN(b, a % b);
}

int tong(int a[], int n)
{
	if (n == 1)
		return a[0];
	return tong(a, n - 1) + a[n - 1];
}
int timMin(int a[], int n)
{
	if (n == 1) return a[0];
	int min = timMin(a, n - 1);
	return a[n - 1] < min ? a[n - 1] : min;
}

int timMax(int a[], int n)
{
	if (n == 1) return a[0];
	int max = timMax(a, n - 1);
	return a[n - 1] > max ? a[n - 1] : max;
}
int main()
{
	//cout << giaiThua(5)<< endl;
	//cout << Fibo(7) << endl;
	//cout << luyThua(2, 2) << endl;
	/*cout << demChuSo(1234) << endl;
	cout << daoNguoc(123456) << endl;*/
	//cout << "Tong so chan la: " << tongChan(1234) << endl;
	//cout << "Tong so le la: " << tongLe(1234) << endl;
	int n;
	cout << "Nhap n: "; cin >> n;
	//if (n > 1000)
	//{
	//	cout << "\nQua lon nhap lai!\n ";
	//	return 1;
	//}
	//cout << "Tong la: " << tong(n) << endl;
		//cout << "Chan = " << n<<(Chan(n) ? true : false);		cout << endl;

		//cout << "Le = " <<n<< (Le(n) ? true : false); 
		//cout << endl;
	cout << "Chuyen tu 10 sang 2 la: " << tu10sang2(n) << endl;
	cout << "Chuyen tu 2 sang 10 la: " << tu2sang10(n) << endl;
	cout << "Uoc chung lon nhat gua 8 va 32 la: " << UCLN(8, 32) << endl;
	int a[] = { 1 , 2 ,3,4,6,8 };
	int b[] = { 3,7,6,-1,3 };
	cout << "Tong A= " << tong(a, 6) << endl;
	cout << "Tong B= " << tong(b, 5) << endl;
	cout << "Gia tri nho nhat trong A la: " << timMin(a, 6) << endl;
	cout << "Gia tri nho nhat trong B la: " << timMin(b, 5) << endl;
	cout << "Gia tri lon nhat trong A la: " << timMax(a, 6) << endl;
	cout << "Gia tri lon nhat trong B la: " << timMax(b, 5) << endl;
	system("pause");
	return 0;
}