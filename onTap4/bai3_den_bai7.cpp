#include <iostream>
using namespace std;

// Hàm đệ quy nhập mảng con trỏ (Bài 3)
void inputArray(int* a, int n, int i = 0) {
    if (i >= n) return;
    cout << "Nhap phan tu a[" << i << "]: ";
    cin >> *(a + i);
    inputArray(a, n, i + 1);
}

// Hàm đệ quy xuất mảng con trỏ (Bài 4)
void outputArray(int* a, int n, int i = 0) {
    if (i >= n) return;
    cout << *(a + i) << " ";
    outputArray(a, n, i + 1);
}

// Hàm đệ quy tìm số lớn nhất trong mảng con trỏ (Bài 5)
int findMax(int* a, int n, int i = 0) {
    if (i == n - 1) return *(a + i);
    int maxRest = findMax(a, n, i + 1);
    return (*(a + i) > maxRest) ? *(a + i) : maxRest;
}

// Hàm đệ quy tìm vị trí số nhỏ nhất trong mảng con trỏ (Bài 6)
int findMinIndex(int* a, int n, int i = 0, int minIndex = 0) {
    if (i >= n) return minIndex;
    if (*(a + i) < *(a + minIndex)) minIndex = i;
    return findMinIndex(a, n, i + 1, minIndex);
}

// Hàm đệ quy đảo ngược mảng con trỏ (Bài 7)
void reverseArray(int* a, int left, int right) {
    if (left >= right) return;
    swap(*(a + left), *(a + right));
    reverseArray(a, left + 1, right - 1);
}

// Chương trình kiểm tra
int main() {
    int n;
    cout << "Nhap so phan tu cua mang: ";
    cin >> n;
    
    // Cấp phát động mảng con trỏ
    int* a = new int[n];
    
    // Kiểm tra hàm nhập mảng (Bài 3)
    cout << "Nhap mang:\n";
    inputArray(a, n);
    
    // Kiểm tra hàm xuất mảng (Bài 4)
    cout << "Mang vua nhap: ";
    outputArray(a, n);
    cout << endl;
    
    // Kiểm tra hàm tìm số lớn nhất (Bài 5)
    cout << "So lon nhat trong mang: " << findMax(a, n) << endl;
    
    // Kiểm tra hàm tìm vị trí số nhỏ nhất (Bài 6)
    cout << "Vi tri so nho nhat trong mang: " << findMinIndex(a, n) << endl;
    
    // Kiểm tra hàm đảo ngược mảng (Bài 7)
    reverseArray(a, 0, n - 1);
    cout << "Mang sau khi dao nguoc: ";
    outputArray(a, n);
    cout << endl;
    
    // Giải phóng bộ nhớ
    delete[] a;
    
    return 0;
}
