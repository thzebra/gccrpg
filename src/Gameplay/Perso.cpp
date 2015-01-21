#include "Perso.hpp"
#include "Palier.hpp"

Perso::Perso() {}

Perso::Perso(string nom, int vie, int mana, int attaqueBase,
	     int defenseBase, int force, int dexterite, int chance,
	     int vitesse, int charisme, int intelligence,
	     Race_Humanoide race, Coordonnees * c) {
  _corps = new Humanoide(nom, vie, mana, attaqueBase, defenseBase, force, dexterite, chance, vitesse, charisme, intelligence, race, c) ;
  _stuff = new Inventaire() ;
  _talents = new std::map<Talent, int> ;
}

Perso * Perso::createPerso(string nom, Race_Humanoide race) {
  Perso * p ;
  switch (race % 3) {
  case ELFE :
    p = createElfe(nom) ;
  case ORC :
    p = createOrc(nom) ;
  case HUMAIN :
    p = createHumain(nom) ;
  }
  return p ;
}

void Perso::upgradeTalent(Talent t) {
  ++(*_talents)[t] ;
}

void Perso::forgetTalent(Talent t) {
  --(*_talents)[t] ;
}

int Perso::getTalentLevel(Talent t) {
  Palier p = Palier() ;
  return p.niveau((*_talents)[t]) ;
}

Perso * Perso::createElfe(string nom) {
  Perso newElfe = new Perso(nom, 
			    20, 20, 4, 4, 3, 6, 5, 5, 8, 6, ELFE,
			    new Inventaire(), new Coordonnees(0, 0)) ;
  return newElfe ;
}

Perso * Perso::createOrc(string nom) {
  Perso newOrc = new Perso(nom,
			   40, 14, 7, 6, 6, 2, 7, 3, 4, 8, ORC,
			   new Inventaire(), new Coordonnees(0, 0)) ;
  return newOrc ;
}

Perso * Perso::createHumain(string nom) {
  Perso newHumain = new Perso(nom,
			      30, 17, 5, 5, 4, 4, 6, 4, 6, 7, HUMAIN,
			      new Inventaire(), new Coordonnees(0, 0)) ;
  return newHumain ;
}

Perso::~Perso() {
  delete _nom ;
  _stuff.Inventaire::~Inventaire() ;
}
