#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define optimize() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);



void Solve()
{
    int  n ; 
    string s ; 
    map<char,int> m ; 
    cin >> n ;
    cin >>s ; 
    int nb = 0 ;
    for (char i : s) {
        if (m.find(i) !=m.end() ) {
            m[i]++;
        }
        else{
            m[i] = 2;
        }
    } 
    for (map <char , int> ::iterator it  = m.begin() ; it != m.end();it++)
            nb+=it->second ;
    
    cout <<nb<<endl;

    
}

int main()
{
    optimize() ;
    ll t ; 
    cin >> t ; 
    while(t--)
        Solve();
}
