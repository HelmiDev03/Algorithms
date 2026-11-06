#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t, n, h1, h2, h3;
    bool check  ;
    cin >> t;

    while (t--)
    {
        cin >> n;
        check = true ;
        h1 = 0;
        h2 = 0;
        h3 = 0;
        int in = 3;
        int r;
        while (check)
        {
            h1 = in++;
            r = n - h1;
            
            if (r <= 2 * h1)
            {
                h2 = h1 - 1;
                h3 = r - h2;
                

                    while (h2 > h3)
                    {
                        if (h3!=0)
                        {
                            cout << h2 << " " << h1 << " " << h3 << endl;
                            check = false ;
                            break ;
                        }
                        else
                        {
                            h2--;
                            h3 = n - h1 - h2;
                        }
                    }
            
            }

            
        }
    }
return 0;
}