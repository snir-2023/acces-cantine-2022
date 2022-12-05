#include "Lecteur.h"

using namespace std;

Lecteur::Lecteur()
{
    cout << "Classe Lecteur creee" << endl;
    //ctor
}

Lecteur::~Lecteur()
{
    //dtor
}

string Lecteur::lire() {
    cout << "lire une carte. On retourne 1234" << endl;
    return "1234";
}
