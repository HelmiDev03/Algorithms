
#include <iostream>


using namespace std;
class adad {
    public:
    int x;
    adad(int z){
        x=z;
    }
    adad operator + (adad a);
    adad operator + (int a);
    adad operator - (adad a);
    adad operator - (int a);
    adad operator * (adad a);
    adad operator * (int a);
    adad operator / (adad a);
    adad operator / (int a);
    bool operator == (adad a);
    bool operator == (int a);
    bool operator != (adad a);
    bool operator != (int a);
    bool operator > (adad a);
    bool operator > (int a);
    bool operator < (adad a);
    bool operator < (int a);
    adad operator ++ ();
    adad operator ++(int);
    int somme (int x , int y);
    void somme(int x ,int y,int o ,int q);
    int somme(int x, int y , int z);    
    double somme (double x, double y);
    /*fl methode overloading everything is permetted unless  [trying to overload just by changing the 
    return type without changing anything else ]*/
};
int adad::somme(int x,int y){
    return x+y;
}
int adad::somme(int x,int y,int z){
    return x+y+z;
}
double adad::somme(double x, double y){
    return (x+y);
}
adad adad::operator +(adad a){
    return adad (x+a.x);
}
adad adad::operator +(int a){
    return adad (x+a);
}
adad adad::operator -(adad a){
    return adad (x-a.x);
}
adad adad::operator -(int a){
    return adad (x-a);
}
adad adad::operator *(adad a){
    return adad (x*a.x);
}
adad adad::operator *(int a){
    return adad (x*a);
}
adad adad::operator /(adad a){
    return adad (x/a.x);
}
adad adad::operator /(int a){
    return adad (x/a);
}
adad adad ::operator ++(){
    return adad(++x);
}
adad adad ::operator ++(int){
    return adad(x++);
}

bool adad::operator ==(adad a){
    if (x==a.x)
        return 1;
    else
        return 0;

}
bool adad::operator == (int a){
    if (x==a)
        return 1;
    else
    return 0;
}
bool adad::operator != (adad a){
    if (x!=a.x)
        return true;
    else
    return false;
}
bool adad::operator != (int a){
    if (x=a)
        return true;
    else
    return false;
}
bool adad::operator > (adad a){
    if (x> a.x)
        return true;
    else
    return false;
}
bool adad::operator > (int a){
    if (x>a)
        return true;
    else
    return false;
}
bool adad::operator < (adad a){
    if (x<a.x)
        return true;
    else
    return false;
}
bool adad::operator < (int a){
    if (x<a)
        return true;
    else
    return false;
}

int main()
{
    adad a (5),b(7);
    cout << a.somme(4.8, 5.6)<<endl;
    return 0;
    /* if she was all women for nizar , for me it's the whole world */
}
