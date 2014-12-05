#ifndef __OBJET_HPP__
#define __OBJET_HPP__

#include "Talent.hpp"

#define MAX_NOM 50 ;

class Objet {
protected :
  char _nom[MAX_NOM] ;
  Talent _talentAssocie ;
  int _modificateur ;
  
public :
  Objet(char * nom, Talent t, int modif = 0) ;
  virtual char * getNom() const ;
  virtual Talent getTalent() const ;
  virtual ~Objet() ;
}

#endif
