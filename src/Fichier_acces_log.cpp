#include "Fichier_acces_log.h"

using namespace std;

Fichier_acces_log::Fichier_acces_log()
{
    cout << "Classe Fichier log creee" << endl;
    //ctor
}

Fichier_acces_log::~Fichier_acces_log()
{
    //dtor
}

void Fichier_acces_log::enregistre(string infos) {
    cout << "enregistre les infos : " << infos << endl;
    ouvrir("acces.log",'a');
    string dateHeure=lireHeure();
    ecrireLigne(dateHeure+';'+infos);
    fermer();
}

string Fichier_acces_log::lireHeure() {
    return "0/0/0000-0h00";
}
