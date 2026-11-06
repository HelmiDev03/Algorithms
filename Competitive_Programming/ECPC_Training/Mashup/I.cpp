#include <bits/stdc++.h>
using namespace std;

void Solve() {
  
    
        int n,s=0,ind=0;
        cin >>n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) 
            cin >>v[i];
            
         for (int i = 0; i < n; i++) {
            if (ind % 2 != 0)
                s-=v[i];
             else
                s+=v[i];

                ind++;
         }        
        

      
        
        
       
        cout << s << endl;
    
    
   
}


int main () {
    int t ; 
    cin >> t ; 
    while(t--)
        Solve();
}
