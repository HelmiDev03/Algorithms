#include <bits/stdc++.h>
using namespace std;


int main() {
    long long t,n; 
    map <long long , long long > m ;
    cin >> t;
    

    
    while (t--) {
        cin >> n ; 
         long long ans = 0;
        long long v[n];  
         m.clear() ;   
        for (long long i =0 ; i< n ; i++) {
            cin >> v[i];
            v[i] -= i ;   }

        m[v[0]] = 1 ;
        for (long long i =1 ; i< n ; i++) {
                if (m.find(v[i]) != m.end()) {
                       ans+=  m[v[i]] ;
                       m[v[i]] ++;
                }
                else{
                       m[v[i]] = 1 ;
                }
        }   


          cout <<ans <<endl ; 

       
    }

    return 0;
}
