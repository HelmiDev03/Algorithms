#include <bits/stdc++.h>
using namespace std;


int main() {
  stack <int> s ; 

  s.push(5);
  s.push(15);
  s.push(25);
  cout << s.size() <<endl;
  while(! s.empty()){
    cout << s.top()<<endl;
    s.pop();
  }

  cout << s.size() <<endl;

    return 0;
}
