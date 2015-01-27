#include "Utilisable.hpp"

Utilisable::Utilisable() {}

Utilisable::Utilisable(string nom, int poids, int valeur) {
  _nom = new string(nom) ;
  _poids = poids ;
  _valeur = valeur ;
  _enchantements = new std::list<Enchantement> ;
  _effets = new list<Effet> ;
  _elt = NEUTRE ;
}

void Utilisable::useObjet(Creature &cible) {}

list<Effet> * Utilisable::getEffets() {
  return _effets ;
}

Utilisable::~Utilisable() {
  delete _nom ;
  delete _enchantements ;
  delete _effets ;
}
  
