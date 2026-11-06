#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

void Solve()
{
    int n ;
    ll r=1;
    cin >>n;
    int t[n];
    int nb0 = 0;
    for (int i =0 ; i<n ; i++) {
              cin>>t[i];
              if (t[i]==0)
                  nb0++; 
              else

                     r*=t[i];
                                }
     if  (nb0 ==1) {
        cout <<r<<endl;
     } 
     else if(nb0>=2) {
        cout <<0<<endl;
     }  
     
     else{
     ll o =1, cr=1 ;
     int index=0 ;
    

     while(index<n) {
              
        cr  = (r/t[index]) * (t[index] + 1 );              
        
        if (cr>r)
             o=max(cr,o);

        index++;
     }
          
     cout<<o<<endl;  


     }   
     
    
}




int main () {
    int t ; 
    cin >> t ; 
    while(t--)
        Solve();
}
