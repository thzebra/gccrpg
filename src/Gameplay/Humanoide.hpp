#ifndef __HUMANOIDE_HPP__
#define __HUMANOIDE_HPP__

#include "Creature.hpp"
#include "Inventaire.hpp"

class Humanoide : public Creature {

protected : 
  Inventaire _stuff ;
  int _charisme ;
  int _intelligence ;

public :
  Humanoide(char * nom, int vieMax, int attBase, int defBase, int str, int dex, int lck, int vitesse, int charisme, int intelligence, Coordonnees c) ;
  virtual int getCharisme() const ;
  virtual int getIntelligence() const ;
  virtual ~Humanoide() ;

}

#endif
