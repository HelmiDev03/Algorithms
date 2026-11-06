#include <bits/stdc++.h>
using namespace std;
#define ll long long
void Solve()
{

    int r ;
    cin >>r ;
    if (r>=1900) 
        cout <<"Division 1"<<endl;

    
    else if ( r >=1600 && r<=1988)
               cout <<"Division 2"<<endl;

   else if ( r >=1400 && r<=1599)
               cout <<"Division 3"<<endl;  
   else
   cout <<"Division 4"<<endl; 
                                    
  
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
        Solve();
}
