#include <vector>
#include <string>
#include "Conducteur.h" 

class Taxi {

public:
    Taxi(std::string nom);
    void ajouterConducteur(Conducteur conducteur);
    void supprimerConducteurParNom(std::string nomConducteur);
    void echangerVoitures(std::string nomConducteur1, std::string nomConducteur2);
    void attribuerNouvelleVoitureAuPlusKilometre();
    void afficherInformationsConducteurs() const;

private:
  
    Conducteur* trouverConducteurParNom(std::string nomConducteur);


    std::string nomTaxi;
    std::vector<Conducteur> conducteurs;
};