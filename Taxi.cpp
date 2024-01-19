#include "Taxi.h"
#include <algorithm> 
#include <iostream>

Taxi::Taxi(std::string nom) : nomTaxi(nom) {}
void Taxi::ajouterConducteur(Conducteur conducteur) {
    conducteurs.push_back(conducteur);
}
void Taxi::supprimerConducteurParNom(std::string nomConducteur) {
    auto it = std::remove_if(conducteurs.begin(), conducteurs.end(),
                             [nomConducteur](const Conducteur& c) { return c.getNom() == nomConducteur; });

    conducteurs.erase(it, conducteurs.end());
}

void Taxi::echangerVoitures(std::string nomConducteur1, std::string nomConducteur2) {
    Conducteur* conducteur1 = trouverConducteurParNom(nomConducteur1);
    Conducteur* conducteur2 = trouverConducteurParNom(nomConducteur2);

    if (conducteur1 && conducteur2) {
        Voiture tempVoiture = conducteur1->getVoiture();
        conducteur1->changerDeVoiture(conducteur2->getVoiture());
        conducteur2->changerDeVoiture(tempVoiture);
    }
}


void Taxi::attribuerNouvelleVoitureAuPlusKilometre() {
    auto it = std::max_element(conducteurs.begin(), conducteurs.end(),
                               [](const Conducteur& c1, const Conducteur& c2) {
                                   return c1.getKilometrage() < c2.getKilometrage() && c1.estBeaucoupUtilisee();
                               });

    if (it != conducteurs.end()) {
        it->attribuerNouvelleVoiture();
    }
}

void Taxi::afficherInformationsConducteurs() const {
    std::cout << "Informations des conducteurs du taxi " << nomTaxi << " :\n";
    for (const auto& conducteur : conducteurs) {
        std::cout << conducteur.obtenirInformations() << "\n";
    }
Conducteur* Taxi::trouverConducteurParNom(std::string nomConducteur) {
    auto it = std::find_if(conducteurs.begin(), conducteurs.end(),
                           [nomConducteur](const Conducteur& c) { return c.getNom() == nomConducteur; });

    return (it != conducteurs.end()) ? &(*it) : nullptr;
}
