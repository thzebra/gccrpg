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
  std::map<Caracteristique, int> _carac ;
  Coordonnees _coordonnees ;

public :
  Creature(char *, int, int, int, int, int, int, int, Coordonnees) ;
  virtual void attaquer(Creature) ;
  bool estVivant() const ;
  Coordonnees getCoordonnees() const ;
  virtual int getForce() const ;
  virtual int getDexterite() const ;
  virtual int getChance() const ;
  virtual int getVitesse() const ;
  virtual ~Creature() ;
  
}

#endif
