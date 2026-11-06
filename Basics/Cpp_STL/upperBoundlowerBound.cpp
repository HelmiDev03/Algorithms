#include <bits/stdc++.h>
using namespace std;


int main() {
    vector <int> v = {2,5,7,9,66,444} ;


    vector <int> ::iterator   upper1 , upper2 ,upper3 ,upper4; 
    upper1 = upper_bound(v.begin() , v.end() , 5 );
    upper2 = upper_bound(v.begin() , v.end() , 2 );
    upper3 = upper_bound(v.begin() , v.end() , 7 );
    upper4 = lower_bound(v.begin() , v.end() , 7 );

    cout << "upper bound position for 5 is " << upper1  - v.begin()<<endl;
    cout << "upper bound position for 2 is " << upper2  - v.begin()<<endl;
    cout << "upper bound position for 7 is " << upper3  - v.begin()<<endl;
    cout << "lower bound position for 7 is " << upper4  - v.begin()<<endl;
    //upper bound : tatik awel el akber >
    //lower bound ttaik awel el akber aw yousewi 

    
   cout << v.begin() + 1    -  v.begin() <<endl ; 
    return 0;
}
