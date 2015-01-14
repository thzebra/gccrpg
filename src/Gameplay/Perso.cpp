#include "Perso.hpp"
#include "Palier.hpp"

Perso::Perso(char * nom, int vie, int mana, int attaqueBase,
	     int defenseBase, int force, int dexterite, int chance,
	     int vitesse, Race_Humanoide race, Inventaire stuff,
	     Coordonnees c = Coordonnees(0, 0)) {
  _corps = Humanoide(nom, vie, mana, attaqueBase, defenseBase, force, dexterite, chance, vitesse, race, stuff, c) ;
  _stuff = Inventaire(&stuff) ;
  _talents = new std::map<Talent, int> ;
}

void Perso::upgradeTalent(Talent t) {
  ++_talents[t] ;
}

void Perso::forgetTalent(Talent t) {
  --_talents[t] ;
}

int Perso::getTalentLevel(Talent t) {
  Palier p = Palier() ;
  return p.niveau(_talents[t]) ;
}

Perso Perso::createElfe(char * nom) {
  Perso newElfe = new Perso(nom, 
			20, 20, 4, 4, 3, 6, 5, 5, ELFE,
			new Inventaire(), new Coordonnees(0, 0)) ;
  return newElfe ;
}

Perso Perso::createOrc(char * nom) {
  Perso newOrc = new Perso(nom,
		       40, 14, 7, 6, 6, 2, 7, 3, ORC,
		       new Inventaire(), new Coordonnees(0, 0)) ;
  return newOrc ;
}

Perso Perso::createHumain(char * nom) {
  Perso newHumain = new Perso(nom,
			  30, 17, 5, 5, 4, 4, 6, 4, HUMAIN,
			  new Inventaire(), new Coordonnees(0, 0)) ;
  return newHumain ;
}


Perso Perso::createPerso(char * nom, Race_Humanoide race) {
    switch (race % 3) {
  case ELFE :
    return createElfe(nom) ;
  case ORC :
    return createOrc(nom) ;
  case HUMAIN :
    return createHumain(nom) ;
  }
}

Perso::~Perso() {
  delete _nom ;
  _stuff.Inventaire::~Inventaire() ;
}
