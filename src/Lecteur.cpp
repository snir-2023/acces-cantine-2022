#include "Lecteur.h"

using namespace std;

Lecteur::Lecteur()
{
    cout << "Lecteur cree" << endl;
   //ctor
}

Lecteur::~Lecteur()
{
    //dtor
}

string Lecteur::lire() {
    code="1234";
    cout << "lire la carte. On retourne " << code << endl;
    return code;
}
