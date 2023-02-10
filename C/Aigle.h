#ifndef AIGLE_H_INCLUDED
#define AIGLE_H_INCLUDED

using namespace std;

class Aigle
{
    int nbrAigle;
    string remarques;
    string aigleFemelle;
    string aigleMale;
    string alimentation;
    string esperanceDeVie;
    int nbrKiloNourritureMale;
    int nbrKiloNourritureFemelle;
    int jourAvantFaim;
    string pontee;
    string maturiteSexuelMale;
    string maturiteSexuelFemelle;
    string gestation;
    int finDeReproduction;
    int mortaliteInfantile;

public:
    string getRemarques()
    {
        return remarques;
    }
    void setRemarques(string rem)
    {
        remarques = rem;
    }
    string getEsperanceDeVie()
    {
        return esperanceDeVie;
    }
    void setEsperanceDeVie(string esperance)
    {
        esperanceDeVie = esperance;
    }
    int getNbrAigle()
    {
        return nbrAigle;
    }
    void setNbrAigle(int aigle)
    {
        nbrAigle = aigle;
    }
    string getAigleFemelle()
    {
        return aigleFemelle;
    }
    void setAigleFemelle(string af)
    {
        aigleFemelle = af;
    }
    string getAigleMale()
    {
        return aigleMale;
    }
    void setAigleMale(string am)
    {
        aigleMale = am;
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
    int getMortaliteInfantile()
    {
        return mortaliteInfantile;
    }
    void setMortaliteInfantile(int MI)
    {
        mortaliteInfantile = MI;
    }
};

#endif // AIGLE_H_INCLUDED
