#ifndef __OBJET_HPP__
#define __OBJET_HPP__

#include "Talent.hpp"

class Objet {
protected :
  char * _nom ;
  Talent _talentAssocie ;

public :
  Objet(char *) ;
  char * getNom() ;
  Talent getTalent() ;
  virtual ~Objet() ;
}

#endif
