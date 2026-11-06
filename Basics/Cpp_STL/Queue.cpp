#include <bits/stdc++.h>
using namespace std;


int main() {
  queue <int> q ; 

  q.push(5);
  q.push(15);
  q.push(25);
  cout << q.size() <<endl;
  while(! q.empty()){
    cout << q.front()<<"/"<<q.back()<<endl;
    q.pop();
  }

  cout << q.size() <<endl;

    return 0;
}
