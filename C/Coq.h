#ifndef C_COQ_H
#define C_COQ_H//

using namespace std;

class Coq
{
    int nbrCoq{};
    string coq;
    string alimentation;
    string nbrKiloNourriture;
    string jourAvantFaim;
    string pontee;
    string maturiteSexuel;
    string gestation;
    string finDeReproduction;
public:
    int getNbrCoq()
    {
        return nbrCoq;
    }
    void setNbrCoq(int nbr)
    {
        nbrCoq = nbr;
    }
    string getCoq()
    {
        return coq;
    }
    void setCoq(string c)
    {
        coq = c;
    }
    string getAlimentation()
    {
        return alimentation;
    }
    void setAlimentation(string ali)
    {
        alimentation = ali;
    }
    string getNbrKiloNourriture()
    {
        return nbrKiloNourriture;
    }
    void setNbrKiloNourriture(string NbrKilo)
    {
        nbrKiloNourriture = NbrKilo;
    }
    string getJourAvantFaim()
    {
        return jourAvantFaim;
    }
    void setJourAvantFaim(string JAF)
    {
        jourAvantFaim = JAF;
    }
    string getPontee()
    {
        return pontee;
    }
    void setPontee(string p)
    {
        pontee = p;
    }
    string getMaturiteSexuel()
    {
        return maturiteSexuel;
    }
    void setMaturiteSexuel(string MS)
    {
        maturiteSexuel = MS;
    }
    string getGestation()
    {
        return gestation;
    }
    void setGestation(string g)
    {
        gestation = g;
    }
    string getFinDeReproduction()
    {
        return finDeReproduction;
    }
    void setFinDeReproduction(string FDR)
    {
        finDeReproduction = FDR;
    }
};
class HabitatCoq
{
    string coq;
    int achat;
    int vente;
    int capacite;
    string  perte;
    string maladie;

public:
    string getCoq()
    {
        return coq;
    }
    void setCoq(string c)
    {
        coq = c;
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

#endif //C_COQ_H
