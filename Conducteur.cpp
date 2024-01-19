#include<iostream>
#include"Conducteur.h"
#include "Voiture.h"

Conducteur::Conducteur(std::string nom,int experience, Voiture voiture)
    : nom(nom), experience(0), voiture(voiture) {}

void Conducteur::faireEvoluerExperience(int augmentation) {
    experience += augmentation;
    ajusterExperience();
}

void Conducteur::changerDeVoiture(const Voiture& nouvelleVoiture) {
    voiture = nouvelleVoiture;
}

std::string Conducteur::obtenirInformations() const {
    std::string informations;
    informations += "Nom du conducteur: " + nom + "\n";
    informations += "Expérience du conducteur: " + std::to_string(experience) + "\n";
    informations += "Informations de la voiture du conducteur:\n" + voiture.obtenirInformations();
    return informations;
}

void Conducteur::ajusterExperience() {
    if (experience < 0) {
        experience = 0;
    } else if (experience > 100) {
        experience = 100;
    }
}