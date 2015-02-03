#ifndef __UTILISABLE_HPP__
#define __UTILISABLE_HPP__

#include <list>

#include "Creature.hpp"
#include "Effet.hpp"
#include "Objet.hpp"
#include "GeneralIncludes.hpp"

class Utilisable : public Objet {

protected :
  list<Effet> * _effets ;
  enum Talent _talent ;
  
public :
  Utilisable() ;
  Utilisable(string nom, int poids, int valeur, enum Talent t = NOTALENT) ;
  virtual void useObjet(Creature &cible) ;
  virtual std::list<Effet> * getEffets() ;
  virtual ~Utilisable() ;
} ;

#endif
