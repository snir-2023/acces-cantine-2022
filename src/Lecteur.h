#ifndef LECTEUR_H
#define LECTEUR_H

#include <iostream>
using namespace std;

class Lecteur
{
    public:
        Lecteur();
        virtual ~Lecteur();
        string lire();

    protected:

    private:
        string code;
};

#endif // LECTEUR_H
