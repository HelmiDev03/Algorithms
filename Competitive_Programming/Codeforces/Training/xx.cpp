#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define optimize() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);


int sum_of_digits(int n) {
    if (n == 0)
        return 0;
    return n % 10 + sum_of_digits(n / 10);
}
void Solve()
{
   
    ll n,s;
    cin >>n>>s;
    ll nb = 0 ;
    for (ll i = s; i <= min(n, s + 81); i++) {
        if (i - sum_of_digits(i) -s >=0) nb++;
    }
     if (n > s + 81) {
        nb += (n - (s + 81));
    }
    cout <<nb<<endl;

    
}

int main()
{
    optimize() ;
   
        Solve();
}
