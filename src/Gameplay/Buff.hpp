#ifndef __BUFF_HPP__
#define __BUFF_HPP__

#include "Effet.hpp"
#include "Caracteristique.hpp"
#include "Talent.hpp"
#include "GeneralIncludes.hpp"
#include "Stat.hpp"

class Buff : public Effet {
private :
  Stat * _stat ;
  int _modif ;
public :
  Buff() ;
  Buff(Caracteristique c, int m) ;
  Buff(Talent t, int m) ;
  pair<Stat, int> getModificateur() ;
  ~Buff() ;
} ;

#endif
