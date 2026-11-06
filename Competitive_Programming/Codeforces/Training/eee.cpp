#include<bits/stdc++.h>
#define int64 long long
#define MAX_SIZE 5005
const int MOD = 998244353;
using namespace std;

int factorial[MAX_SIZE], inverse[MAX_SIZE];
int result = 0, x, y, z;

inline int mod_pow(int base, int exp){
    int res = 1;
    while (exp > 0) {
        if (exp % 2 == 1) res = res * (int64)base % MOD;
        base = base * (int64)base % MOD;
        exp /= 2;
    }
    return res;
}

inline int mod_add(int a, int b) {
    a += b;
    return a >= MOD ? a - MOD : a;
}

inline void precompute() {
    factorial[0] = 1;
    for(int i = 1; i <= 5000; i++) {
        factorial[i] = factorial[i - 1] * (int64)i % MOD;
    }
    inverse[5000] = mod_pow(factorial[5000], MOD - 2);
    for(int i = 5000; i > 0; i--) {
        inverse[i - 1] = inverse[i] * (int64)i % MOD;
    }
}

inline int perm(int n, int k) {
    return n < k ? 0 : factorial[n] * (int64)inverse[n - k] % MOD;
}

inline int comb(int n, int k) {
    return n < k ? 0 : perm(n, k) * (int64)inverse[k] % MOD;
}

int main() {
    precompute();
    cin >> x >> y >> z;

    for(int i = 0; i <= y; i++) {
        result = mod_add(result, comb(y, i) * (int64)perm(x, y - i) % MOD);
    }

    int temp[2] = {0, 0};
    for(int i = 0; i <= z; i++) {
        temp[0] = mod_add(temp[0], comb(z, i) * (int64)perm(x, z - i) % MOD);
        temp[1] = mod_add(temp[1], comb(z, i) * (int64)perm(y, z - i) % MOD);
    }

    result = result * (int64)temp[0] % MOD * (int64)temp[1] % MOD;

    cout <<result<<endl;
    return 0;
}
