#include <bits/stdc++.h>
using namespace std;



bool binarySearch(vector <int> v , int x ){
    
    int right=  v.size() -1 ; 
    int left = 0 ; 
    int mid = (right + left ) / 2 ;
    while (right >= left ){
        if( v[mid]==x)
            return true;
        else if (v[mid]> x)  {
            right = mid - 1 ;
            mid = (right + left ) / 2 ;
        }
            
        else {
            left = mid + 1 ;
            mid = (right + left ) / 2 ;
        }
            

                           }
     return false;                       

}
bool RecursivebinarySearch(vector<int> v, int x, int left, int right) {
    if (left > right)
        return false;

    int mid = (right + left) / 2;  // Calculate mid once

    if (v[mid] > x)
        return RecursivebinarySearch(v, x, left, mid - 1);  // Search in the left half
    else if (v[mid] < x)
        return RecursivebinarySearch(v, x, mid + 1, right);  // Search in the right half
    else
        return true;  // Found the element
}



int main() {
    vector <int> v = {5,4,9,6,7,1,2,5} ;
    sort(v.begin(), v.end()) ;

    cout << binarySearch(v, 77)<<endl;
    cout << RecursivebinarySearch(v, 7 , 0 , v.size()-1)<<endl;
    cout << binary_search(v.begin(), v.end() , 7)<<endl;
    reverse(v.begin(), v.end());
    
    for (vector <int> ::iterator   it = v.begin() ; it!= v.end();it++){
             cout <<*it <<"|"     ; 
   }

   cout << "****"<<endl;
   cout << v.begin() + 1    -  v.begin() <<endl ; 
    return 0;
}
