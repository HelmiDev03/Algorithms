#include <bits/stdc++.h>
using namespace std;

bool compare(int x , int y) {
        if (! x % 2 && ! y % 2 ){
            return x > y ; 
        } 
        else if (! x % 2 )
        return x >  y;
        else return x <  y;
        
    }

int main() {
    int arr[]={5555,9,1,4,7,8};
    int n = sizeof(arr)/sizeof(arr[0]);

    

    sort(arr+1 , arr+ n, less<int>() );
    /*
    sort(adress awel elment , adress ekher el +1  , less<type>)
    e default heya less<type> sinon greater<type>
    */
    //
    for (int i = 0 ; i< n ; i++) {
        cout << arr[i] << "|"; 
    }
    cout <<endl ; 


    vector<int> v = {5 ,4  , 9 };
    vector<string> vv = {"aa" , "rrr"}  ;
    sort(v.begin() , v.end(),  compare) ;
    for (int i = 0 ; i<v.size();i++){
        cout << v[i] << "|"; 
    }
     

    return 0;
}
