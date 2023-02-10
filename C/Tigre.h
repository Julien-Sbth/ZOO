#ifndef TIGRE_H_INCLUDED
#define TIGRE_H_INCLUDED

using namespace std;

class Tigre
{
    int nbrTigre;
    string esperanceDeVie;
    string tigreFemelle;
    string tigreMale;
    string alimentation;
    int nbrKiloNourritureFemelle;
    int nbrKiloNourritureMale;
    int jourAvantFaim;
    string pontee;
    string maturiteSexuelFemelle;
    string maturiteSexuelMale;
    string gestation;
    int finDeReproduction;

public:
    string getEsperanceDeVie()
    {
        return esperanceDeVie;
    }
    void setEsperanceDeVie(string esperance)
    {
        esperanceDeVie = esperance;
    }
    int getNbrTigre()
    {
        return nbrTigre;
    }
    void setNbrTigre(int tigre)
    {
        nbrTigre = tigre;
    }
    string getTigreFemelle()
    {
        return tigreFemelle;
    }
    void setTigreFemelle(string TF)
    {
        tigreFemelle = TF;
    }
    string getTigreMale()
    {
        return tigreMale;
    }
    void setTigreMale(string TM)
    {
        tigreMale = TM;
    }
    string getAlimentation()
    {
        return alimentation;
    }
    void setAlimentation(string A)
    {
        alimentation = A;
    }
    int getNbrKiloNourritureFemelle()
    {
        return nbrKiloNourritureFemelle;
    }
    void setNbrKiloNourritureFemelle(int nbrf)
    {
        nbrKiloNourritureFemelle = nbrf;
    }
    int getNbrKiloNourritureMale()
    {
        return nbrKiloNourritureMale;
    }
    void setNbrKiloNourritureMale(int nbrm)
    {
        nbrKiloNourritureMale = nbrm;
    }
    int getJourAvantFamin()
    {
        return jourAvantFaim;
    }
    void setJourAvantFaim(int jaf)
    {
        jourAvantFaim = jaf;
    }
    string getPontee()
    {
        return pontee;
    }
    void setPontee(string pontee)
    {
        pontee = pontee;
    }
    string getMaturiteSexuelFemelle()
    {
        return maturiteSexuelFemelle;
    }
    void setmaturiteSexuelFemelle(string ms)
    {
        maturiteSexuelFemelle = ms;
    }
    string getMaturiteSexuelMale()
    {
        return maturiteSexuelMale;
    }
    void setmaturiteSexuelMale(string ms)
    {
        maturiteSexuelMale = ms;
    }
    string getGestation()
    {
        return gestation;
    }
    void setGestation(string g)
    {
        gestation = g;
    }
    int getFinDeReproduction()
    {
        return finDeReproduction;
    }
    void setFindeReproduction(int fdr)
    {
        finDeReproduction = fdr;
    }
};

#endif // TIGRE_H_INCLUDED
