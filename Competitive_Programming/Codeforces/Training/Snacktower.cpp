#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, target, neww;
    cin >> n;
    vector<int> t(n);


    for (int i = 0; i < n; i++)
        cin >> t[i];


    target = n;
    vector<int> wait;

    for (int i = 0; i < n; i++) {
        neww = t[i];
        if (neww == target) {
            cout << neww << " ";
            target--;


            while (!wait.empty() && wait.back() == target) {
                cout << wait.back() << " ";
                wait.pop_back();
                target--;
            }
            cout << endl;
        } else {

            wait.push_back(neww);
            cout << endl; 
        }
    }

    return 0;
}
