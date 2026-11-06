#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(long long num) {
    if (num <= 1) return false; // 1 is prime but his divsors are only 1  , we need 2 divisors
    if (num <= 3) return true; // 3 : 3&1  , 2: 2&1
    if (num % 2 == 0 || num % 3 == 0) return false;  // first visctims are 4 and 6 , so numbers like
    // x = 4 +2a (a entier)   and y = 3+ 3b (b entier non nul)  are elimnated
    for (long long i = 5; i * i <= num; i += 6) { // cadd i= < racine (num)
        if (num % i == 0 || num % (i + 2) == 0) return false;
        // if i i n {5,11,17,23........}
        /*
        i : a tester
        i+1 : pair:
        i+2 :  a tester 
        i+3: pair
        i+4 : divisble par 3
        i+5 : pair
        */
    }
    return true;
}

bool hasExactlyThreeDistinctPositiveDivisors(long long n) {
    long long sqrt_n = static_cast<long long>(sqrt(n));
    if (sqrt_n * sqrt_n == n) {
        return isPrime(sqrt_n);
    }
    return false;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;

        if (hasExactlyThreeDistinctPositiveDivisors(n)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
