#include "Afficheur.h"

using namespace std;

Afficheur::Afficheur()
{
    cout << "Afficheur cree" << endl;
    //ctor
}

Afficheur::~Afficheur()
{
    //dtor
}

void Afficheur::afficher(string texte) {
    cout << "On affiche " << texte << endl;
}
