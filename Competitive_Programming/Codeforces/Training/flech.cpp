#include <bits/stdc++.h>
using namespace std;


int main() {
    int n ;
    string word ="";
    string add="a" ;
    stack<string> s ;
    string alphabet =  "abcdefghijklmnopqrstuvwxyz";
    cin >>n ;
    cout <<string(2*n -1  , 'a')<<endl ;
    if (n==1) return 0 ;
    //all charcaters expect last one 
    for (int i = 1 ; i<n-1 ; i++ ){
              add+=alphabet[i];
              word=add + string(2*n-1 - 2*add.size() , alphabet[i]) ;
              reverse(add.begin() , add.end()) ;
              word+=add ; 
              reverse(add.begin() , add.end()) ;
              s.push(word);
              cout <<word<<endl  ;   
                                    }
    //last character                                
    add+=alphabet[n-1];                                
    cout<<add;
    add.erase(n-1);
    reverse(add.begin() , add.end()) ;
    cout<<add<<endl ;
    //reverse                                
    while( ! s.empty()) {
        cout <<s.top()<<endl ; 
        s.pop();

    }    
    cout <<string(2*n -1  , 'a')<<endl ;                            

    return 0;
}
