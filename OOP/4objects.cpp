#include <iostream>
#include<math.h>

using namespace std;
class forme{
    public:
    int x,y,z;
    float volume,poids,densite;
    public:
    void bouger(int d);
    float calculpoids();
    void affiche();
    void init(int xx,int yy,int zz,float p , float d);
    void setvolume(float v);
    
};
void forme::setvolume(float v){
   volume=v;
}
void forme::affiche(){
    cout << "centre de gravite (x =  "<< x <<" | y = "<<y<<" | z = " <<z<<" ) "<<endl;
    cout << "volume : "<<volume << " , poids : "<<poids <<" ,  densite : "<<densite<<endl;
}
void forme::init(int xx,int yy,int zz,float p , float d){
     x=xx;
     y=yy;
     z=zz;
     poids=p;
     densite=d;
     
    }
class boule:public forme{
   float rayon;
   public:
   void init(int xx,int yy,int zz,float v , float d,float r);
   void affiche();
   void calculpoids();
};
void boule::init(int xx,int yy,int zz,float v , float d,float r){
    forme::init(xx,yy,zz,v,d);
    rayon=r;
}
void boule::affiche(){
    forme::affiche();
    cout <<"rayon : "<<rayon<<endl;
}
void boule::calculpoids(){
    setvolume(1.33*rayon*rayon*rayon*3.14);
}
class brique:public forme{
    float largeur,longueur,hauteur;
    public:
    void init(int xx,int yy,int zz,float v , float d,float l,float ll,float lll);
    void affiche();
    void calculpoids();
};
void brique::init(int xx,int yy,int zz,float v , float d,float l,float ll,float lll){
    forme::init(xx,yy,zz,v,d);
    largeur=l;
    longueur=ll;
    hauteur=lll;
}
void brique::affiche(){
    forme::affiche();
    cout <<"longueur =  " << longueur<< " | largeur = "<<largeur<< " hauteur == "<<hauteur<<endl;
}
void brique:: calculpoids(){
    setvolume(longueur*largeur*hauteur);
}
class cube:public brique{
    
};
class cyleindre:public forme{
    float hauteur , rayon;
    public:
    void init(int xx,int yy,int zz,float v , float d,float h,float r);
    void affiche();
    void calculpoids();
};
void cyleindre::init(int xx,int yy,int zz,float v , float d,float h,float r){
    forme::init(xx,yy,zz,v,d);
    hauteur=h;
    rayon=r;
}
void cyleindre::affiche(){
    forme::affiche();
    cout <<"hauteur =  " << hauteur<< " | rayon = "<<rayon<<endl;
}
void cyleindre:: calculpoids(){
    setvolume(rayon*rayon*3.14*hauteur);
}

int main()
{
  cout <<"Objet Boule "<<endl;    
  boule b1;
  b1.init(3,4,5,6.2,4.9,55);
  b1.calculpoids();
  b1.affiche();
  cout <<"Objet Cyleindre "<<endl;  
  cyleindre c1;
  c1.init(3,4,5,6.2,4.9,3,4);
  c1.calculpoids();
  c1.affiche();
  cout <<"Objet Brique "<<endl;  
  brique br1;
  br1.init(3,4,5,6.2,4.9,5,7,9);
  br1.calculpoids();
  br1.affiche();
  cout <<"Objet Cube "<<endl;  
  cube  cb1;
  cb1.init(3,4,5,6.2,4.9,7,7,7);
  cb1.calculpoids();
  cb1.affiche();
  
    return 0;
}
