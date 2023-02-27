#ifndef UNTITLED_VISITEUR_H
#define UNTITLED_VISITEUR_H
using namespace std;

class Visiteur{
private:
    int NombredeTickets;
    int ArgentGenere;
public:
    void setNombredeTickets(int tickets){
        NombredeTickets = tickets;
    }
    int getNombredeTickets(){
        return NombredeTickets;
    }
    void setArgentGenere(int moneyGenerate){
        ArgentGenere = moneyGenerate;
    }
    int getArgentGenere(){
        return ArgentGenere;
    }
};
#endif //UNTITLED_VISITEUR_H
