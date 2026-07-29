#include <iostream>

using namespace std;

int main() {
    int f0 = 0; // So Fibonacci thu 1
    int f1 = 1; // So Fibonacci thu 2
    
    cout << "Cac so Fibonacci nho hon 100 la:\n";
    
    // In so Fibonacci dau tien
    cout << f0 << " ";
    
    // Vong lap tim va in cac so Fibonacci tiep theo nho hon 100
    while (f1 < 100) {
        cout << f1 << " ";
        int fn = f0 + f1; // So Fibonacci ke tiep
        f0 = f1;          // Cap nhat f0
        f1 = fn;          // Cap nhat f1
    }
    
    cout << endl;
    return 0;
}
