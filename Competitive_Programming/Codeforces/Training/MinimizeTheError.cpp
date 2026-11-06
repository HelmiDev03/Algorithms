#include <bits/stdc++.h>
using namespace std;

vector<long long > getdiff(long long  a[], long long  b[] ,int size)
{
    vector<long long > ans;
    for (int i = 0; i < size; i++)
        ans.push_back(abs(a[i] - b[i]));
    return ans;
}

int main()
{
    int n, k1, k2;
    vector<long long > diff;
    cin >> n>>k1>>k2;
    long long  a[n], b[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];

 diff = getdiff(a, b,(sizeof(a) / sizeof(a[0])));
    while (k1 || k2)
    {
       
        if (!accumulate(diff.begin(), diff.end(), 0))
        {
            if ((k1+k2) % 2 == 0)
                 cout << 0<<endl ;
            else
                 cout << 1<<endl ;     
            return 0;
        }

        int i = max_element(diff.begin(), diff.end()) - diff.begin();

        if ((a[i] < b[i]) && k2)
        {
            
                k2 --;
                b[i] --;
            
        }
        else if ((a[i] < b[i]) && k1)
        {
            
            
                k1 --;
                a[i] ++;
            
            
        }
        else if (((a[i] > b[i]) && k1))
        {
          
                k1 --;
                a[i] --;
            
           
        }
        else if ((a[i] > b[i]) && k2)
        {
            
                k2 -- ;
                b[i] ++;
            
          
        }

        diff[i] = abs(a[i] - b[i]);
    }

    long long  ans = 0;
    for (int i = 0; i < n; i++)
         ans += (a[i] - b[i]) * (a[i] - b[i]);
    cout <<ans <<endl ;     

    return 0;
}
