#define Conducteur_H
#ifndef Conducteur_H
#include <iostream>
#include <string>
#include <vector>
#include "Voiture.h" 
class Conducteur {
public:
   
    Conducteur(std::string nom, int experience,Voiture voiture);
    void faireEvoluerExperience(int augmentation);
    void changerDeVoiture(const Voiture& nouvelleVoiture);
 // Fonction pour récupérer les informations du conducteur sous forme de chaîne de caractères
     std::string obtenirInformations() const;

private:
    
    void ajusterExperience();
    std::string nom;
    int experience;
    Voiture voiture;
};


#endif
