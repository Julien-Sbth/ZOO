#include <iostream>
#include <vector>

using namespace std;

class Animal
{
protected:
    int temps;

public:
    Animal()
    {
        this->temps = 0;
    }

    virtual void manger() = 0;
    virtual void vieillir() = 0;

    bool estVivant()
    {
        return true; // tous les animaux sont vivants par défaut
    }

    int getTemps()
    {
        return temps;
    }

    void incrementerTemps()
    {
        temps++;
    }
};

class Tigre : public Animal
{
protected:
    string sexe;
    int age;
    bool adulte;
    int temps_de_vie;
    int temps_restant_avant_mort;

public:
    Tigre(string sexe)
    {
        this->sexe = sexe;
        this->age = 0;
        this->adulte = false;
        this->temps_de_vie = 25;
        this->temps_restant_avant_mort = this->temps_de_vie;
    }

    virtual void manger() = 0;

    void vieillir()
    {
        this->age += 1;
        if (this->age >= 6)
        {
            this->adulte = true;
        }
        this->temps_restant_avant_mort -= 1;
    }

    bool estVivant()
    {
        return (this->temps_restant_avant_mort > 0);
    }

    bool estAdulte()
    {
        return adulte;
    }
};

class TigreMale : public Tigre
{
private:
    double alimentation;

public:
    TigreMale() : Tigre("male")
    {
        this->alimentation = 12.0; // en kg de viande par jour
    }

    void manger()
    {
        cout << "Le tigre male mange " << this->alimentation << " kg de viande." << endl;
    }
};

class TigreFemelle : public Tigre
{
private:
    double alimentation;
    bool en_gestation;
    int temps_gestation;
    int temps_infertilite;
    int temps_reproduction;

public:
    TigreFemelle() : Tigre("femelle")
    {
        this->alimentation = 10.0; // en kg de viande par jour
        this->en_gestation = false;
        this->temps_gestation = 0;
        this->temps_infertilite = 0;
        this->temps_reproduction = 0;
    }

    void manger()
    {
        cout << "Le tigre femelle mange " << this->alimentation << " kg de viande." << endl;
    }

    bool estEnGestation()
    {
        return en_gestation;
    }

    void demarrerGestation()
    {
        this->en_gestation = true;
        this->temps_gestation = 6; // en mois
    }

    void terminerGestation()
    {
        this->en_gestation = false;
        this->temps_infertilite = 20; // en mois
    }

    bool estInfertile()
    {
        return (temps_infertilite > 0);
    }

    bool peutSeReproduire()
    {
        return (temps_reproduction == 0 && age >= 6 && age <= 14 && !en_gestation && !estInfertile());
    }

    void reproduire()
    {
        temps_reproduction = 20; // en mois
    }

    void diminuerTempsInfertilite()
    {
        if (temps_infertilite > 0)
        {
            temps_infertilite--;
        }
    }

    void diminuerTempsReproduction()
    {
        if (temps_reproduction > 0)
        {
            temps_reproduction--;
        }
    }
};

int main()
{
    vector<Tigre*> tigres;
    TigreMale* male = new TigreMale();
    TigreFemelle* femelle = new TigreFemelle();
    tigres.push_back(male);
    tigres.push_back(femelle);

    int jour = 0; // initialisation du jour

    while (!tigres.empty())
    {
        ++jour; // incrément du jour à chaque tour de boucle

        cout << "Jour " << jour << ":" << endl;

        for (auto it = tigres.begin(); it != tigres.end(); )
        {
            Tigre* tigre = *it;
            tigre->manger();
            tigre->vieillir();
            if (!tigre->estVivant())
            {
                cout << "Le tigre est mort." << endl;
                delete tigre;
                it = tigres.erase(it);
            }
            else if (TigreFemelle* femelle = dynamic_cast<TigreFemelle*>(tigre))
            {
                if (femelle->peutSeReproduire())
                {
                    cout << "La tigresse est en chaleur et cherche un partenaire." << endl;
                    for (auto it2 = tigres.begin(); it2 != tigres.end(); ++it2)
                    {
                        Tigre* partenaire = *it2;
                        if (partenaire != femelle && dynamic_cast<TigreMale*>(partenaire))
                        {
                            cout << "La tigresse a trouvé un partenaire." << endl;
                            femelle->reproduire();
                            break;
                        }
                    }
                }
                femelle->diminuerTempsInfertilite();
                femelle->diminuerTempsReproduction();
            }
            ++it;
        }
    }

    return 0;
}
