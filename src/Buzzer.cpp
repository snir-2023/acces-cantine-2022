#include "Buzzer.h"

using namespace std;

Buzzer::Buzzer()
{
    cout << "Classe Buzzer creee" << endl;
    //ctor
}

Buzzer::~Buzzer()
{
    //dtor
}

void Buzzer::bip(int nb) {
    cout << "bip " << nb << " fois" << endl;
}
