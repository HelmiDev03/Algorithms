//
// Created by Helmi on 10/10/2022.
//

#include "Student.h"
#include <iostream>
#include<bits/stdc++.h>
long Student::Genarteur_Code=100;
Student::Student(){}
Student::Student(string name, int Nbr){
    nom = name;
    NbrNotes = Nbr;
    TabeNotes = new float[NbrNotes];
    code = Genarteur_Code++;
}
Student::~Student(){}
long Student::get_code() {
    return code;
}
string Student::get_nom() {
    return nom;
}
int Student::get_NbrNotes() {
    return NbrNotes;
}
float* Student::get_TabeNotes() { /*function will rerurn o pointer on a float wich is tabnote*/
    return TabeNotes;
}
void Student::set_code(long code) {
    Student::code = code;
}
void Student::set_nom(string nom) {
    Student::nom = nom;
}
void Student::set_NbrNotes(int n) {
    NbrNotes = n;
}
void Student::set_TabeNotes(float *newTabeNotes) {
    Student::TabeNotes = newTabeNotes;
}
void Student::saisie() {
    cout << "Entrer le nom de l'etudiant: ";
    cin >> nom;
    cout << "Entrer le nombre de notes: ";
    cin >> NbrNotes;
    TabeNotes = new float[NbrNotes];
    int i=0;
    while(i<NbrNotes){
        cout << "Entrer la note " << i + 1 << ": ";
        cin >> *(TabeNotes+i);
        i++;
    }
}
void Student::affiche() {
    cout << "Code: " << code << endl;
    cout << "Nom: " << nom << endl;
    cout << "Nombre de notes: " << NbrNotes << endl;
    cout << "Les notes: ";
    for (int i = 0; i < NbrNotes; i++) {
        cout << *(TabeNotes+i) << " ";
    }
    cout << endl;
}
float Student::moyenne() {
    float somme = 0;
    for (int i = 0; i < NbrNotes; i++) {
        somme += TabeNotes[i];
    }
    return somme / NbrNotes;
}
bool Student::admis() {
    return moyenne() >= 10;
}
bool Student::comparer(Student s) {
    return moyenne() > s.moyenne();
}




