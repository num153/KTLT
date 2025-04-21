#include<iostream>
using namespace std;
const int MaxR = 10;
const int MaxC = 15;


void ktGiaTri(int arr[MaxR][MaxC], int& x, int min, int max)
{
	do {
		cout << "Nhap gia tri lon hon " <<min << " va be hon " <<  max << ": ";
		cin >> x;
		if (x > max || x < min)
		{
			cout << "Nhap sai !!\n";
		}
	} while (x>max || x< min);
}
void nhapMang(int arr[MaxR][MaxC],int &r,int &c)
{
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cout << "arr [" << i << "][" << j << "]: ";
			cin >> arr[i][j];
		}
		cout << endl;
	}

}
void xuatMang(int arr[MaxR][MaxC], int& r, int& c)
{
	for (int i = 0; i < r; i++)

	{
		for (int j = 0; j < c; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}

}
int tinhTong(int arr[MaxR][MaxC], int r, int c)
{
	int tong = 0; 
	for (int i = 0; i < r; i++)
	{
		for ( int j=0; j<c; j++)
		{
			tong += arr[i][j];
		}
	 }
	return tong;
}
pair <int, int >timVTmin(int arr[MaxR][MaxC], int r, int c)
{
	int hang = 0; 
	int cot = 0; 
	for (int i = 0; i < r; i++)
	
		for (int j = 0; j < c; j++)
		{
			if (arr[i][j] < arr[hang][cot])
			{
				hang = i; 
				cot = j; 
			}

		}
	return { hang, cot };
	
}
pair <int, int> timVtMax(int arr[MaxR][MaxC], int r, int c)
{
	int hang = 0; 
	int cot = 0;
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			if (arr[i][j] > arr[hang][cot])
			{
				hang = i; 
				cot = j;

			 }
		}
	}
	return{ hang, cot };

}
int main() {
	int arr[MaxR][MaxC];
	int r, c;
	ktGiaTri(arr, r, 1, 15);
	ktGiaTri(arr, c, 1, 10);
	nhapMang(arr, r, c);
	xuatMang(arr,r,c);

	cout << "Tong mang la: " << tinhTong(arr, r, c) << endl;
	pair <int, int > Min = timVTmin(arr, r, c);
	cout << "Gia tri nho nhat la : " << "o hang " << Min.first << " o cot " << Min.second << endl;
	cout << "Gia tri nho nhat: " << arr[Min.first][Min.second] << endl;
	pair <int, int> Max = timVtMax(arr, r, c);
	cout << "Gia tri lon nhat " << "o hang " << Max.first << " o cot " << Max.second << endl;
	cout << "Gia tri lon nhat la :  " << arr[Max.first][Max.second] << endl;;
	system("pause");
	return 0;
}

//Cho phép người dùng nhập vào một mảng số nguyên gồm r hàng và c cột(tối đa 10
//	hàng và 15 cột, nếu nhập sai thì yêu cầu nhập lại cho đến khi đúng mới tiếp tục).