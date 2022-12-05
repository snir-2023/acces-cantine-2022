#ifndef FICHIER_ACCES_LOG_H
#define FICHIER_ACCES_LOG_H

#include <iostream>
#include "Fichier.h"

using namespace std;

class Fichier_acces_log : public Fichier
{
    public:
        Fichier_acces_log();
        virtual ~Fichier_acces_log();
        void enregistre(string infos);

    protected:

    private:
        string lireHeure();
};

#endif // FICHIER_ACCES_LOG_H
