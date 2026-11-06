#include <bits/stdc++.h>
using namespace std;

void Solve() {
  
    
        int a ;
        string s;
        cin >>a;   
        s=to_string(a);
        if(s.size()==3 && s[0]=='1' &&s[1]== '0' and  (s[2] - '0') >=2  )  
                   cout<<"YES"<<endl;
        else if (s.size()==4 && s[0]=='1' &&s[1]== '0' && s[2]!='0' && ((s[2]  + s[3]) - '0') >=2 )   
         cout<<"YES"<<endl; 
        else if (s.size()==5 && s[0]=='1' &&s[1]== '0' && s[2]!='0' && ((s[2]  + s[3] + s[4]) - '0') >=2 )   
         cout<<"YES"<<endl;     
        else
                    cout<<"NO"<<endl;          
        
        

      
        
        
       
      
    
    
   
}


int main () {
    int t ; 
    cin >> t ; 
    while(t--)
        Solve();
}
