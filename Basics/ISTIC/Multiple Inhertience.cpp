#include <iostream>
#include <string.h>
using namespace std;
class person{
    string name;
    int age;
    public:
    person(){cout<<"Default Constructor Of person is called"<<endl;}
    person(string nom , int ag){
        name=nom;
        age=ag;
        cout<<"Parametred Constructor Of person is called"<<endl;
    }
    void display(){
        cout << "Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
    }
};
class employe{
    string Depart;
    int Word_Hours;
    public:
    employe(){cout<<"Default Constructor Of employe is called"<<endl;}
    employe(string d , int w){
        Depart=d;
        Word_Hours=w;
        cout<<"Parametred Constructor Of employe is called"<<endl;
    }
    void display(){
        cout << "Departement : "<<Depart<<endl;
        cout<<"Hours Of Work : "<<Word_Hours<<endl;
    }
    
}    ;
class teacher:public person,public employe{
    string function;
    public:
    teacher(){cout<<"Default Constructor Of teacher is called"<<endl;}
    teacher(string nom , int ag,string d, int w,string f):person(nom,ag),employe(d,w){
    function=f;
    cout<<"Parametred Constructor Of teacher is called"<<endl;
    }
    void display(){
        person::display();
        employe::display();
          cout << "Function : "<<function<<endl;;
    }
    
    
};
    
 int main(){
     teacher x("Helmi",24,"IT",8,"Cyber_Security_Analysist");
     x.teacher::display();
     
 }
