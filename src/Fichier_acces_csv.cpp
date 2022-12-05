#include "Fichier_acces_csv.h"

using namespace std;

Fichier_acces_csv::Fichier_acces_csv()
{
    cout << "Classe Fichier acces creee" << endl;
    //ctor
}

Fichier_acces_csv::~Fichier_acces_csv()
{
    //dtor
}

string Fichier_acces_csv::demandeInfos(string code) {
    cout << "demande les infos du code " << code << endl;
    infos=rechercheInfos(code);
    return infos;
}

string Fichier_acces_csv::rechercheInfos(string code) {
    cout << "recherche d'infos pour le code " << code << endl;
    string lesInfos="inconnu;R";
    return lesInfos;
}
