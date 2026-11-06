#include <bits/stdc++.h>
using namespace std;


int main() {
    int t , n ;
    string s;
    cin >>t ; 
    while (t--){
    cin >>n;
    cin >>s ;
    vector<vector<int>> tab (26 , vector<int>(n ,0)) ;//initliassy each alphabetic character has 0 in all his n cases
    for (int i= 0 ; i < n ; i ++)
                 tab[s[i] -'a'][i] ++;   //increment the case i of the current char 

    for (int i= 0 ; i < 26 ; i ++)
        for (int j= 1 ; j < tab[i].size() ; j ++)   
                  tab[i][j]+=tab[i][j-1];  //cummulative sum for each character
    
              
    int ans = 0 ;
    for (int i= 0 ; i < n ; i ++) {
              int right  = n - 1 - i;
              int left = i;
              char ch = s[left];
              string sequenceTocheck = s.substr(left , right+1);
              vector<int> CumSumOfCh = tab [ch - 'a']  ;
              cout << sequenceTocheck <<endl ;
                 for (int j= 0 ; j < CumSumOfCh.size() ; j ++)   
                   cout  << CumSumOfCh[j]<<"|";
                   cout <<endl ;
                    
              ans+= CumSumOfCh[right] - CumSumOfCh[left] == sequenceTocheck.size() ;

      }


    cout <<ans<<endl ;   






    }
    return 0;
}
