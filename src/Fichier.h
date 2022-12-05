#ifndef FICHIER_H
#define FICHIER_H

#include <iostream>
#include <fstream>

using namespace std;

class Fichier
{
    public:
        Fichier();
        virtual ~Fichier();
        void ouvrir(string nom, char mode);
        void fermer();
        void ecrireLigne(string texte);

    protected:

    private:
        ofstream fichier;
};

#endif // FICHIER_H
