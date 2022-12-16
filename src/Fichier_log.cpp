#include "Fichier_log.h"

using namespace std;

Fichier_log::Fichier_log()
{
    cout << "Fichier Log cree" << endl;
    //ctor
}

Fichier_log::~Fichier_log()
{
    //dtor
}

void Fichier_log::enregistre(string infos) {
    cout << "On enregistre les infos " << infos << endl;
    ouvrir("acces.log",'a');
    dateHeure=lireHeure();
    ecrireLigne(dateHeure+';'+infos);
    fermer();
}

string Fichier_log::lireHeure() {
    time_t t = time(nullptr);
    tm* now = localtime(&t);

    char buffer[128];
    strftime(buffer, sizeof(buffer), "%m/%d/%Y %X", now);
    return buffer;
}
