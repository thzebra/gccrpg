#ifndef __CREATURE_HPP__
#define __CREATURE_HPP__

#define MAX_NOM 50

#include "Coordonnees.hpp"

class Creature {

protected :
  char _nom[MAX_NOM] ;
  Jauge _vie ;
  int _attaqueBase ;
  int _defenseBase ;
  Caracteristiques _carac ;
  Coordonnees _coordonnees ;

public :
  Creature(char *, int, int, int, int, int, int, int, Coordonnees) ;
  virtual void attaquer(Creature) ;
  bool estVivant() const ;
  Coordonnees getCoordonnees() const ;
  int getForce() const ;
  int getDexterite() const ;
  int getChance() const ;
  int getVitesse() const ;
  virtual ~Creature() ;
  
}

#endif
