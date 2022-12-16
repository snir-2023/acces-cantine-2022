#ifndef FICHIER_LOG_H
#define FICHIER_LOG_H

#include <iostream>
#include <ctime>
#include "Fichier.h"

using namespace std;

class Fichier_log : public Fichier
{
    public:
        Fichier_log();
        virtual ~Fichier_log();
        void enregistre(string infos);
        string lireHeure();

    protected:

    private:
        string dateHeure;
};

#endif // FICHIER_LOG_H
