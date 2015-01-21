#ifndef __TALENT_HPP__
#define __TALENT_HPP__

// on avait pas dit que talent c'était une enum ?

#include "GeneralIncludes.hpp"

#define MAX_NOM 50

class Talent {

protected :
  string * _nom ;
  
public :
  Talent (string nom) ;
  string * getNom() ;
  ~Talent() ;
} ;

#endif
