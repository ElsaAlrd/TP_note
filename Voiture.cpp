#include <iostream>
#include <string>
#include "Voiture.h"


// Constructeur avec tous les paramètres obligatoires
Voiture::Voiture(std::string modele, TypeCarburant type, int annee, int km)
    : modele(modele), type(type), annee(annee), km(km) {}

// Fonction pour modifier le kilométrage (augmentation seulement)
void Voiture::augmenterKilometrage(int augmentation) {
    if (augmentation > 0) {
        km += augmentation;
    }
}

// Fonction pour récupérer les informations de la voiture sous forme de chaîne de caractères
std::string Voiture::obtenirInformations() const {
    std::string informations;
    informations += "Modèle: " + modele + "\n";
    informations += "Type de carburant: " + getTypeString() + "\n";
    informations += "Année: " + std::to_string(annee) + "\n";
    informations += "Kilométrage: " + std::to_string(km) + " km\n";
    informations += "Voiture " + (estBeaucoupUtilisee() ? "beaucoup utilisée" : "peu utilisée") + "\n";
    return informations;
}

// Fonction privée pour calculer si une voiture est beaucoup utilisée
bool Voiture::estBeaucoupUtilisee() const {
    int anneesUtilisation = 2024 - annee;
    return (km / anneesUtilisation) > 20000;
}

// Fonction privée pour obtenir une chaîne de caractères à partir de l'énumération TypeCarburant
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