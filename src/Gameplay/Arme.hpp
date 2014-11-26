#ifndef __ARME_HPP__
#define __ARME_HPP__

#include "Creature"

class Arme : public Utilisable {

protected :
  
  bool _estAUneMain ;
  int degats ;
  Element _element ;
  std::list<Enchantement> _enchantements ;

public :
  Arme() ;
  bool estAUneMain() ;
  virtual ~Arme() ;
}

#endif
