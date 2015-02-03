#include "Alteration.hpp"

Alteration::Alteration() {}
Alteration::Alteration(EtatAlt a) {
  _alt = a ;
}

void Alteration::getEffet(Creature * c) {
  switch (_alt) {
  case EMPOISONNE :
    c->modifVie(-5) ;
    break ;
  case CONFUS :
    if (_aCommence)
      c->modifCarac(VITESSE, -c->getVitesse()/2) ;
  }
}

void Alteration::endEffet(Creature * c) {
  switch (_alt) {
  case EMPOISONNE :
    break ;
  case CONFUS :
    c->modifCarac(VITESSE, c->getVitesse()) ;
  }
}

Alteration::~Alteration() {}
