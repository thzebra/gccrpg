#ifndef __RAMASSABLE_HPP__
#define __RAMASSABLE_HPP__

#include "Objet.hpp"

class Ramassable : public Objet {
  
protected :
  int _poids ;
  int _quantite ;
  int _valeur ;

public :
  Ramassable(int, int, int) ;
  int getPoids() ;
  int getQuantite() ;
  int valeurVente() ;
  int valeurAchat() ;
  virtual ~Ramassable() ;
}

#endif
