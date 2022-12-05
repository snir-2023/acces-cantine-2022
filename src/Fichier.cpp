#include "Fichier.h"

Fichier::Fichier()
{
    //ctor
}

Fichier::~Fichier()
{
    //dtor
}

void Fichier::ouvrir(string nom, char mode) {
    fichier.open(nom, ios::app);
}

void Fichier::fermer() {
    fichier.close();
}

void Fichier::ecrireLigne(string texte) {
    fichier << texte << endl;
}
