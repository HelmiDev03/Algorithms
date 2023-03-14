#include <iostream>
#include <string.h>
using namespace std;
char sexhomme[20]="Homme";
char sexfemme[20]="Femme";
class produit{
    float prix;
    char* nom;
    char*sexe;
    public:
    produit(float p , char* n);
    produit();
    ~produit();
    void setsexe(char *s);
    void affiche();
    char* getsexe();
};
produit::produit(){}
produit::produit(float p , char* n){
    nom=new char[strlen(n)];
    sexe=new char[15];
    strcpy(nom,n);
    prix=p;
    cout << "appel cp produit"<<endl;
}
void produit::setsexe(char* s){
    strcpy(sexe,s);
}
void produit::affiche(){
    cout<< "Nom_Produit : "<<nom <<" | Prix_Produit : "<<prix<<"Euro | "<<endl;
}
char* produit::getsexe(){
    return sexe;
}
produit::~produit(){
    delete []nom;
    cout << "appel destructeur produit"<<endl;
}
class produitmasculine:public produit{
    char * type_homme;
    public:
    produitmasculine(float p , char* n,char* type);
    void affiche();
    ~produitmasculine();
};
produitmasculine::~produitmasculine(){
    cout << "appel destructeur produitmasculine"<<endl;
    delete [] type_homme;
}
produitmasculine::produitmasculine(float p , char* n,char* type):produit(p,n){
    type_homme = new char [strlen(type)];
    strcpy(type_homme,type);
    setsexe(sexhomme);
    cout << "appel cp produitmasculine"<<endl;
}
void produitmasculine::affiche(){
    produit::affiche();
    cout <<"Destiné_Pour_ "<<getsexe() <<" | Pour_Type_Homme : "<<type_homme<<endl;
}
class produitfeminine:public produit{
    char * type_femme;
    public:
    produitfeminine(float p , char* n,char* type);
    void affiche();
    ~produitfeminine();
};
produitfeminine::produitfeminine(float p , char* n,char* type):produit(p,n){
    type_femme = new char[strlen(type)];
    strcpy(type_femme,type);
    setsexe(sexfemme);
    cout << "appel cp produitfeminine"<<endl;
}
void produitfeminine::affiche(){
    produit::affiche();
    cout <<"Destiné_Pour_ "<<getsexe() <<" | Pour_Type_Femme : "<<type_femme<<endl;
}
produitfeminine::~produitfeminine(){
    cout << "appel destructeur produitfeminine"<<endl;
    delete [] type_femme;
}
int main()
{
    /* 1:  Cats Path (For Istic Student With All My Respect !)
    char x[20]="Gilette";
    char x1[20]="HommeClasse";
    produitmasculine p1(24.5, x , x1);
    p1.affiche();
    char y[20]="Robe";
    char y1[20]="FemmeClasse";
    produitfeminine p2(80, y , y1);
    p2.affiche();
    cout << "Lwadh3 Mahouch Zabour Hata Taref"<<endl;*/
    
    /*2 : Dragons Path (For People Like Helmi With All My Respect Also ! )*/
    
    int n ;
    cout << "Donner le nombre de produit"<<endl;
    cin >>n;
    produit *table=new produit[n];
    for (int i=0 ;i<n;i++){
        cout << "Pour Le Produit Numero "<<i+1<<" , Taper 1 S'il  Est Destiné Pour un Homme et 2 Pour Une Femme " <<endl;
        int v;
        cin >> v;
        float p ;
        cout << "taper le prix de produit "<<endl;
        cin >> p;
        char n[20];
        cout << "tper le nom de produit "<<endl;
        cin >>n;
        char t[20];
        if (v==1){
            cout << "tper le type d'homme "<<endl;
            cin >> t;
            produitmasculine *object=new produitmasculine(p,n,t) ;
            *(table+i)=*object;
        }
        else{
            cout << "tper le type de femme "<<endl;
            cin>>t;
            produitfeminine *object=new produitfeminine(p,n,t)  ;
            *(table+i)=*object;
        }
    }
    for (int i=0 ;i<n;i++){
        cout <<"Info Produit Numero "<<i+1<<endl;
        (table + i)->affiche();
    }
    /*houni juste j'ai éleminé l'attribut type_sexe puisque je veux regroupper deux classes non liées en un seul tableau dynamique (dsl fel istic mazelet mawesletlnech l VECTOR )*/
    /*tesbahaalakhir ay */
    return 0;
}
