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
    time_t rawtime;
    struct tm * timeinfo;
    char buffer[30];

    time (&rawtime);
    timeinfo = localtime (&rawtime);

    strftime (buffer,30,"%d/%m/%Y %H:%M:%S",timeinfo);
    return buffer;
}
