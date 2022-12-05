#include "Leds.h"

using namespace std;

Leds::Leds()
{
    cout << "Classe Leds creee" << endl;
    //ctor
}

Leds::~Leds()
{
    //dtor
}

void Leds::allumer(int couleur) {
    cout << "allumer les leds en couleur " << couleur << endl;
}
