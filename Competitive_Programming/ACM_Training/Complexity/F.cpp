#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

void Solve()
{
    ll n, q;
    string a, b ;
    ll l, r;
    cin >> n >> q;
    vector<vector<int>> cuma(26, vector<int>(n, 0));
    vector<vector<int>> cumb(26, vector<int>(n, 0));
    cin >> a;
    cin >> b;
    for (int i = 0; i < n; i++)
    {
        cuma[a[i] - 'a'][i]++;
        cumb[b[i] - 'a'][i]++;
    }
    for (int i = 0; i < 26; i++)
    {
        for (int j = 1; j < n; j++)
        {
            cuma[i][j] += cuma[i][j - 1];
            cumb[i][j] += cumb[i][j - 1];
        }
    }

    

    int freqA = 0;
    int freqB = 0;
    int s = 0 ;
    for (int i = 0; i < q; i++)
    {
        cin >> l >> r;
        s = 0;
        
        for (char  i ='a' ; i<='z' ; i++)
        {
              
                
                if (l> 1)
                {
                    
                    freqA = cuma[i-'a'][r - 1] - cuma[i-'a'][l - 2];
                    freqB = cumb[i-'a'][r - 1] - cumb[i-'a'][l - 2];
                }
                else
                {
                   
                    freqA = cuma[i-'a'][r - 1];
                    freqB = cumb[i-'a'][r - 1];
                   
                }
              
            s+= abs(freqA-freqB) ;
            
            
        }
        cout <<s/2<<endl;
    }

}

int main()
{
    int t;
    cin >> t;
    while (t--)
        Solve();
}
