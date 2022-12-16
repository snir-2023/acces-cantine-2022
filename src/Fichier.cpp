#include "Fichier.h"

using namespace std;

Fichier::Fichier()
{
    //ctor
}

Fichier::~Fichier()
{
    //dtor
}

void Fichier::ouvrir(string nom, char mode) {
    switch (mode) {
    case 'a' : //mode append
        fichier.open(nom.c_str(), ios_base::out | ios::app);
        break;
    case 'r' : //read
        fichier.open(nom.c_str(), ios_base::in);
        break;
    case 'w' : //write
        fichier.open(nom.c_str(), ios_base::out);
        break;
    }


}

void Fichier::fermer() {
    fichier.close();
}

void Fichier::ecrireLigne(string texte) {
    fichier << texte << endl;
}

string Fichier::lire1ligne() {
    char ligne[256];

    fichier.getline(ligne,256);
    return ligne;
}

bool Fichier::finDeFichier() {
    return fichier.eof();
}
