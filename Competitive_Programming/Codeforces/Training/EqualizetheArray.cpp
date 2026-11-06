#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    map<int, int> occ;
    map<int, int> occocc;
    vector<pair<int, int>> vec;
    cin >> t;

    while (t--)
    {
        cin >> n;
        occ.clear();
        occocc.clear();
        vec.clear() ;
        int tab[n];
        for (int i = 0; i < n; i++)
            cin >> tab[i];

        for (int i = 0; i < n; i++)
        {
            if (occ.find(tab[i]) != occ.end())
                occ[tab[i]]++;
            else
                occ[tab[i]] = 1;
        }

        for (map<int, int>::iterator it = occ.begin(); it != occ.end(); it++)
        {

            if (occocc.find(it->second) != occocc.end())
                occocc[it->second]++;
            else
                occocc[it->second] = 1;
        }

        for (auto &entry : occocc)
        {
            vec.push_back(entry);
        }

        int ans = INT_MAX; 
        int kolwehed ;  

      
        for (int i = 0; i < vec.size(); i++)
        {
            kolwehed = 0 ;
            for (int j = 0; j < vec.size(); j++)
            {
                if (i == j)
                {
                    continue;
                }
                else if (vec[i].first < vec[j].first)
                {
                    kolwehed += ((vec[j].first) - (vec[i].first)) * (vec[j].second);
                }
                else
                {
                    kolwehed += (vec[j].first) * (vec[j].second);
                }
                
            }
            ans = min(ans, kolwehed);
        }
        cout << ans << endl;
    }
    return 0;
}
