#ifndef __ELFE_HPP__
#define __ELFE_HPP__

#include "Creature.hpp"

class Elfe : public Humanoide {

public :
  Elfe(int, int, char *) ;
  char * getNom() ;
  void setNom(char *) ;
  virtual ~Elfe() ;
}

#endif
