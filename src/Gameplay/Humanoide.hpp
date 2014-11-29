#ifndef __HUMANOIDE_HPP__
#define __HUMANOIDE_HPP__

#include "Creature.hpp"
#include "Arme.hpp"
#include "Armure.hpp"

class Humanoide : public Creature {

protected : 
  Inventaire _stuff ;
  int _charisme ;
  int _intelligence ;
  virtual int getCharisme() const ;
  virtual int getIntelligence() const ;

public :
  Humanoide(int, int, char *) ;
  char * getNom() ;
  void setNom(char *) ;
  virtual ~Humanoide() ;

}

#endif
