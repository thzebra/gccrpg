#ifndef __STAT_HPP__
#define __STAT_HPP__

#include "Talent.hpp"
#include "Caracteristique.hpp"

union _Stat {
  Caracteristique c ;
  Talent t ;
} ;

enum typeStat {CARACTERISTIQUE, TALENT} ;

class Stat {
  _Stat _s ;
  typeStat _typeS ;
public :
  Stat() ;
  Stat(Caracteristique c) ;
  Stat(Talent t) ;
  ~Stat() ;
} ;

#endif
