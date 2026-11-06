#include <bits/stdc++.h>
using namespace std;
const int N = 2 * 1e5 + 7 ;

 
void CumulativeSum(int t[])
{
    for (int i = 1; i <=N; i++)
        t[i] += t[i - 1];
}
 
int main()
{
    int n, k, q, a, b;
    int tab[N];
    memset(tab, 0, sizeof(tab));
    cin >> n >> k >> q;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        tab[a]++;
        tab[b + 1]--;
    }
 
    CumulativeSum(tab);
 
    for (int i = 0; i <= N; i++)
    {
        if (tab[i] < k)
            tab[i] = 0;
        else
            tab[i] = 1;
    }
 
    CumulativeSum(tab);


    
             

    for (int i = 0; i < q; i++)
    {
        cin >> a >> b;
       
        cout << tab[b] - tab[a - 1] << endl;
    }

    return 0;
}