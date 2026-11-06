#include <bits/stdc++.h>
using namespace std;


int main() {
    int t,n;
    cin >> t;
    string a ; 
    

    
    while (t--) {
        cin>> n; 
        vector<vector<string>> beatmap ;
        for (int i = 0 ; i < n ; i++){
            
            cin >>a ; 
            vector <string> vv ; 
            for (char c : a){
                string str(1, c) ;
                vv.push_back(str) ;

            }
            beatmap.push_back(vv);
        }
         
        
         for (int i = beatmap.size()-1 ; i>=0 ; i--){
            vector<string> ::iterator it  = find(beatmap[i].begin(),beatmap[i].end(), "#");
            cout << it - beatmap[i].begin()+ 1 <<" " ; 
         }
         cout <<endl ; 
        
        

       
    }

    return 0;
}
