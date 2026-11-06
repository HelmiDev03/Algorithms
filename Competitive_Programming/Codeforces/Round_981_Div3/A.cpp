#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define optimize_io() ios_base::sync_with_stdio(false); cin.tie(nullptr)

void execute_case() {
    int n;
    cin >> n;
    int x = 0 , y =0;
    int i=1;
    while(true) {
        y=x;
        x+= pow(-1, i ) * (2 *i -1);
        if (x>n || x<-n) break;
        i++;
    }
 

    if (x==0) {
        cout<<"Sakurako"<<endl; 
    }
    
    else if (x>y) {
        cout<<"Kosuke"<<endl;
    }
    else {
        cout<<"Sakurako"<<endl;
    }
}

int main() {
    optimize_io();
    ll test_cases;
    cin >> test_cases;

    while (test_cases--) {
        execute_case();
    }

    return 0;
}
