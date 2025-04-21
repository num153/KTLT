#include<iostream>
using namespace std;
int UCLN(int a, int b)
{
	if (b == 0)
		return a; 
	return UCLN(b, a % b);
}
int main()
{
	int* p=new int ;
	int* q= new int;
	cout << "Nhap gia tri cua p: "; cin >> *p;
	cout << "Nhap gia tri cua q: "; cin >> *q;
	cout << "Uoc chung lon nhat la: " << UCLN(*p, *q) << endl;
	delete q;
	delete p;

	system("pause");
	return 0;
}