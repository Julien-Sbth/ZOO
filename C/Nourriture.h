#ifndef UNTITLED_NOURRITURE_H
#define UNTITLED_NOURRITURE_H

using namespace std;

class Nourriture
{
private:
    int NombreDeNourriture;
    int PrixTotalStock;
public :
    void setNombreDeNourriture(int nb){
    NombreDeNourriture = nb;
}
    int getNombreDeNourriture(){
        return NombreDeNourriture;
 }
    void setPrixTotalStock(int PriceStock){
    PrixTotalStock = PriceStock;
}
    int getPrixTotalStock(){
    return PrixTotalStock;
 }
};

#endif //UNTITLED_NOURRITURE_H
