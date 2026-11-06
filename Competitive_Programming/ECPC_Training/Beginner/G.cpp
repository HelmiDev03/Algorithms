#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long c2 = n / 3;
        long long c1 = n - 2 * c2;
        if (c1 > c2) {
            c1 -= 2;
            c2 += 1;
        }
        cout << c1 << " " << c2 << endl;
    }
    return 0;
}
