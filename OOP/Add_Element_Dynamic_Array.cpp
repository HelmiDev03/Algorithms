/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;
class a{
    public:
    int x;
    a(int aa){
        x=aa;
        cout <<"a param constructor called "<<endl;
    }
    a(){
        x=0;
        cout << "a default constructor called "<<endl;
    }
    
};
class collectiona{
    public:
    int nba;
    a *table;
    void add(a *el){
        if (nba==0){
            *table=*el;
        }
        else{
            a *t=new a[++nba];
            for (int i=0;i<nba;i++){
                *(t+i)=*(table+i);
            }
            table=t;
            delete []t;
           *(table+nba-1)=*el;
        }
        
    }
    collectiona() {
        nba=0;
        table=new a;
    }
    ~collectiona(){
        delete [] table;
    }
    
};
int main()
{
    int nb;
    collectiona c1;
    cout<<"donner nb element"<<endl;
    cin>>nb;
    for (int i=0;i<nb;i++){
        cout <<"donner valeur x de lement numéro "<<i+1<<endl;
        int v;
        cin>>v;
        a newel(v);
        c1.add(&newel);
    }
    int  s=0;
    for (int i=0;i<c1.nba;i++)
    s+=((c1.table)+i)->x;
    cout <<"somme = "<<s<<endl;
   
 
   
    

    return 0;
}
