#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    
    cin >> t;
   

    while (t--) {
        cin >> n;    // Read the integer n
        vector<int> after(n,0) ; 
        for (int i= 0  ;i < n ; i++){
            int z ;
            string moves ;
            cin >>z>>moves;
             for (char c : moves) {
                 if (c =='D'){
                    if (after[i]==9) 
                         after[i]==0 ;
                     else 
                      after[i]+=1 ;
                        

                        }
                    else {
                    if (after[i]==0) 
                         after[i]==9 ;
                     else 
                      after[i]-=1 ;
                        

                        }    
                  

                                   }
                                 

        }
        for (int i = 0 ; i< after.size();i++)
        cout <<after[i]<<" ";
        cout <<endl ;
        
    }

    return 0;
}
