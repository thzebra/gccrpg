#include "Enchantement.hpp"

Enchantement::Enchantement(Element elt, std::map<Caracteristique, int> modifCarac, int modifAttaque, int modifDefense) {
  _elt = elt ;
  _modifAttaque = modifAttaque ;
  _modifDefense = modifDefense ;
  _modifCaracs = new map<Caracteristique, int> ;
  for (map<Caracteristique, int>::iterator it = _modifCaracs->begin() ;
       it != _modifCaracs->end() ;
       ++it) {
    // des trucs
  }
}

Element Enchantement::getElement() {
  return _elt ;
}

int Enchantement::getModificateur(Caracteristique c) {
  return (*_modifCaracs)[c] ;
}

int Enchantement::getModifDefense() {
  return _modifDefense ;
}

int Enchantement::getModifAttaque() {
  return _modifAttaque ;
}

bool Enchantement::isApplicable(Objet o) {
  return (o.getElement() == NEUTRE
	  || this->getElement() == NEUTRE
	  || this->getElement() == o.getElement()
	  ) ;
}

Enchantement::~Enchantement() {
  delete _modifCaracs ;
}

