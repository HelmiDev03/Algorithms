#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

void Solve()
{
           ll n ;
           string s;
           cin >>n ;
           cin >>s;
           ll ls=0, rs=0;
           int i = 0 ;
           while(i<n) {
            if (s[i] == '.' ) {
                  int j = i+1 ;
                  ll cls = 0 ; 
                  while(j<n) {
                    if (s[j]=='#') {
                        cls++;
                    }
                    else if (s[j] =='|') {
                        break ;
                    }
                    j++;
                  }
                  ls = max(ls , cls);
              i=j;    
            }
            else {
                i++;
            }
           }

           i = n-1;
           while(i>=0) {
            if (s[i] == '.' ) {
                  int j = i-1 ;
                  ll crs = 0 ; 
                  while(j>=0) {
                    if (s[j]=='#') {
                        crs++;
                    }
                    else if (s[j] =='|') {
                        break ;
                    }
                    j--;
                  }
                  rs = max(rs , crs);
              i=j;    
            }
            else {
                i--;
            }
           }
           

           cout <<max(ls,rs)<<endl;
           
}

int main()
{
    ll t ; 
    cin >> t ;
    while(t--)
    Solve();
}
