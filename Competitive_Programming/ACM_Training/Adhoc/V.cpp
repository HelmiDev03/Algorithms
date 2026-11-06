#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 

    long long t, n,ind;
    vector <long long>   v {1 ,3 ,6 ,10 ,15}; 
    cin >> t;  
    while (t--) {
        cin >>n; 
        long long s = 0 ; 
        long long sum =0 ;
        vector <long long> ::iterator upper = lower_bound(v.begin() , v.end() , n );
         if (*upper ==n){
            cout <<1<<endl ; 
            return 0 ;

         }


        while (true )     {
            int ind = upper - v.begin()  ;
             
            int q = n / v[ind];
            s+=q ;
            int r = n % v[ind] ;
            if (r==0) {
                  cout << s<<endl;
                  return  0 ;
            }
            else{
                upper = lower_bound(v.begin() , v.end() , r );
                if (*upper == r) {
                    s+=1;
                    cout <<s<<endl ;
                    return 0 ;
                }
                else{
                    n= r ; 
                }
            }
            }

        cout <<s<<endl ;
    }   
    
    return 0;
}
