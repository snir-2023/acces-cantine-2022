#include "Buzzer.h"


using namespace std;

Buzzer::Buzzer()
{
    cout << "Buzzer cree" << endl;
    //ctor
}

Buzzer::~Buzzer()
{
    //dtor
}

void Buzzer::bip(int nb) {
    cout << "on bippe " << nb << " fois" << endl;
}
