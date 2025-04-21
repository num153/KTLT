#include <iostream>
using namespace std;
const int MaxR = 3;
const int MaxC = 4;
void nhapMang(int arr[MaxR][MaxC])
{
	int i = 0; 
	while (i < MaxR)
	{
		int j = 0; 
		while (j < MaxC)
		{
			cout << "arr[" << i << "] [" << j << "]: ";
			cin >> arr[i][j];
			j++;
		}
		i++;
	}
}
void xuatMang(int arr[MaxR][MaxC])
{
	int i = 0;
	while (i < MaxR)
	{
		int j = 0;
		while (j < MaxC)
		{
			cout << arr[i][j] << "\t";
			j++;
		}
		cout << endl;
		i++;
	}
}
int main() {
	int arr[MaxR][MaxC];
	nhapMang(arr);
	xuatMang(arr);
	system("pause");
	return 0;
 }