using namespace std;
#define Max 50
class matrice{
    private:
    int row,column;
    int tab[Max][Max];
    public:
    matrice(int r , int c ){
        row=r;
        column=c;
    }
    ~matrice(){
        cout <<"Au Revoir " <<endl;
    }
    void saisir(){
        int i,j;
        cout <<"Saisi la matrice "<<endl; 
        for (i=0;i<row;i++){
            for (j=0;j<column;j++){
                cout <<"Tab["<<i<<"]["<<j<<"] : " ;
                cin >> tab[i][j];
            }
        }
    }
    
    matrice operator + (matrice m){
        int tmp[row][column];
        matrice x(row,column);
        int i,j;
        if ((row=m.row) and (column=m.column)){
            for (i=0;i<row;i++){
            for (j=0;j<column;j++){
              x.tab[i][j]=tab[i][j]+ m.tab[i][j];
            }
        }
        }
        else{
            cout <<"Impossible " <<endl;        
            
        }
        
        return x;
    }
    void affiche(){
        int i ,j;
             for (i=0;i<row;i++){
            for (j=0;j<column;j++){
              cout<<tab[i][j]<<"|";
            }
            cout<<endl;
        }
    }
    
    
    
    
};
int main (){
    matrice m1(5,5);
    m1.saisir();
    m1.affiche();
    matrice m2(5,5);
    m2.saisir();
    matrice m3=m1+m2;
    m3.affiche();
}