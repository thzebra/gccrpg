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
  if (c) 
    _coordonnees = new Coordonnees(c) ;
  else
    _coordonnees = new Coordonnees(0, 0) ;
  _buffs = new list<Buff>() ;
  _etat = new list<Alteration>() ;
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

string * Creature::getNom() const {
  return _nom ;
}

int Creature::getVie() const {
  return _vie->getNiveau() ;
}

int Creature::getVieMax() const {
  return _vie->getMax() ;
}

int Creature::getMana() const {
  return _mana->getNiveau() ;
}

int Creature::getManaMax() const {
  return _mana->getMax() ;
}

bool Creature::estVivant() const {
  return !_vie->isNul() ;
}

Coordonnees * Creature::getCoordonnees() const {
  return _coordonnees ;
}

list<Alteration> * Creature::getEtat() const {
  return _etat ;
}

list<Buff> * Creature::getBuffs() const {
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
  return (*_carac)[VITESSE] ;
}

int Creature::getAttaque() const {
  //  un itérateur et des trucs
  return _attaqueBase ;
}

int Creature::getDefense() const {
  //  un itérateur et des trucs
  return _defenseBase ;
}

void Creature::bouger(Direction d, int npas) {
  _coordonnees->moveDir(d, npas) ;
}

void Creature::addAlteration(Alteration &a) {
  _etat->push_front(a) ;
}
void Creature::removeAlteration(Alteration &a) {}
void Creature::addBuff(Buff &b) {
  _buffs->push_front(b) ;
}
void Creature::removeBuff(Buff &b) {}

void Creature::modifVie(int i) {
  _vie->modifier(i) ;
}

void Creature::modifMana(int i) {
  _mana->modifier(i) ;
}

void Creature::modifCarac(Caracteristique carac, int i) {
  (*_carac)[carac] += i ;
  if ((*_carac)[carac] <= 0)
    (*_carac)[carac] = 1 ;
}

Creature::~Creature() {
  _vie->~Jauge() ;
  _mana->~Jauge() ;
  _coordonnees->~Coordonnees() ;
  delete _carac ;
}
