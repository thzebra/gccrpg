#ifndef __HUMAIN_HPP__
#define __HUMAIN_HPP__

#include "Creature.hpp"

class Humain : public Humanoide {

public :
  Humain(int, int, char *) ;
  char * getNom() ;
  void setNom(char *) ;
  virtual ~Humain() ;

}

#endif
