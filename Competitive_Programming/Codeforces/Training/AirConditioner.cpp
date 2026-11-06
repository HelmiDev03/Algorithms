#include <bits/stdc++.h>
using namespace std;

struct Customer {
    int t ,l  ,h ; 
    Customer(int x,int y, int z){
        t=x;
        l= y;
        h=z ;
    }
};



int main() {
    int q,n,m,t,l,h;
    
    pair<int,int> II , Posibble ; 
    cin >> q;
    

    
    while (q--) {
        vector<Customer> v ;
        cin >>n>>m ; 
        for (int i =0 ; i<n ; i++){
            cin >>t>>l>>h ; 
            Customer c(t,l,h);
            v.push_back(c);
        }
         
         int current_temp_low = m, current_temp_high = m;
         
         bool check = false ; 
         for (int i =0 ; i<n ; i++){
            II = make_pair(current_temp_low-v[i].t , current_temp_high+v[i].t);
            Posibble = make_pair(max(II.first,v[i].l) , min(II.second,v[i].h));
            if   ( (Posibble.first<v[i].l) || (Posibble.second>v[i].h)){
                       cout <<"NO"<<endl ; 
                       check = true ; 
                       break ; 
                 }
            current_temp_low = Posibble.first;
            current_temp_high = Posibble.second ;   
            
            
        }
         if (! check){
                cout <<"YES"<<endl ; 
            }    

       
    }

    return 0;
}
