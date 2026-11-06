#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    vector<vector<int>> B(m, vector<int>(n, 0));
    vector<vector<int>> A(m, vector<int>(n, 1));

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> B[i][j];
        }
        
    }
    

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int p = B[i][j];
            if (p == 0)
            {
                for (int x = 0; x < n; x++)
                {
                    A[i][x] = 0;
                }
                for (int y = 0; y < m; y++)
                {
                    A[y][j] = 0;
                }
            }
        }
    }

   

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
              
         
                 if( B[i][j] ==1 )                  { 
                    
                int sumRow = 0 ;
                for (int x = 0 ; x<n ; x++)   
                     sumRow +=A[i][x];
                                              

                int sumColumn = 0 ;
                 for (int y = 0 ; y<m; y++)   
                     sumColumn+= A[y][j] ;

                      if (sumColumn + sumRow ==0) {
                         cout << "NO"<<endl;
                         return 0 ; 
                      }
                       
                                              
                          
                                              

                           
                                                        }
                         
                 
          
                 
        }
        }


  cout << "YES"<<endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << A[i][j]<<" ";
        }
        cout <<endl  ; 
    }

    return 0;
}
