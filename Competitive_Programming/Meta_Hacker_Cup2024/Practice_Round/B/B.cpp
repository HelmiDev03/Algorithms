

#include <bits/stdc++.h>
using namespace std;


int main() {
    ifstream infile("in.txt");  
    ofstream outfile("out.txt" , ios::trunc); 
    int t,index=1;
    double p,n,result ;
    infile >> t;
        while(t--) {
              infile >> n >>p  ;
              result = 100.0 * pow(0.01*p,(n-1)/n) - p ;
              outfile << fixed << setprecision(8);
              outfile <<"Case #"<<index++<< ": "<<result<<endl ;             

        }

    return 0;
}