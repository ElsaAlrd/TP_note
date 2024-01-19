#ifndef VOITURE_H
#define VOITURE_H

#include <iostream>
#include <string>
#include <vector>

enum  TypeTypeCarburant {
    Diesel,
    Essence,
    Electrique
}; 

class Voiture { 

   

public:
    Voiture(std::string modele, TypeTypeCarburant gasoil, int annee, int km);
    void augmenterKilometrage(int augmentation);
    std::string obtenirInformations() const;


private:
    bool estBeaucoupUtilisee() const;
    std::string getTypeString() const;
    std::string modele;
    TypeCarburant type;
    int annee;
    int km;
};


#endif