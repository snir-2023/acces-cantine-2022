#include <iostream>
#include "Leds.h"
#include "Afficheur.h"
#include "Buzzer.h"
#include "Distributeur.h"
#include "Fichier_acces_csv.h"
#include "Fichier_acces_log.h"
#include "Lecteur.h"
#include "Voyants.h"

using namespace std;

string nom;
char statut;

void extraireInfos(string infos) {
    nom=infos.substr(0,infos.length()-2);
    statut=infos[infos.length()-1];
}

int main()
{
    Leds leds;
    Afficheur afficheur;
    Buzzer buzzer;
    Distributeur distributeur;
    Lecteur lecteur;
    Voyants voyants;
    Fichier_acces_csv fichier_csv;
    Fichier_acces_log fichier_log;

    string code;
    string infos;

    cout << endl << endl;

    code=lecteur.lire();
    cout << "le lecteur me retourne le code "<< code << endl;
    infos=fichier_csv.demandeInfos(code);
    cout << "les infos du code " << code << " sont:" << infos << endl;
    extraireInfos(infos);
    cout << "le nom est " << nom << " et le statut " << statut << endl;;
    fichier_log.enregistre(infos);

    if (nom!="inconnu") { //l'utilisateur est connu
        if (statut=='A') { //utilisateur est autorisé
            buzzer.bip(1);
            voyants.allumer(VERT);
            leds.allumer(VERT);
            afficheur.afficher(nom);
            distributeur.distribuer();
        } else { //utilisateur non autorisé
            buzzer.bip(2);
            voyants.allumer(ROUGE);
            leds.allumer(ROUGE);
            afficheur.afficher(nom);
        }
    } else { //l'utilisateur est inconnu
        buzzer.bip(3);
        voyants.allumer(ROUGE);
        leds.allumer(ROUGE);
        afficheur.afficher("inconnu");
    }

    return 0;
}
