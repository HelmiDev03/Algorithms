#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int v[3];
        for (int i = 0; i < 3; i++) {
            cin >> v[i];
        }

      
        sort(v, v + 3);
        
       
        if (v[2] + v[1] < 10)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    
    return 0;
}
