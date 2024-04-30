#include <iostream>
#include <string.h>
using namespace std;

class vecteur {
    float x,y,z;
public:
    vecteur(){
        x=0;
        y=0;
        z=0;
    }
    vecteur(float a , float b , float c) {
        x=a;
        y=b;
        z=c;
    }
    ~vecteur(){}
    void affiche(){
        cout << "x = "<<x <<" and y = "<< y<<" and z = "<<z <<endl;
    }
    vecteur operator + (vecteur b){
    return vecteur(x+b.x,y+b.y,z+b.z);
    }
    vecteur operator * (vecteur b){
        vecteur res(0,0,0);
        res.x=x*(b.x)+x*(b.y)+x*(b.z);
        res.y=y*(b.x)+y*(b.y)+y*(b.z);
        res.z=z*(b.x)+z*(b.y)+z*(b.z);
        return res;
    }
    vecteur operator * (int ent){
        return vecteur  (x*ent,y*ent,z*ent);
    }
    bool operator == (vecteur b){
        if (x==b.x && y==b.y && z==b.z)
            return true;
        else
            return false;
    }
    bool operator != (vecteur b){
        if (x==b.x && y==b.y && z==b.z)
            return false;
        else
            return true;
    }




};
int main (){
    vecteur *v1=new vecteur(1,2,3);
    vecteur *v2=new vecteur(0,1,2);
    vecteur v3 =*v1+*v2;
    vecteur v4=*v1*(*v2);
    cout << "somme de v1 et v2 est ";
    v3.affiche() ;
    cout <<endl;
    cout << "produit de v1 et v2 est ";
    cout <<endl;
    v4.affiche();
    cout <<"produit de vecteur v1 par 3 est "<<endl;
    (*v1*3).affiche();
    cout <<endl;
    if (*v1!=*v2)
        cout << "v1 et v2 sont differents"<<endl;
    else
        cout << "v1 et v2 sont identiques"<<endl;


   delete v1;
   delete v2;
    return 0;

}