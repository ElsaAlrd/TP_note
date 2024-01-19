#include "Voiture.h"
#include<iostream>
#include "conduteur.h"

int main() {

    //debut question2//
 // Création d'une voiture
    Voiture maVoiture("Clio", Essence, 2010, 50000);
    std::cout << "Informations initiales de la voiture :\n" << maVoiture.obtenirInformations() << std::endl;
    maVoiture.augmenterKilometrage(1500);

    std::cout << "Informations après augmentation du kilométrage :\n" << maVoiture.obtenirInformations() << std::endl;

Voiture maVoiture("Ford",Diesel,2020, 100000);
std::cout << "Informations initiales de la voiture :\n" << maVoiture.obtenirInformations() << std::endl;
//fin question2//


//debut question 4//
    Conducteur newConducteur("Elon Musk", 75, Tesla Model 3)
    std::cout << "Informations initiales du conducteur :\n" << conducteur.obtenirInformations() << std::endl;
    conducteur.faireEvoluerExperience(20);
    std::cout << "Informations après évolution de l'expérience :\n" << conducteur.obtenirInformations() << std::endl;

    // Changement de voiture du conducteur
    Voiture nouvelleVoiture("RANGE", Essence, 2022, 10000);
    conducteur.changerDeVoiture(nouvelleVoiture);
    std::cout << "Informations après changement de voiture :\n" << conducteur.obtenirInformations() << std::endl;

//fin question 4//
    return 0;
}