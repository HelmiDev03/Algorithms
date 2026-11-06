/* #include <bits/stdc++.h>
using namespace std;


int main() {
    ifstream infile("in.txt");  
    ofstream outfile("out.txt" , ios::trunc); 
    int t,n ,index=1;
    long long si ,c,k ;
    vector<long long> v ;
    infile >> t;
        while(t--) {
             infile >> n >>k  ;
             v.clear() ; 
             c=0 ;
             for (int i = 0 ; i<n ; i++) {
                    infile >>si ;
                    v.push_back(si);
             }
             sort(v.begin() , v.end())  ;

             while(v.size()>2) {
                c+=2*v[0];
                v.erase(v.end()-1) ; 
             }

             c+=v[0];
             if (c<=k)
                     outfile <<"Case #"<<index++<< ": YES"<<endl ;
             else
                     outfile <<"Case #"<<index++<< ": NO"<<endl ;     

                    

        }

    return 0;
}
*/
//beter aaprocah

#include <bits/stdc++.h>
using namespace std;


int main() {
    ifstream infile("in.txt");  
    ofstream outfile("out.txt" , ios::trunc); 
    int t,n ,index=1;
    long long si ,k  , little_si ;
    infile >> t;
        while(t--) {
             infile >> n >>k  ;
             little_si = 1e9 +1 ;
             for (int i = 0 ; i<n ; i++) {
                    infile >>si ;
                    little_si = min(little_si ,si) ;
             }
             if (little_si*(2*n -3 )<=k)
                     outfile <<"Case #"<<index++<< ": YES"<<endl ;
             else
                     outfile <<"Case #"<<index++<< ": NO"<<endl ;     

            
        }



    return 0;
}