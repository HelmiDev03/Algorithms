#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, n,x,y;
    bool ch = false;
    string s ;
    cin >> t;

    while (t--)
    {
        ch = false;
        x=0;
        y=0;
      cin >>n;
      cin >>s;
      for (char i:s){
        if (i=='L') {
            x-=1;
        }
        else if (i=='R') {
            x+=1;
        }
        else if (i=='U'){
            y+=1;
        }
        else
           y-=1 ;
        if (x==1 && y==1)  {
            ch=true;
            break ;
        }

      }

      if (ch)
               cout <<"YES"<<endl;
         else
             cout <<"NO"<<endl ;      
        
    }

    return 0;
}
