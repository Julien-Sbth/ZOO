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

    HabitatTigre HT;
    HT.setAchat (25);
    HT.setVente (25);
    HT.setCapacite (25);
    HT.setMaladie ("25");
    HT.setTigre ("25");
    HT.setPerte( "50%");

    HabitatAigle HA;
    HA.setAchat (25);
    HA.setAigle ("Aigle: ");
    HA.setMaladie ("25");
    HA.setVente (25);
    HA.setCapacite (25);
    HA.setPerte( "50%");

    HabitatPoule HP;
    HP.setPoule("Poule:");
    HP.setAchat (25);
    HP.setVente (25);
    HP.setMaladie ("25");
    HP.setCapacite (25);
    HP.setPerte( "50%");

    HabitatCoq HC;
    HC.setAchat (25);
    HC.setVente (25);
    HC.setMaladie ("25");
    HC.setCoq("Coq: ");
    HC.setCapacite (25);
    HC.setPerte("50%");

    cout << "" << HP.getPoule() << endl;
    cout << "Un achat d'une poule equivaut en euros : " << HP.getAchat() << endl;
    cout << "Une vente d'une poule equivaut en euros est de : " << HP.getVente() << endl;
    cout << "Le risque que la poule soit malade est de: " << HP.getMaladie() << endl;
    cout << "La capacité de Poule disponible: " << HP.getCapacite() << endl;
    cout << "Le risque de perte d'une poule pendant le premier mois: " << HP.getPerte() << endl;

    cout << "" << HT.getTigre() << endl;
    cout << "Un achat d'un tigre equivaut en euros : " << HT.getAchat() << endl;
    cout << "Une vente d'un tigre equivaut en euros est de : " << HT.getVente() << endl;
    cout << "Le risque que le tigre soit malade est de: " << HT.getMaladie() << endl;
    cout << "La capacité de Tigre disponible: " << HT.getCapacite() << endl;
    cout << "Le risque de perte d'un tigre pendant le premier mois: " << HT.getPerte() << endl;

    cout << "" << HC.getCoq() << endl;
    cout << "Un achat d'un coq equivaut en euros : " << HC.getAchat() << endl;
    cout << "Une vente d'un coq equivaut en euros est de : " << HC.getVente() << endl;
    cout << "Le risque que le coq soit malade est de: " << HC.getMaladie() << endl;
    cout << "La capacité de Coq disponible: " << HC.getCapacite() << endl;
    cout << "Le risque de perte d'une coq pendant le premier mois: " << HC.getPerte() << endl;

    cout << "" << HA.getAigle() << endl;
    cout << "Un achat d'un coq equivaut en euros : " << HA.getAchat() << endl;
    cout << "Une vente d'un coq equivaut en euros est de : " << HA.getVente() << endl;
    cout << "Le risque que le coq soit malade est de: " << HA.getMaladie() << endl;
    cout << "La capacité de Coq disponible: " << HA.getCapacite() << endl;
    cout << "Le risque de perte d'une coq pendant le premier mois: " << HA.getPerte() << endl;


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
    cout << "NbrKiloNourriture: " << a.getNbrKiloNourritureMale() << endl;
    cout << "NbrKiloNourriture: " << a.getNbrKiloNourritureFemelle() << endl;
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

    // Classe Tigre
    cout << "Nombre de Tigre: " << t.getNbrTigre() << endl;
    cout << "Alimentation: " << t.getAlimentation() << endl;
    cout << "Fin de reproduction des Tigres: " << t.getFinDeReproduction() << endl;
    cout << "Esperence de vie: " << t.getEsperanceDeVie() << endl;
    cout << "Fin de Gestation des Tigres: " << t.getGestation() << endl;
    cout << "Jour Avant Faim: " << t.getJourAvantFamin() << endl;
    cout << "Maturite Sexuel Male: " << t.getMaturiteSexuelMale() << endl;
    cout << "Maturite Sexuel Femelle: " << t.getMaturiteSexuelFemelle() << endl;
    cout << "NbrKiloNourriture Male: " << t.getNbrKiloNourritureMale() << endl;
    cout << "NbrKiloNourriture Femelle: " << t.getNbrKiloNourritureFemelle() << endl;
    cout << "Pontee: " << t.getPontee() << endl;


    return 0;
}
