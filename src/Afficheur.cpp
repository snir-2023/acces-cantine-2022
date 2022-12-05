#include "Afficheur.h"

using namespace std;

Afficheur::Afficheur()
{
    cout << "Classe Afficheur creee" << endl;
    //ctor
}

Afficheur::~Afficheur()
{
    //dtor
}

void Afficheur::afficher(string texte) {
    cout << "On affiche " << texte << endl;
}
