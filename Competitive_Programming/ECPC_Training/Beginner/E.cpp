#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
    int t,n ;
    char c ;
    cin >>t  ;


    while (t--){
        cin >> n ; 
        string a="", b="";
        for (int i=0 ; i<n ; i++){
                   cin >> c ; 
                   if (c == 'G')
                      c  = 'B' ; 
             a+=c      ;   
            
        }
        for (int i=0 ; i<n ; i++){
                   cin >> c ; 
                   if (c == 'G')
                      c  = 'B' ; 
             b+=c ;       
            
        }
        if (a==b)
        cout << "YES"<<endl ;
        else
        cout << "NO"<<endl ;
    }
    
    
    return 0;
}
