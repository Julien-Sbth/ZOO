#ifndef POULE_H_INCLUDED
#define POULE_H_INCLUDED

using namespace std;

class Poule
{
    string poule;
    string alimentation;
    int nbrKiloNourriture;
    string jourAvantFaim;
    string pontee;
    string maturiteSexuel;
    string gestation;
    string finDeReproduction;
    string esperanceDeVie;
    string mortaliteInfantile;

public:
    string getEsperanceDeVie()
    {
        return esperanceDeVie;
    }
    void setEsperanceDeVie(string esperance)
    {
        esperanceDeVie = esperance;
    }
    string getMortaliteInfantile()
    {
        return mortaliteInfantile;
    }
    void setMortaliteInfantile(string mort)
    {
        mortaliteInfantile= mort;
    }
    string getAlimentation()
    {
        return alimentation;
    }
    void setAlimentation(string a)
    {
        alimentation = a;
    }
    int getNbrKiloNourriture()
    {
        return nbrKiloNourriture;
    }
    void setNbrKiloNourriture(int nbrK)
    {
        nbrKiloNourriture = nbrK;
    }
    string getPontee()
    {
        return pontee;
    }
    void setPontee(string p)
    {
        pontee= p;
    }
    string getMaturiteSexuel()
    {
        return maturiteSexuel;
    }
    void setMaturiteSexuel(string ma)
    {
        maturiteSexuel = ma;
    }
    string getGestation()
    {
        return gestation;
    }
    void setGestation(string Ga)
    {
        gestation = Ga;
    }
    string getFinDeReproduction()
    {
        return finDeReproduction;
    }
    void setFinDeReproduction(string Reproduction)
    {
        finDeReproduction = Reproduction;
    }
    string getJourAvantFaim()
    {
        return jourAvantFaim;
    }
    void setJourAvantFaim(string JAF)
    {
        jourAvantFaim = JAF;
    }

};

class HabitatPoule
{
    string poule;
    int achat;
    int vente;
    int capacite;
    string  perte;
    string maladie;

public:
    string getPoule()
    {
        return poule;
    }
    void setPoule(string p)
    {
        poule = p;
    }
    int getAchat()
    {
        return achat;
    }
    void setAchat(int a)
    {
        achat = a;
    }
    int getVente()
    {
        return vente;
    }
    void setVente(int v)
    {
        vente = v;
    }
    int getCapacite()
    {
        return capacite;
    }
    void setCapacite(int c)
    {
        capacite = c;
    }
    string getPerte()
    {
        return perte;
    }
    void setPerte(string p)
    {
        perte = p;
    }
    string getMaladie()
    {
        return maladie;
    }
    void setMaladie(string m)
    {
        maladie= m;
    }
};

#endif // POULE_H_INCLUDED
