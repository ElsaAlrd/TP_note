#include "Voiture.h"
#include "Conducteur.h"
#include "Taxi.h"
#include<iostream>

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
  
    Voiture voitureElon("Tesla Model 3", Electrique, 2020, 15000);
    Conducteur elonMusk("Elon Musk", Tesla Model 3,75);
    std::cout << "Informations initiales d'Elon Musk :\n" << elonMusk.obtenirInformations() << std::endl;

    Voiture nouvelleVoiture("Tesla Model S", Electrique, 2022, 5000);
    elonMusk.changerDeVoiture(nouvelleVoiture);
    std::cout << "Informations après changement de voiture :\n" << elonMusk.obtenirInformations() << std::endl;
    if (elonMusk.estBeaucoupUtilisee()) {
        std::cout << "La voiture d'Elon Musk est considérée comme beaucoup utilisée.\n";
    } else {
        std::cout << "La voiture d'Elon Musk n'est pas considérée comme beaucoup utilisée.\n";
    }
    elonMusk.faireEvoluerExperience(5);
    std::cout << "Informations après augmentation de l'expérience :\n" << elonMusk.obtenirInformations() << std::endl;


//fin question 4//


// debut question 6//

    Taxi taxi("Taxi-G7");

    Conducteur conducteur1("Elsa", Voiture("Clio", Essence, 2010, 50000));
    Conducteur conducteur2("Bob", Voiture("Ford", Diesel, 2020, 25000));
    taxi.ajouterConducteur(conducteur1);
    taxi.ajouterConducteur(conducteur2);

    
    std::cout << "Informations des conducteurs du taxi après ajout initial :\n";
    taxi.afficherInformationsConducteurs();
    std::cout << "\n";

    taxi.supprimerConducteurParNom("Bob");
    std::cout << "Informations des conducteurs du taxi après suppression d'un conducteur :\n";
    taxi.afficherInformationsConducteurs();

    taxi.echangerVoitures("Elsa", "Bob");
    std::cout << "Informations des conducteurs du taxi après échange de voitures :\n";
    taxi.afficherInformationsConducteurs();
    std::cout << "\n";
    taxi.attribuerNouvelleVoitureAuPlusKilometre();
    std::cout << "Informations des conducteurs du taxi après attribution d'une nouvelle voiture :\n";
    taxi.afficherInformationsConducteurs();

//fin question 6//
    return 0;
}
    