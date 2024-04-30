using namespace std;
class cercle {
private:
    float rayon;
    float x,y;
public:
    cercle(float r) {
        rayon = r;
    }
    ~cercle() {
        cout << "Destruction de l'objet cercle" << endl;
    }
    void setcentre(float a, float b) {
        x = a;
        y = b;
    }
    double perimetre() {
        return 2 * 3.14 * rayon; /* 2 pi chou33a */
    }
    double surface() {
        return 3.14 * rayon * rayon;/*chou3a3 fi chou3a3 fi pi*/
    }
    void affiche() {
        cout << "Centre : (" << x << "," << y << ")" << endl;
        cout << "Rayon : " << rayon << endl;
        cout << "Perimetre : " << perimetre() << endl;
        cout << "Surface : " << surface() << endl;
    }
};
class vecteur {
private:
    int x, y, z;
public:
    vecteur (int a, int b, int c) {
        x = a;
        y = b;
        z = c;
    }

    ~vecteur () {
        cout << "Destruction de l'objet vecteur" << endl;
    }

    void affiche () {
        cout << "Vecteur : (" << x << "," << y << "," << z << ")" << endl;
    }


    friend bool comparer (vecteur v1, vecteur v2);
    /*static void affichee(){
        cout<<"helmi"<<endl;
    }*/
};

bool comparer(vecteur v1,vecteur v2){
    if(v1.x==v2.x && v1.y==v2.y && v1.z==v2.z)
        return true;
    else
        return false;
}
int main() {
    cercle *c = new cercle(5);
    c->setcentre(1, 2);
    c->affiche();
    delete c;
    vecteur v1(4,5,6);
    vecteur v2(4,5,6);
    /* vecteur::affichee();*/
       if(comparer(v1,v2))
            cout<<"Les deux vecteurs sont identiques"<<endl;
        else
            cout<<"Les deux vecteurs sont differents"<<endl;

    return 0;

}
/*
#define N 5
class Donnees
{
public:
    double *x ;
    double max();
    double moyenne();

    double somme();
    Donnees();
    Donnees(double x0,int l);
    ~Donnees();
};
Donnees::Donnees(){
    x = new double;
    for (int i = 0; i < N; ++i) {
        *(x+i)=0;
    }
}
Donnees::Donnees(double x0,int l){
    x = new double[l];
    for (int i = 0; i < N; ++i) {
        *(x+i)=x0;
    }
}
Donnees::~Donnees() {
    cout<<"destruction"<<endl;
    delete [] x;
}
double  Donnees::somme()
{ double som=x[0];;

    for(int i=1 ;i<N ;i++)
    {
        som=som+x[i] ;
    }

    return som;
}


double Donnees::max()
{
    double m = x[0];
    for (int i = 1; i < N; i++)
        if (x[i] > m)
            m = x[i];
    return m;
}
double Donnees::moyenne()
{
    double  M;
    M=somme()/N;
    return M;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    Donnees *d = new Donnees(5,5);
    for (int i = 0; i < N; i++)
        d->x[i] = 3 + 2 * i - i * i;

    cout << "Max = " << d->max() << "\n";
    cout << "moyenne= "<< d->moyenne();
}*/
