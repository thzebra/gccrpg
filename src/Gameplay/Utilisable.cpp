#include "Utilisable.hpp"

Utilisable::Utilisable() {}

Utilisable::Utilisable(string nom, int poids, int valeur, enum Talent t) {
  _nom = new string(nom) ;
  _poids = poids ;
  _valeur = valeur ;
  _enchantements = new std::list<Enchantement> ;
  _effets = new list<Effet> ;
  _elt = NEUTRE ;
  _talent = t ;
}

void Utilisable::useObjet(Creature * cible) {
  for (list<Effet>::iterator it = _effets->begin() ; it != _effets->end() ; ++it) {
    it->affecter(cible) ;
  }
}

list<Effet> * Utilisable::getEffets() {
  return _effets ;
}

Utilisable::~Utilisable() {
  delete _nom ;
  delete _enchantements ;
  delete _effets ;
}
  
