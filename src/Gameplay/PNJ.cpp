#include "PNJ.hpp"

PNJ::PNJ(char * nom, int vie, int mana,
	 int attaqueBase, int defenseBase,
	 int force, int dexterite, int chance,
	 int vitesse, Inventaire stuff,
	 Coordonnees c = Coordonnees(0, 0)) {
  _corps = Humanoide(nom, vie, mana, attaqueBase,
		     defenseBase, force, dexterite,
		     chance, vitesse, stuff, c) ;
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
  _stuff.pickSous(o->getPrix()) ;
}

void PNJ::getSous() {
  return _stuff.getSous() ;
}

PNJ PNJ::createElfe(char * nom) {
  PNJ newElfe = new PNJ(nom, 
			20, 20, 4, 4, 3, 6, 5, 5, ELFE,
			new Inventaire(), new Coordonnees(0, 0)) ;
  return newElfe ;
}

PNJ PNJ::createOrc(char * nom) {
  PNJ newOrc = new PNJ(nom,
		       40, 14, 7, 6, 6, 2, 7, 3, ORC,
		       new Inventaire(), new Coordonnees(0, 0)) ;
  return newOrc ;
}

PNJ PNJ::createHumain(char * nom) {
  PNJ newHumain = new PNJ(nom,
			  30, 17, 5, 5, 4, 4, 6, 4, HUMAIN,
			  new Inventaire(), new Coordonnees(0, 0)) ;
  return newHumain ;
}

void PNJ::~PNJ() {
  _stuff.~Inventaire() ;
  _corps.~Humanoide() ;
}
