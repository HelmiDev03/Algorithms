#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
    int n ;
    cin >>n ;
    long long  tab[n];
    for(int i =0 ; i<n ; i++)
           cin >> tab [i] ;
    sort ( tab , tab+n) ; 
    if (tab [0] >1)
         cout <<1<<endl;
    else 
         cout << -1 <<endl ;                     

    return 0;
}
