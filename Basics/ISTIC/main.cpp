#include "Etudiant.h"
#include <iostream>
#include<string>

using namespace std;

int main () {
    Etudiant *e1 = Etudiant::Create_Etudiant ( "Helmi", "Lakhder" );
    e1 -> Saisie_Note ();
    e1 -> Obtenir_Note ();
    cout<<"Note Session 1 : " << e1 -> Obtenir_Note_Session1 () << endl;
    cout<<"Note Session 2 : " << e1 -> Obtenir_Note_Session2 () << endl;
    cout << e1 -> Obtenir_Note_Final () << endl;
    e1 -> Etat_Etudiant ();
    Etudiant::Destruct_Etudiant ( e1 );

}
