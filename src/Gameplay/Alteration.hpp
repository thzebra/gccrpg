#ifndef __ALTERATION_HPP__
#define __ALTERATION_HPP__

#include "Effet.hpp"
#include "Creature.hpp"
#include "Caracteristique.hpp"

class Creature ;

enum EtatAlt {EMPOISONNE, CONFUS} ;

class Alteration : public Effet {
private :
  enum EtatAlt _alt  ;
public :
  Alteration() ;
  Alteration(EtatAlt a) ;
  int getModifAttaque() ;
  int getModifDefense() ;
  void affecter(Creature * c) ;
  void endEffet(Creature * c) ;
  ~Alteration() ;
} ;

#endif
