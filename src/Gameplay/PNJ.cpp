#include "PNJ.hpp"

PNJ::PNJ(char * nom, int vie, int mana, int attaqueBase, int defenseBase, int force, int dexterite, int chance, int vitesse, Inventaire stuff, Coordonnees c = Coordonnees(0, 0)) {
  _corps = Humanoide(nom, vie, mana, attaqueBase, defenseBase, force, dexterite, chance, vitesse, stuff, c) ;
  _stuff = Inventaire(&stuff) ;
}

int PNJ::getPoids() const {
  return _stuff.getPoids() ;
}

int PNJ::getPoidsMax() {
  // TODO j'ai mis un truc au pif
  return _corps.getForce() * 50 ;
}

void PNJ::utiliserObjet(Objet &o, Creature c) {
  // kedalle pour l'instant
}

void PNJ::pickObjet(Objet &o) {
  if (o.getPoids() + getPoids() <= getPoidsMax()) {
    _stuff.ajouter(&o) ;
  }
}

void PNJ::dumpObjet(Objet &o) {
  _stuff.retirer(&o) ;
}

int PNJ::getPrix(Objet &o) {
  return o.getPrix() ;
}

void PNJ::vendre(Objet &o) {
  _stuff.retirer(&o) ;
  _stuff.setSous(o->getPrix() + _stuff.getSous()) ;
}

void PNJ::getSous() {
  return _stuff.getSous() ;
}

void PNJ::~PNJ() {
  _stuff.~Inventaire() ;
  _corps.~Humanoide() ;
}
