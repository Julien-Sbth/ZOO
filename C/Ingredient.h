#ifndef C_INGREDIENT_H
#define C_INGREDIENT_H

class Ingredient
{
    string viande;
    string graine;
public:
    string getViande()
    {
        return viande;
    }
    void setViande(string v)
    {
        viande = v;
    }
    string getGraine()
    {
        return graine;
    }
    void setGraine(string g)
    {
        graine = g;
    }
};

#endif //C_INGREDIENT_H
