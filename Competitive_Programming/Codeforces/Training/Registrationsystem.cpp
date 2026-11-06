#include <bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin >> t;
    map <string , int> names  ;
    string name ;
    while (t--) {
        cin >>  name;
        if (names.find(name) != names.end()) {
                
                names[name] ++;
                cout << name+to_string(names[name])<<endl;
        }
        else{
                names[name] = 0;
                cout <<"OK"<<endl ; 
        }

        

       
    }

    return 0;
}
