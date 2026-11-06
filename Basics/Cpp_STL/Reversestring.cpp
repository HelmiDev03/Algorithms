#include <bits/stdc++.h>
using namespace std;






string revrseString(string s ){
    stack<char> st; 
    for (char c  : s )
        st.push(c);
    string o ="" ;
    while ( ! st.empty()) {
        o+=st.top();
        st.pop();
    }
    return o ; 
}





int main() {
     cout << revrseString("helmi");

    return 0;
}
