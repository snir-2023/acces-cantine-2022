#include "Fichier_acces.h"

using namespace std;

Fichier_acces::Fichier_acces()
{
    cout << "Fichier Acces cree" << endl;
    //ctor
}

Fichier_acces::~Fichier_acces()
{
    //dtor
}

string Fichier_acces::demandeInfos(string code) {
    cout << "demande des infos pour le code " << code << endl;
    infos=rechercheInfos(code);
    cout << "infos trouvees : " << infos << endl;
    return infos;
}

string Fichier_acces::rechercheInfos(string code) {
    cout << "on recherche les infos pour le code " << code << endl;
    ouvrir("acces.csv",'r');
    string lesInfos="inconnu;R";
    while (! finDeFichier()) {
        string ligne = lire1ligne();
        string ID = extraireID(ligne);
        if (ID==code) {
            lesInfos=extraireInfos(ligne);
        }
    }

    return lesInfos;
}

string Fichier_acces::extraireID(string ligne) {
    int pos=ligne.find(";");
    string ID=ligne.substr(0,pos);
    return ID;
}

string Fichier_acces::extraireInfos(string ligne) {
    int pos=ligne.find(";");
    string infos=ligne.substr(pos+1);
    return infos;
}
