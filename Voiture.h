#define VOITURE_H
#ifndef VOITURE_H
#include <iostream>
#include <string>
#include <vector>

// Enumération pour le type de carburant
enum TypeCarburant {
    Diesel,
    Essence,
    Electrique
};

class Voiture {
public:
    // Constructeur avec tous les paramètres obligatoires
    Voiture(std::string modele, TypeCarburant type, int annee, int km);

    // Fonction pour modifier le kilométrage (augmentation seulement)
    void augmenterKilometrage(int augmentation);

    // Fonction pour récupérer les informations de la voiture sous forme de chaîne de caractères
    std::string obtenirInformations() const;

private:
    // Fonction privée pour calculer si une voiture est beaucoup utilisée
    bool estBeaucoupUtilisee() const;

    // Fonction privée pour obtenir une chaîne de caractères à partir de l'énumération TypeCarburant
    std::string getTypeString() const;

    // Attributs de la classe
    std::string modele;
    TypeCarburant type;
    int annee;
    int km;
};


#endif