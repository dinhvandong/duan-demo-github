#include <iostream>
#include <cmath>

using namespace std;

// Hàm tìm ước chung lớn nhất (UCLN) sử dụng thuật toán Euclid
int timUCLN(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return abs(a);
}

int main() {
    int a, b;
    
    cout << "=== Chuong trinh tim Uoc Chung Lon Nhat (UCLN) ===" << endl;
    
    cout << "Nhap so thu nhat: ";
    if (!(cin >> a)) {
        cout << "Gia tri nhap vao khong hop le!" << endl;
        return 1;
    }
    
    cout << "Nhap so thu hai: ";
    if (!(cin >> b)) {
        cout << "Gia tri nhap vao khong hop le!" << endl;
        return 1;
    }
    
    int ucln = timUCLN(a, b);
    
    cout << "UCLN cua " << a << " va " << b << " la: " << ucln << endl;
    
    return 0;
}
