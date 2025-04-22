#include <iostream>
using namespace std; 
void nhapMang(int **a, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++) {
			cout << "a[" << i << "][" << j << "]: ";
			cin >> a[i][j];
		}
	}
}
void xuatMang(int **a, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++) 
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}
int tinhTongHang(int **a, int n, int r)
{
	if (r < 0 || r >= n)
	{
		cout << "Hang " << r << "ko ton tai!.\n";
		return 0;

	}
	int tong = 0;
	for (int j = 0; j < n; j++)
	{
		tong += a[r][j];
	}
	return tong;
}
int tinhTongCot(int** a, int n, int c)
{
	if (c < 0 || c < n - 1)
	{
		cout << "Cot " << c << "khong tin tai.\n";
		return 0;
	}
	int tong = 0; 
	for (int i = 0; i < n; i++)
	{
		tong += a[i][c];
	}
	return tong;
}
int tinhTichHang(int** a, int n, int r)
{
	if (r < 0 || r >= n)
	{
		cout << "Hang: " << r << "khong ton tai.\n";
		return 0;
	}
	int tich = 1;
	for (int j = 0; j < n; j++)
	{
		tich *= a[r][j];
	}
	return tich;
}
int tinhTichCot(int** a, int n, int c)
{
	if (c < 0 || c >= n)
	{
		cout << "Cot " << c << " khong ton tai. \n";
		return 0;
	}
	int tich = 1;
	for (int i = 0; i < n; i++)
	{
		tich *= a[i][c];
	}
	return tich;

}
pair <int, int> timMax(int** a, int n)
{
	int hangMax = 0;
	int cotMax = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[hangMax][cotMax] < a[i][j]) {
				hangMax = i;
				cotMax = j;
			}
		}
	}
	return { hangMax,cotMax };//dung k ta
}
pair <int, int> timMin(int** a, int n)
{
	int hangMin = 0; 
	int cotMin = 0; 
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[hangMin][cotMin] >a[i][j])
			{
				hangMin = i;
				cotMin = j;
			}
		}
	}
	return { hangMin,cotMin };
}
bool ktDX(int** a, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] != a[j][i]) {
				//dung k ta :) chac dung em tinh ghi v
				return false;
			}
		}
	}
	return true;
}
int main()
{
	int n; // roi nhap sao moi dx ohhhhh 
	do
	{
		cout << "Nhap n >= 1: "; cin >> n;
		if (n < 1)
			cout << "Nhap sai!";
	} while (n < 1);
	int** a;
	a = new int* [n];
	for (int i = 0; i < n; i++)
		a[i] = new int[n];
	nhapMang(a, n);
	cout << "Mang vua nhap la: \n";
	xuatMang(a, n);

	//======tinh tong cot============
	int hang; 
	cout << "nhap hang ban muon tinh: "; cin >> hang;
	int tonghHang = tinhTongHang(a, n, hang);
	int tichHang = tinhTichHang(a, n, hang);
	if (hang >=0 && hang < n)
	cout << "Tong hang " << hang << " la: " << tonghHang << endl;
	cout << "Tich hang " << hang << " la: " << tichHang << endl;

	//======tinh tong cot============
	int cot;
	cout << "Nhap cot ban muon tinh: "; cin >> cot;
	int tongCot = tinhTongCot(a, n, cot);
	int tichCot = tinhTichCot(a, n, cot);
	if (cot > 0 && cot < n)
		cout << "Tong cot " << cot << " la: " << tongCot << endl;
	cout << "Tich cot " << cot << " la: " << tichCot << endl;


	//======TIM VT MAX============
	pair<int, int > Max = timMax(a, n);
	cout << "Gia tri lon nhat o hang " << Max.first << " ,cot " << Max.second << endl;
	pair <int, int> Min = timMin(a, n);
	cout << "Gia tri nho nhat ow hang " << Min.first << ",cot" << Min.second << endl;
	
	//======MA TRAN DOI BUNG============
	if (ktDX(a, n) == true) {
		cout << "Day la ma tran doi xung!\n";
	}
	else {
		cout << "K phai ma tran doi xung\n";
	}

	//giai phong
	for (int i = 0; i < n; i++)
		delete[]a[i];
	delete[]a;

	system("pause");
	return 0;
}