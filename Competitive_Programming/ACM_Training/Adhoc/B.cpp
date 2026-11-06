#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
    int t ,n,ch=0,init=0;
    cin >>t  ;


    while (t--){
        cin >>n ; 
         for (int i = 0; i < 2 * n; i++) {
            for (int j = 0; j < 2 * n; j++) {
                if ((i / 2 + j / 2) % 2 == 0)  
                    cout << '#';
                else
                    cout << '.';
            }
            cout << endl;
        }
    }
    
    
    
    return 0;
}
