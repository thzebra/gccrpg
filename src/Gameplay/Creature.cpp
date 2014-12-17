#include "Creature.hpp"
#include <cstring>

Creature::Creature(char * nom, int vieMax, int attBase, int defBase, int str, int dex, int lck, int vitesse, Coordonnees c = Coordonnees(0, 0)) {
  _nom = strcpy(_nom, nom) ;
  _vie = Jauge(vieMax) ;
  _attaqueBase = attBase ;
  _defenseBase = defBase ;
  _carac = new std::map<Caracteristique, int> {
    {(Caracteristique::FORCE, str)}, 
    {(Caracteristique::DEXTERITE, dex)},
    {(Caracteristique::CHANCE, lck)},
    {(Caracteristique::VITESSE, vitesse)}
  };
  _coordonnees = Coordonnees(&c) ;
}

void Creature::attaquer(Creature) {
  // des trucs
}

bool Creature::estVivant() {
  return !_vie.estRouge() ;
}

Coordonnees Creature::getCoordonnees() {
  return _coordonnees ;
}

std::list<Alteration> Creature::getEtat() {
  // TODO
}

std::list<Buff> Creature::getBuffs() {
  // TODO
}

int Creature::getForce() {
  return _carac.getForce() ;
}

int Creature::getDexterite() {
  return _carac.getDexterite() ;
}

int Creature::getChance() {
  return _carac.getChance() ;
}

int Creature::getVitesse() {
  return _carac.getVitesse() ;
}

virtual Creature::~Creature() {
  _vie.~Jauge() ;
  _coordonnees.~Coordonnees() ;
}
