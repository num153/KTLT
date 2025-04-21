#include <iostream>
#include<ctime>
using namespace std;

void khoiTao( int a[30])
{
	for (int i = 0; i < 30; i++)
		a[i] = rand() % 10;
}




int main()
{
	int a[30];
	srand(time(0));
	khoiTao(a);
	int* p = a; //p= a[0];
	cout << "Xuat  mng theo ky phap do doi: \n";
	for (int i = 0; i < 30; i++)
	
		cout << *(p + i) << " ";
		cout << endl;
	

	cout << "Xuat mang theo ky phap so: \n";
	for (int i = 0; i < 30; i++)
	
		cout << p[i] << " ";
		cout << endl;
	
	delete p;
	system("pause");
	return 0;
}