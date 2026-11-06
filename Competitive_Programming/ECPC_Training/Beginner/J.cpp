#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, n, x, et, l, r;
    cin >> t;

    while (t--)
    {
        cin >> n >>x;
        if (n <= 2) {
            cout << 1 << endl;}
        else
        {
            et = 2;
            int ii = 3;
            l = ii + x -1 ;

            while ( n > l) {
                et++;
                ii=l+1;
                l = ii +x -1 ;
            }
            cout <<et<<endl  ;
        }

        
    }

    return 0;
}
