#ifndef __ORC_HPP__
#define __ORC_HPP__

#include "Humanoide.hpp"

class Orc : public Humanoide {

public :
  Orc(int, int, char *) ;
  char * getNom() ;
  void setNom(char *) ;
  virtual ~Orc() ;
}

#endif
