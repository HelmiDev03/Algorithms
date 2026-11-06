#include <bits/stdc++.h>
using namespace std;

int main() {
 
 ios::sync_with_stdio(false);
 
 cin.tie(nullptr);

  
  freopen("input.txt", "r", stdin);
    
freopen("output.txt", "w", stdout);

 int T;
 cin >> T;
 
   
    int caseNo = 1;


 while (T--) {
       
 long long N;
        int M;
        cin >> N >> M;

   
        bool quickWin = (M >= 3) && (N >= M) && (N <= 2LL * M - 3);


     
        bool deuceWin = (N >= 2LL * M - 2) && (N % 2 == 0);


       
        bool ok = quickWin || deuceWin;

        
 cout << "Case #" << caseNo++ << ": " << (ok ? "YES" : "NO") << "\n";
 }

 return 0;
}