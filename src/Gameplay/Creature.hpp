#ifndef __CREATURE_HPP__
#define __CREATURE_HPP__

#define MAX_NOM 50

#include "Coordonnees.hpp"

class Creature {

protected :
  char _nom[MAX_NOM] ;
  int _vie ;
  int _vieMax ;
  int _attaqueBase ;
  int _defenseBase ;
  int _force ;
  int _dexterite ;
  int _chance ;
  int _vitesse ;
  Coordonnees _coordonnees ;

public :
  Creature(char) ;
  virtual void attaquer(Creature) ;
  bool estVivant() const ;
  Coordonnees getCoordonnees() const ;
  int getForce() const ;
  int getDexterite() const ;
  int getChance() const ;
  virtual utiliserObjet(Objet) ;
  virtual ~Creature() ;
  
}

#endif
