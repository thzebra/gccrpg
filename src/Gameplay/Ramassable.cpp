#include "Ramassable.hpp"

Ramassable::Ramassable(char* nom, Talent talent, int modif, int poids, int quantite, int valeur):Objet(nom, talent, modif){
  _poids = poids;
  _quantite = quantite;
  _valeur = valeur;
}


  int Ramassable::getPoids(){
    return _poids;
}


  int Ramassable::getQuantite(){
    return _quantite;
}


  int Ramassable::valeurVente(){
    return _valeur;
}


  int Ramassable::valeurAchat(){
    return (_valeur*2);
}


  Ramassable::~Ramassable(){
}


