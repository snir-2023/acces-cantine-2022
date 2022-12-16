#include "Voyants.h"

using namespace std;

Voyants::Voyants()
{
    cout << "Voyants cree" << endl;
    //ctor
}

Voyants::~Voyants()
{
    //dtor
}

void Voyants::allumer(int couleur) {
    cout << "Allumer voyant en couleur " << couleur << endl;
}
