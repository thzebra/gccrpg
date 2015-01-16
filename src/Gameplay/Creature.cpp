#include "Creature.hpp"

Creature::Creature() {} 

Creature::Creature(string nom, int vieMax, int manaMax, int attBase, int defBase, int str, int dex, int lck, int vitesse, Coordonnees * c) {
  _nom = new string(nom) ;
  _vie = new Jauge(vieMax) ;
  _mana = new Jauge(manaMax) ;
  _attaqueBase = attBase ;
  _defenseBase = defBase ;
  _carac = new map<Caracteristique, int> {
    {Caracteristique::FORCE, str}, 
    {Caracteristique::DEXTERITE, dex},
    {Caracteristique::CHANCE, lck},
    {Caracteristique::VITESSE, vitesse}
  };
  _coordonnees = new Coordonnees(c) ;
}

Creature::Creature(Creature &c) {
  this->_nom = new string(*c.getNom()) ;
  this->_vie = new Jauge(c.getVieMax()) ;
  this->_mana = new Jauge(c.getManaMax()) ;
  this->_attaqueBase = c.getAttaque() ;
  this->_defenseBase = c.getDefense() ;
  _carac = new map<Caracteristique, int> {
    {Caracteristique::FORCE, c.getForce()}, 
    {Caracteristique::DEXTERITE, c.getDexterite()},
    {Caracteristique::CHANCE, c.getChance()},
    {Caracteristique::VITESSE, c.getVitesse()}
  };
  _coordonnees = new Coordonnees(c.getCoordonnees()) ;  
}

void Creature::attaquer(Creature * c) {
  // des trucs
}

bool Creature::estVivant() const {
  return !_vie->isNul() ;
}

Coordonnees * Creature::getCoordonnees() const {
  return _coordonnees ;
}

list<Alteration> Creature::getEtat() const {
  return _etat ;
}

list<Buff> Creature::getBuffs() const {
  return _buffs ;
}

int Creature::getForce() const {
  return (*_carac)[FORCE] ;
}

int Creature::getDexterite() const {
  return (*_carac)[DEXTERITE] ;
}

int Creature::getChance() const {
  return (*_carac)[CHANCE] ;
}

int Creature::getVitesse() const {
  return _carac[VITESSE] ;
}

int Creature::getAttaque() const {
  //  un itérateur et des trucs
  return _attaqueBase ;
}

int Creature::getDefense() const {
  //  un itérateur et des trucs
  return _defenseBase ;
}

Creature::~Creature() {
  _vie->~Jauge() ;
  _mana->~Jauge() ;
  _coordonnees->~Coordonnees() ;
  delete _carac ;
}
