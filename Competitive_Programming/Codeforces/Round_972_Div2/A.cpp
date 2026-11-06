#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main() {

  

    ll t ,n,m,q,pos,b1,b2 ;
    cin >> t;
    

    
    while (t--) {
        cin>>n>>m>>q ;
        cin >>b1>>b2 ;
       
            

        cin >>pos ; 
        if (b1<b2)
        swap(b1,b2);
        cout << min (abs(pos-b1), abs(pos -b2))<<endl;      
        
    
    }

    return 0;
}
