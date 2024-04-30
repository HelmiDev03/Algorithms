#include <iostream>
#include<string>

using namespace std;

class Etudiant {
private:
    string nom, prenom;
    float Note_partiel, Note_CC, NoteExam1, NoteExam2, Note_Session1, Note_Session2, Note;
public:
    Etudiant ();

    static Etudiant *Create_Etudiant (string nom, string prenom);

    static void Destruct_Etudiant (Etudiant *e);

    void Saisie_Note ();

    void Obtenir_Note ();

    float Obtenir_Note_Session1 ();

    float Obtenir_Note_Session2 ();

    float Obtenir_Note_Final ();

    void Etat_Etudiant ();
};




