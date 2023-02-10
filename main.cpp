#include <iostream>
#include <string>
#include "C/Tigre.h"
#include "C/Aigle.h"
#include "C/Poule.h"
#include "C/Coq.h"
#include "C/Ingredient.h"

using namespace std;

int main()
{
    Coq c;
    c.setAlimentation ("test");
    c.setCoq ("Jose");
    c.setGestation ("test");
    c.setFinDeReproduction ("test");
    c.setJourAvantFaim ("test");
    c.setMaturiteSexuel ("test");
    c.setNbrKiloNourriture ("test");
    c.setPontee ("test");
    c.setNbrCoq (1);

    cout << "Alimentation: " << c.getAlimentation() << endl;
    cout << "Coq: " << c.getCoq() << endl;
    cout << "Gestation: " << c.getGestation() << endl;
    cout << "Fin de reproduction: " << c.getFinDeReproduction() << endl;
    cout << "Jour avant Faim: " << c.getJourAvantFaim() << endl;
    cout << "Maturite Sexuel: " << c.getMaturiteSexuel() << endl;
    cout << "NbrKiloNourriture: " << c.getNbrKiloNourriture() << endl;
    cout << "Pontee: " << c.getPontee() << endl;
    cout << "NbrCoq: " << c.getNbrCoq() << endl;

    Ingredient i;
    i.setViande ("Viande");
    i.setGraine ("Graine");

    cout << "Alimentation: " << i.getViande() << "&" << i.getGraine() << endl;

    Poule p;
    p.setMortaliteInfantile ("15%");
    p.setEsperanceDeVie ("15 ans");
    p.setFinDeReproduction ("8 ans");
    p.setGestation ("6 semaines");
    p.setAlimentation ("graine");
    p.setJourAvantFaim ("1 jours");
    p.setMaturiteSexuel("6 mois");
    p.setNbrKiloNourriture (0.15);
    p.setPontee ("200 oeufs par ans");

    cout << "Alimentation: " << p.getAlimentation() << endl;
    cout << "Mortalite Infantile: " << p.getMortaliteInfantile() << endl;
    cout << "Fin de reproduction des Poules: " << p.getFinDeReproduction() << endl;
    cout << "Esperence de vie: " << p.getEsperanceDeVie() << endl;
    cout << "Fin de Gestation des Poules: " << p.getGestation() << endl;
    cout << "Jour Avant Faim: " << p.getJourAvantFaim() << endl;
    cout << "Maturite Sexuel: " << p.getMaturiteSexuel()<< endl;
    cout << "NbrKiloNourriture: " << p.getNbrKiloNourriture() << endl;
    cout << "Pontee: " << p.getPontee() << endl;
    cout << "" << endl;

    // AIGLE
    Aigle a;
    a.setNbrAigle (2);
    a.setRemarques ("les aigles sont tr�s fid�les ");
    a.setEsperanceDeVie ("25 ans");
    a.setFindeReproduction (14);
    a.setGestation ("45 jours");
    a.setAlimentation ("viande");
    a.setJourAvantFaim (10);
    a.setmaturiteSexuelMale ("4 ans");
    a.setmaturiteSexuelFemelle ("4 ans");
    a.setNbrKiloNourritureFemelle (0.25);
    a.setNbrKiloNourritureMale (0.3);
    a.setPontee ("2 oeufs en Mars");

    cout << "Nombre d'Aigle: " << a.getNbrAigle() << endl;
    cout << "Alimentation: " << a.getAlimentation() << endl;
    cout << "Fin de reproduction des Tigres: " << a.getFinDeReproduction() << endl;
    cout << "Esperence de vie: " << a.getEsperanceDeVie() << endl;
    cout << "Fin de Gestation des Aigles: " << a.getGestation() << endl;
    cout << "Jour Avant Faim: " << a.getJourAvantFamin() << endl;
    cout << "Maturite Sexuel: " << a.getMaturiteSexuelMale() << endl;
    cout << "Maturite Sexuel: " << a.getMaturiteSexuelFemelle() << endl;
    cout << "NbrKiloNourriture: " << a.getNbrKiloNourritureFemelle() << endl;
    cout << "NbrKiloNourriture: " << a.getNbrKiloNourritureMale() << endl;
    cout << "NbrTigre: " << a.getNbrAigle() << endl;
    cout << "Pontee: " << a.getPontee() << endl;
    cout << "Aigle Male: " << a.getAigleMale() << endl;
    cout << "Aigle Femelle: " << a.getAigleFemelle() << endl;
    cout << "" << endl;

    // TIGRE
    Tigre t;
    t.setNbrTigre (2);
    t.setEsperanceDeVie ("25 ans");
    t.setFindeReproduction (14);
    t.setGestation ("3 mois");
    t.setAlimentation ("viande");
    t.setJourAvantFaim (5);
    t.setmaturiteSexuelFemelle ("4 ans");
    t.setmaturiteSexuelFemelle ("6 ans");
    t.setNbrKiloNourritureFemelle (10);
    t.setNbrKiloNourritureMale (12);
    t.setPontee ("3 individus par port�e / max 1 port�e tous les 20 mois");
    /*
    t.setTigreMale;
    t.setTigreFemelle;
    */
    // Classe Tigre
    cout << "Nombre de Tigre: " << t.getNbrTigre() << endl;
    cout << "Alimentation: " << t.getAlimentation() << endl;
    cout << "Fin de reproduction des Tigres: " << t.getFinDeReproduction() << endl;
    cout << "Esperence de vie: " << t.getEsperanceDeVie() << endl;
    cout << "Fin de Gestation des Tigres: " << t.getGestation() << endl;
    cout << "Jour Avant Faim: " << t.getJourAvantFamin() << endl;
    cout << "Maturite Sexuel: " << t.getMaturiteSexuelMale() << endl;
    cout << "Maturite Sexuel: " << t.getMaturiteSexuelFemelle() << endl;
    cout << "NbrKiloNourriture: " << t.getNbrKiloNourritureFemelle() << endl;
    cout << "NbrKiloNourriture: " << t.getNbrKiloNourritureMale() << endl;
    cout << "NbrTigre: " << t.getNbrTigre() << endl;
    cout << "Pontee: " << t.getPontee() << endl;
    cout << "Tigre Male: " << t.getTigreMale() << endl;
    cout << "Tigre Femelle: " << t.getTigreFemelle() << endl;

    return 0;
}
