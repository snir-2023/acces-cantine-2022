#include "Leds.h"

using namespace std;

Leds::Leds()
{
    cout << "Leds cree" << endl;
    //ctor
}

Leds::~Leds()
{
    //dtor
}

void Leds::allumer(int couleur) {
    cout << "Allumer leds en couleur " << couleur << endl;
}
