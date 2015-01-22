#include "Objet.hpp"

Objet::Objet(string nom, int poids, int valeur) {
  _nom = new string(nom) ;
  _poids = poids ;
  _valeur = valeur ;
  _enchantements = new std::list<Enchantement> ;
  _elt = NEUTRE ;
}

string * Objet::getNom() const {
  return _nom ;
}

int Objet::getPoids() const {
  return _poids ;
}

int Objet::getValeur() const {
  return _valeur ;
}

int Objet::getModificateur(Caracteristique c) {
  int modif = 0 ;
  for (Enchantement &ench : *_enchantements)
    modif += ench.getModificateur(c) ;
  return modif ;
}

Element Objet::getElement() {
  return _elt ;
}

bool Objet::operator==(const Objet & obj) const {
  return (this->_nom)->compare(*(obj._nom)) ;
}

Objet::~Objet() {
  delete[] _nom ;
  delete _enchantements ;
}
