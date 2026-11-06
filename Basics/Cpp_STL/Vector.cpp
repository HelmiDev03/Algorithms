#include <bits/stdc++.h>
using namespace std;

int main() {
vector <int> d ;
vector <int> x(10) ;
vector <int> v(10,5);
cout <<d.size() <<endl;
d.push_back(5);
d.push_back(2);
cout << d.front() << " " << d[0] <<d.at(0) <<endl;
cout << d.back() <<d[d.size()-1]<<d.at(d.size()-1) <<endl;
d.push_back(22);
d.push_back(288);
cout << "ladress mta3 awel element mawjouda fi l espace memoir .begin() ,  "  << d.front() << " heya : " << *d.begin() <<endl ; 
cout << "ladress mta3 ekher element mawjouda fi l espace memoir .end()-1 ,  "  << d.front() << " heya : " << *(d.end() -1) <<endl ; 


//v.back()  , v.at(indice) , v[indice]  ,  : traja3 ekher el
//push_back(adad) tzid fi ekher blasas adad
//v.front()   , d[0] , d.at(0) : traja3 awel element
//pop_back() : tnahi ekher elementsort
vector <int> ::iterator it ;
v.insert(v.end() ,9) ;
for ( it = v.begin() ; it!= v.end();it++){
             cout <<*it <<endl     ; 
}
cout<<"*****"<<endl ;
v.erase(v.end() -1) ;
for ( it = v.begin() ; it!= v.end();it++){
             cout <<*it <<endl     ; 
}
 if (find(v.begin(), v.end(), 5) != v.end()) {
        std::cout << "Element " << 5 << " is in the vector." <<std::endl;
    } else {
        std::cout << "Element " << 5 << " is not in the vector." <<endl;
    }
    cout <<*find(v.begin(), v.end(), 5) ;

//v.begin() heya ladress mta3 element fel pos 0 
// v.begibn() + i heya l adresse mta elmeent fel pos i
//v.end() -1   heya l adress mta ekher element 



    return 0;
}
