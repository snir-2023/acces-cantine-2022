#include <iostream>

#include "Distributeur.h"
#include "Lecteur.h"
#include "Afficheur.h"
#include "Voyants.h"
#include "Leds.h"
#include "Fichier_acces.h"
#include "Fichier_log.h"
#include "Buzzer.h"

using namespace std;

string nom;
char statut;

void extraireInfos(string infos) {
    cout << "on extrait les infos de " << infos << endl;
    statut=infos[infos.length()-1];
    nom=infos.substr(0,infos.length()-2);
    cout << " nom:" << nom << " statut:" << statut << endl;
}

int main()
{
    Distributeur distributeur; //instanciation de distributeur
    Lecteur lecteur;
    Leds leds;
    Voyants voyants;
    Buzzer buzzer;
    Afficheur afficheur;
    Fichier_acces fichierAcces;
    Fichier_log fichierLog;

    cout << endl << endl;

    string code;
    string infos;

    code=lecteur.lire();
    infos=fichierAcces.demandeInfos(code);
    extraireInfos(infos);
    fichierLog.enregistre(infos);

    if (nom!="inconnu") { //l'utilisateur est connu
        if (statut=='A') { //utilisateur autorisé à recevoir un plateau
            buzzer.bip(1);
            voyants.allumer(VERT);
            leds.allumer(VERT);
            afficheur.afficher(nom);
            distributeur.distribuer();
        } else { //utilisateur non autorisés
            buzzer.bip(2);
            voyants.allumer(ROUGE);
            leds.allumer(ROUGE);
            afficheur.afficher(nom);
        }
    } else { //utilisateur inconnu
            buzzer.bip(3);
            voyants.allumer(ROUGE);
            leds.allumer(ROUGE);
            afficheur.afficher("inconnu");
    }

    cout << "Hello world!" << endl;
    return 0;
}
