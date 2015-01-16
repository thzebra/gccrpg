#ifndef __UTILISABLE_HPP__
#define __UTILISABLE_HPP__

#include <list>

#include "Creature.hpp"
#include "Effet.hpp"
#include "Objet.hpp"

class Utilisable : public Objet {

protected :
  std::list<Effet> _effets ;
  
public :
  Utilisable(char * nom, int poids, int valeur) ;
  virtual void useObjet(Creature cible) ;
  virtual std::list<Effet> getEffets() ;
  virtual ~Utilisable() ;
} ;

#endif
