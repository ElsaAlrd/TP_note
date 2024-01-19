#define VOITURE_H
#ifndef VOITURE_H
#include <iostream>
#include <string>
#include <vector>

class Voiture{
Private: 
    // Fonction privée pour obtenir une chaîne de caractères à partir de l'énumération TypeCarburant
    std::string getTypeString() const {
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

    // Attributs de la classe
    std::string modele;
    TypeCarburant type;
    int annee;
    int km;
};

public: 
Voiture (std:: string modele, TypeCarburant,int annee,int Km): modele(modele),type(type),annee(annee),km(km){}

void setModele(const std::string& ,newModele){
    modele= newModele;
}

void setType (typeCarburant newType){
    type =newType;

}

void setAnnee(int newAnnee){
    annee = newAnnee;

}

void setKilometrage(int newKm) {
        km = newKm;
    }
int CalculerAnneeUtilisation ()const{
    if (km > 0 && annee> 0){
        return km/  annee; 
    }
    else {
        return 0;
    }
    }
    void afficherInformations() const {
        std::cout << "Modèle: " << modele << std::endl;
        std::cout << "Type de carburant: " << getTypeString() << std::endl;
        std::cout << "Année: " << annee << std::endl;
        std::cout << "Kilométrage: " << km << " km" << std::endl;
        std::cout << "Nombre d'années d'utilisation: " << calculerAnneesUtilisation() << " ans" << std::endl;
    }


   
    }


}

#endif


{}