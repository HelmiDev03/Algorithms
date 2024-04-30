//
// Created by Helmi on 10/10/2022.
//
#include <iostream>
#include <string>
#include<bits/stdc++.h>

using namespace std;

class Student {
public:
    static long Genarteur_Code;
private:
    long code;
    string nom;
    int NbrNotes;
    float *TabeNotes; /* ici ca semble que c est just un pointeur sur float
 * mais en faite avec new type tabnotes va etre considerer comme un tableau dynamique content des reels*/
    public:
    Student();
    Student(string name, int Nbr);
    ~Student();
    long get_code();
    string get_nom();
    int get_NbrNotes();
    float *get_TabeNotes();
    void set_code(long code);
    void set_nom(string nom);
    void set_NbrNotes(int n);
    void set_TabeNotes(float *newTabeNotes);
    void saisie();
    void affiche();
    float moyenne();
    bool admis();
    bool comparer(Student s);

};

