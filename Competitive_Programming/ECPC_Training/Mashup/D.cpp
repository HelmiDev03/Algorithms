#include <bits/stdc++.h>
using namespace std;

void Solve() {
  
    
        int n,a,b ;
        cin >> n;
        vector<int> v;
        map<int,int> m ;
        for (int i = 0; i < n; i++) {
            cin >> a>>b;
            if (a<=10) {
                v.push_back(b);
                m[b] = i+1;
            }
                 
        }

      
        sort(v.begin(), v.end() );
        
       
            cout << m[v[v.size()-1]] << endl;
    
    
   
}


int main () {
    int t ; 
    cin >> t ; 
    while(t--)
        Solve();
}
