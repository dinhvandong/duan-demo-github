#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Nhap vao mot so nguyen: ";
    if (cin >> n) {
        if (n % 2 == 0) {
            cout << n << " la so chan." << endl;
        } else {
            cout << n << " la so le." << endl;
        }
    } else {
        cout << "Gia tri nhap vao khong hop le!" << endl;
    }
    return 0;
}
