#ifndef FICHIER_ACCES_H
#define FICHIER_ACCES_H

#include <iostream>
#include "Fichier.h"

using namespace std;

class Fichier_acces : public Fichier
{
    public:
        Fichier_acces();
        virtual ~Fichier_acces();
        string demandeInfos(string code);

    protected:

    private:
        string rechercheInfos(string code);
        string infos;
        string extraireID(string ligne);
        string extraireInfos(string ligne);
};

#endif // FICHIER_ACCES_H
