#include "Voyants.h"

using namespace std;

Voyants::Voyants()
{
    cout << "Classe Voyants creee" << endl;
    //ctor
}

Voyants::~Voyants()
{
    //dtor
}

void Voyants::allumer(int couleur) {
    cout << "allumer les voyants en couleur " << couleur << endl;
}
