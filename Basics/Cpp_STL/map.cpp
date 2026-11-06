#include <bits/stdc++.h>
using namespace std;


int main() {
  map <string , int> age ; 
  age.insert(make_pair("helmi", 20));
  age.insert(make_pair("roauef", 600));
  age.insert(make_pair("salma", 700));
  age["ahmed"]= 50 ; 
  for (map <string , int> ::iterator it  = age.begin() ; it != age.end();it++)
            cout << it->first<<"|"<<it->second <<endl;  

 if (age.find("helmi") !=age.end())
 cout <<"mawjoud" ; 

    return 0;
}
