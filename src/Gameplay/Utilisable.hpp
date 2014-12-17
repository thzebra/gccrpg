#ifndef __UTILISABLE_HPP__
#define __UTILISABLE_HPP__

#include "Ramassable.hpp"

class Utilisable : public Ramassable {

protected :
  std::list<Effet> _effets ;
  
public :
  Utilisable(char * nom, int poids, int valeur) ;
  virtual void useObjet(Creature cible) ;
  virtual std::list<Effet> getEffets() ;
  virtual ~Utilisable() ;
}

#endif
