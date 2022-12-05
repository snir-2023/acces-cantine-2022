#ifndef FICHIER_ACCES_CSV_H
#define FICHIER_ACCES_CSV_H

#include <iostream>
using namespace std;

class Fichier_acces_csv
{
    public:
        Fichier_acces_csv();
        virtual ~Fichier_acces_csv();
        string demandeInfos(string code);

    protected:

    private:
        string infos;
        string rechercheInfos(string code);
};

#endif // FICHIER_ACCES_CSV_H
