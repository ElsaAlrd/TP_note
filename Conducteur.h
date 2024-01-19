#ifndef CONCUCTEUR_H
#define CONDUCTEUR_H

#include <iostream>
#include <string>
#include <vector>
#include "Voiture.h" 

class Conducteur {
public:
   
    Conducteur(std::string nom,Voiture voiture,int experience);
    void faireEvoluerExperience(int augmentation);
    void changerDeVoiture(const Voiture& nouvelleVoiture);
     std::string obtenirInformations() const;

private:
    
    void ajusterExperience();
    std::string nom;
    int experience;
    Voiture voiture;
};

#endif