#include <bits/stdc++.h>
using namespace std;


int main() {
    int t,x,y,k;
    cin >> t;
    

    
    while (t--) {
        cin >>x>>y>>k ; 
        if (ceil(double(x)/k) <= ceil(double(y)/k)){
            cout <<  2 * ceil(double(y)/k)<<endl ;
        }
        else{
            cout << 2 * ceil(double(y)/k) -1 <<endl  ;
        }

        
        

       
    }

    return 0;
}
