#ifndef __PNJ_HPP__
#define __PNJ_HPP__

#include "Humanoide.hpp"
#include "Inventaire.hpp"

class PNJ : public Humanoide {
  
private : 
  Inventaire _stuff ;
  
public :
  PNJ(char, Inventaire) ;
  virtual void utiliserObjet(Objet) ;
  virtual ~PNJ() ;
  
}

#endif
