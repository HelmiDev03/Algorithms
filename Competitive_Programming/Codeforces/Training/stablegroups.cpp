#include <bits/stdc++.h>
using namespace std;




int main() {
    long long  n  ,k ,x;
    vector <long long > distance ;
    cin >>n>>k>>x;
    long long  level[n];
    for (int i= 0 ; i<n ; i++)
        cin >>level[i];

     
    long long  split=0;
    long long  diff ;
    sort(level , level+n);
    for (int i= 0 ; i<n-1 ; i++)  {
        diff = level[i+1]-level[i];
        if (diff>x){
            //à chaque fois bech nstoki distance eli khaletni naml sous groupe jdid
                 distance.push_back(diff) ;
                 split ++;
              }
    }
    if (split==0){
        cout <<1<<endl;
        return 0;
    }
    if (k==0){
        cout <<split+1<<endl;
        return 0;
    }
    long long  r,q;
    sort(distance.begin(),distance.end()) ;
    for (int i= 0 ; i<distance.size() ; i++)  { 
               if (k==0){
                  cout <<split+1<<endl;
                  return 0;
                      }
               r=  distance[i] % x ;
               q=  distance[i] / x ;
               
               if (r==0)
                   q-=1;

               if (k>=q)    {
                   k-=q ;
                   split -- ;
               }
               
                                         }

    

    cout <<split+1<<endl;    
    return 0;
}
