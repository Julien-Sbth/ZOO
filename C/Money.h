#ifndef UNTITLED_MONEY_H
#define UNTITLED_MONEY_H

using namespace std;

class Argent
{
private:
    int StockArgent;
    int Rentree_argent;
    int sortie;
public:
    void setStockArgent(int SA){
        StockArgent = SA;
    }
    int getStockArgent(){
        return StockArgent;
    }
    void setRentree_argent(int RA){
        Rentree_argent = RA;
    }
    int getRentree_argent(){
        return Rentree_argent;
    }
    void setsortie(int go){
        sortie = go;
    }
    int getsortie(){
        return sortie;
    }
};
#endif //UNTITLED_MONEY_H
