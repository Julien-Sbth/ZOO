#include <iostream>
#include <vector>
#include <algorithm>
#include <conio.h>
#include <cstdlib>

#include "C/Classes/Animal.h"
#include "C/Classes/Tigre.h"
#include "C/Classes/Aigle.h"
#include "C/Classes/Poule.h"
#include "C/Classes/Coq.h"
#include "C/Classes/Magasin.h"
using namespace std;

int main()
{
    Magasin magasin;
    cout << "Marchand: " << endl;
    cout << "Achat d'animaux: "  << endl;
    cout << "J'ai 80 000 euros" << endl;z
    auto* Animaux1 = new Animaux("Achat Tigre 6 mois", 3000, nullptr);
    auto* Animaux2 = new Animaux("Achat Poule 6 mois", 20, nullptr);
    auto* Animaux3 = new Animaux("Achat Aigle 6 mois", 1000, nullptr);
    auto* Animaux4 = new Animaux("Achat Coq 6 mois", 100, nullptr);
    auto* Animaux5 = new Animaux("Achat Tigre 4  ans", 120000.0, nullptr);
    auto* Animaux6 = new Animaux("Achat Tigre 14 ans", 4000, nullptr);
    auto* Animaux7 = new Animaux("Achat Aigle 4  ans", 4000, nullptr);
    auto* Animaux8 = new Animaux("Achat Aigle 14 ans", 2000, nullptr);
    // Espace
    auto* Animaux9 = new Animaux("Vente Tigre 6 mois", 1500, nullptr);
    auto* Animaux10 = new Animaux("Vente Poule 6 mois", 10, nullptr);
    auto* Animaux11 = new Animaux("Vente Coq 6 mois", 20, nullptr);
    auto* Animaux12 = new Animaux("Vente Aigle 6 mois", 500, nullptr);
    auto* Animaux13 = new Animaux("Vente Tigre 4 ans", 60000, nullptr);
    auto* Animaux15 = new Animaux("Vente Aigle 4 ans", 2000, nullptr);
    auto* Animaux14 = new Animaux("Vente Tigre 14 ans", 10000, nullptr);
    auto* Animaux16 = new Animaux("Vente Aigle 14 ans", 400, nullptr);

    magasin.ajouterAnimaux(Animaux1);
    magasin.ajouterAnimaux(Animaux2);
    magasin.ajouterAnimaux(Animaux3);
    magasin.ajouterAnimaux(Animaux4);
    magasin.ajouterAnimaux(Animaux5);
    magasin.ajouterAnimaux(Animaux6);
    magasin.ajouterAnimaux(Animaux7);
    magasin.ajouterAnimaux(Animaux8);

    magasin.ajouterAnimaux(Animaux9);
    magasin.ajouterAnimaux(Animaux10);
    magasin.ajouterAnimaux(Animaux11);
    magasin.ajouterAnimaux(Animaux12);
    magasin.ajouterAnimaux(Animaux13);
    magasin.ajouterAnimaux(Animaux14);
    magasin.ajouterAnimaux(Animaux15);
    magasin.ajouterAnimaux(Animaux16);
    magasin.afficherAnimaux();
    getch();
    vector<Animal *> animaux;
    animaux.push_back(new TigreMale("male", "cancer"));
    animaux.push_back(new TigreFemelle("femelle", "diabete"));
    animaux.push_back(new Aigle("male", "grippe aviaire", nullptr));
    animaux.push_back(new Aigle("femelle", nullptr, "tuberculose"));
    animaux.push_back(new Poule("femelle", "coryza"));
    animaux.push_back(new Coq("femelle", "Maladie De NewCastle"));
    for (int i = 0; i < 120; i++)
    {
        // Vieillir tous les animaux
        for (auto &animal: animaux)
        {
            animal->vieillir();
        }

        int temps_total = 1; // Temps total écoulé dans la simulation
        while (true)
        {
            cout << "Temps total ecoule : " << temps_total << " mois." << endl;
            for (Animal *animal: animaux)
            {
                animal->vieillir();
            }
            for (Animal *animal: animaux)
            {
                animal->mourirDeMaladie();
            }
            for (Animal *animal: animaux)
            {
                if (auto *femelle = dynamic_cast<TigreFemelle *>(animal))
                {
                    femelle->diminuerTempsInfertilite();
                    femelle->diminuerTempsReproduction();
                    femelle->estEnGestation();
                    if (femelle->peutSeReproduire())
                    {
                        cout << "La femelle tigre se reproduit." << endl;
                        animaux.push_back(new TigreMale(nullptr, nullptr));
                        animaux.push_back(new TigreMale(nullptr, nullptr));
                        cout << "La femelle tigre a donner naissance a 2 tigres males." << endl;
                        femelle->reproduire();
                    }
                }
            }
            for (auto &animal: animaux)
            {
                if (rand() % 100 == 0)   // 1 chance sur 10 de tomber malade
                {
                    animal->tomberMalade("Maladie %" + to_string(rand() % 100));
                }
            }
            for (Animal *animal: animaux)
            {
                if (auto *male = dynamic_cast<TigreMale *>(animal))
                {
                    male->manger();
                }
                else if (auto *femelle = dynamic_cast<TigreFemelle *>(animal))
                {
                    femelle->diminuerTempsInfertilite();
                    femelle->diminuerTempsReproduction();
                }
                else if (auto *aigle = dynamic_cast<Aigle *>(animal))
                {
                    aigle->manger();
                }
                else if (auto *poule = dynamic_cast<Poule *>(animal))
                {
                    poule->manger();
                }
                else if (Coq *coq = dynamic_cast<Coq *>(animal))
                {
                    coq->manger();
                }
            }
            animaux.erase(
                    remove_if(
                            animaux.begin(),
                            animaux.end(),
                            [](Animal *animal)
                            {
                                if (!Animal::estVivant())
                                {
                                    cout << "Un animal est mort." << endl;
                                    delete animal;
                                    return true;
                                }
                                return false;
                            }),
                    animaux.end()
            );
            temps_total++;
            if (temps_total == 19)
            {
                break;
            }
        }
        for (Animal *animal: animaux)
        {
            delete animal;
        }
        return 0;
    }
}