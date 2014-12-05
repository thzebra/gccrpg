#ifndef __PNJ_HPP__
#define __PNJ_HPP__

#include "Humanoide.hpp"
#include "Inventaire.hpp"

class PNJ : public Humanoide {
  
private : 
  Inventaire _stuff ;
  Humanoide _race ;
  
public :
  PNJ(char * nom, Inventaire stuff, Humanoide race) ;
  virtual void utiliserObjet(Objet, Creature) ;
  virtual ~PNJ() ;
  
}

#endif
