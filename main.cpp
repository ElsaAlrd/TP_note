#include "Voiture.h"
#include<iostream>

int main() {

    //debut question1//
 // Création d'une voiture
    Voiture maVoiture("Clio", Essence, 2020, 50000);
    std::cout << "Informations initiales de la voiture :\n" << maVoiture.obtenirInformations() << std::endl;
    maVoiture.augmenterKilometrage(1500);

    std::cout << "Informations après augmentation du kilométrage :\n" << maVoiture.obtenirInformations() << std::endl;

Voiture maVoiture("Ford",Diesel,2010, 14000);
std::cout << "Informations initiales de la voiture :\n" << maVoiture.obtenirInformations() << std::endl;
//fin question1//

    return 0;
}