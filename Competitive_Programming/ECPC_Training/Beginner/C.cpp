#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int tab[3];
        for (int i = 0; i < 3; i++) {
            cin >> tab[i];
        }

      
        sort(tab, tab + 3);
        
       
        if (tab[2] + tab[1] >= 10)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    
    return 0;
}
