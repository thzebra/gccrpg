#ifndef __CREATURE_HPP__
#define __CREATURE_HPP__

#include <cstdio>

class Creature {

public :
  Creature(int) ;
  bool estVivant() const ;
  ~Creature() ;

private :
  int _vie ;
}

#endif
