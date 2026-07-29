#include <iostream>
#include <limits>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    if (!(cin >> n)) return 0;
    if (n <= 0) {
        cout << "No elements\n";
        return 0;
    }

    long long mn = numeric_limits<long long>::max();
    long long mx = numeric_limits<long long>::min();
    for (int i = 0; i < n; ++i) {
        long long x;
        cin >> x;
        if (x < mn) mn = x;
        if (x > mx) mx = x;
    }

    cout << mn << " " << mx << "\n";
    return 0;
}
