#include <bits/stdc++.h>
using namespace std;


int main() {
  set <int > s ; 
  s.insert(50);
  s.insert(150);
  s.insert(200);
  s.insert(200);
  s.erase(200);


  for (set<int> ::iterator it = s.begin();  it !=s.end(); it++ ) {
             cout <<*it <<endl ; 
  }
  if(s.find(50) !=s.end())
  cout <<"mawjoud"<<endl;
  else
    cout <<"mech mawjoud"<<endl;


 

    return 0;
}
