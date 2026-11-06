#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    string dir;

    while (t--)
    {
        cin >> dir;
        pair<int, int> pos = make_pair(0, 0);
        pair<int, int> prec = make_pair(0, 0);
        pair<pair<int, int>, pair<int, int>> segment;
        pair<pair<int, int>, pair<int, int>> segmentinverse;
        set<pair<pair<int, int>, pair<int, int>>> path;
        int t = 0;
        for (char s : dir)
        {
            prec = pos;
            if (s == 'N') 
            
                pos.second += 1;
                else if (s == 'S')
                    pos.second -= 1;
                else if (s == 'W')
                      pos.first += 1;
                
                 else 
                 pos.first -= 1;

                segment = make_pair(prec, pos);
                segmentinverse = make_pair(pos, prec);
                if (path.find(segment) != path.end() && path.find(segmentinverse) != path.end()) {
                   
                t += 1;}
            
            else
            {
                 path.insert(segment);
                   path.insert(segmentinverse);
                t += 5;
            }
        }

        cout << t << endl;
        
    }

    return 0;
}
