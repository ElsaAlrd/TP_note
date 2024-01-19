int main() {
 Voiture maVoiture("clio",Essence,2020, 50000);
 maVoiture.afficherInformations();

 
    maVoiture.setKilometrage(55000);
    maVoiture.setType(Diesel);
    maVoiture.afficherInformations();

    return 0;
}


}