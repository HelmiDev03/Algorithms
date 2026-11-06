#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n;
    int aii ,f, c, sum = 0, diff;
    double ai ;
    vector<int> cei;
    vector<int> floo;
    cin >> n;
    for (int i = 0; i < n; i++)
    {    
        cin >>aii;
        ai = static_cast<double>(aii);
        f = floor(ai / 2);
        c = ceil(ai / 2);
        cei.push_back(c);
        floo.push_back(f);
        sum += f;
    }

    if (sum != 0)
    {
        int current_sum = 0;
        for (int i = 0; i < n; i++)
        {
            diff = cei[i] - floo[i];
            if (diff != 0)
            {

                current_sum += diff;
                floo[i] = cei[i];

                if (current_sum + sum == 0)
                    break;
            }
        }
    }

    for (int i = 0; i < n; i++)
        cout << floo[i] << endl;



    return 0;
}