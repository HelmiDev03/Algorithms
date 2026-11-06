#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define optimize() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);



void Solve()
{
    ll  n , k ,bi,ci; 
    map<int,int> mp;
    vector<int> a;
    cin >> n >>k ;
   
    for (int i = 0; i < k; i++)
    {
        cin >> bi >> ci; 
        mp[bi] += ci;
    }

    
     for (map<int,int>::iterator it = mp.begin(); it != mp.end(); it++)
     {  
        
        a.push_back(it->second);
     }
    sort(a.begin(),a.end() , greater<int>());
    ll ans =0;
    
          
    for (int i = 0; i < min(n, (ll)a.size()); i++) 
        ans += a[i];

    cout << ans << endl;
    
}

int main()
{
    optimize() ;
    ll t ; 
    cin >> t ; 
    while(t--)
        Solve();
}
