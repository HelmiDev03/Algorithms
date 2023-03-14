//
// Created by Helmi on 10/10/2022.
//
#include <iostream>
#include<string>
#include "Etudiant.h"

using namespace std;

Etudiant::Etudiant () {}

Etudiant *Etudiant::Create_Etudiant (string name, string p) {
    Etudiant * e = new Etudiant ();
    e -> nom = name;
    e -> prenom = p;
    return e;
}

void Etudiant::Destruct_Etudiant (Etudiant *e) {
    delete e;
    cout << "Object of Etudiant that was working Dynamiclly is now  deleted from memory" << endl;
}

void Etudiant::Saisie_Note () {
    cout << "Saisir la note du partiel : ";
    cin >> Note_partiel;
    cout << "Saisir la note du Controle Continu : ";
    cin >> Note_CC;
    cout << "Saisir la note du premier examen : ";
    cin >> NoteExam1;
    cout << "Saisir la note du deuxieme examen : ";
    cin >> NoteExam2;
}

void Etudiant::Obtenir_Note () {
    cout << "La note du partiel est : " << Note_partiel << endl;
    cout << "La note du Controle Continu est : " << Note_CC << endl;
    cout << "La note du premier examen est : " << NoteExam1 << endl;
    cout << "La note du deuxieme examen est : " << NoteExam2 << endl;
}

float Etudiant::Obtenir_Note_Session1 () {
    Note_Session1 = max ( NoteExam1, (2 * NoteExam1 + Note_CC + Note_partiel) / 4 );
    return Note_Session1;
}

float Etudiant::Obtenir_Note_Session2 () {
    Note_Session2 = max ( NoteExam2, (2 * NoteExam2 + NoteExam1 + Note_CC + Note_partiel) / 5 );
    return Note_Session2;
}

float Etudiant::Obtenir_Note_Final () {
    if (Note_Session1 < 10) {
        Note = max ( Note_Session1, Note_Session2 );
    } else {
        Note = Note_Session1;
    }
    return Note;
}

void Etudiant::Etat_Etudiant () {
    if (Note_Session1 >= 10) {
        cout << "L'etudiant " << nom << " " << prenom << " est recu en session 1 avec " << Note << " Comme Note Finale"
             << endl;
    } else if (Note >= 10) {
        cout << "L'etudiant " << nom << " " << prenom << " est recu en session 2 avec " << Note << " Comme Note Finale"
             << endl;

    } else {
        cout << "L'etudiant " << nom << " " << prenom << " est echoué avec " << Note << " Comme Note Finale" << endl;
    }
}