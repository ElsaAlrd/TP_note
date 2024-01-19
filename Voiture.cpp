#include <iostream>
#include <string>
#include "Voiture.h"



Voiture::Voiture(std::string modele, TypeTypeCarburant  gasoil, int annee, int km)
    : modele(modele), type(type), annee(annee), km(km) {}

void Voiture::augmenterKilometrage(int augmentation) {
    if (augmentation > 0) {
        km += augmentation;
    }
}

std::string Voiture::obtenirInformations() const {
    std::string informations;
    informations += "Modèle: " + modele + "\n";
    informations += "Type de carburant: " + getTypeString() + "\n";
    informations += "Année: " + std::to_string(annee) + "\n";
    informations += "Kilométrage: " + std::to_string(km) + " km\n";
    informations += "Voiture " + (estBeaucoupUtilisee() ? "beaucoup utilisée" : "peu utilisée") + "\n";
    return informations;
}
bool Voiture::estBeaucoupUtilisee() const {
    int anneesUtilisation = 2024 - annee;
    return (km / anneesUtilisation) > 20000;
}

std::string Voiture::getTypeString() const {
    switch (type) {
    case Diesel:
        return "Diesel";
    case Essence:
        return "Essence";
    case Electrique:
        return "Electrique";
    default:
        return "Inconnu";
    }
}