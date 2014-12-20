#include "Objet.hpp"
#include <cstring>

Objet::Objet(char * nom, int poids, int valeur) {
  strcpy(_nom, nom) ;
  _poids = poids ;
  _valeur = valeur ;
  _enchantements = new std::list<Enchantement> ;
  _elt = NEUTRE ;
}

char * Objet::getNom() const {
  return _nom ;
}

int Objet::getPoids() {
  return _poids ;
}

int Objet::getValeur() {
  return _valeur ;
}

int Objet::getModificateur(Caracteristique c) {
  return _enchantements.getModificateur(c) ;
}

void Objet::utiliser(Perso p) {
  p.upgradeTalent(getTalent()) ;
}

Element Objet::getElement() {
  return _elt ;
}

Objet::~Objet() {
  delete[] _nom ;
  delete _enchantements ;
}
