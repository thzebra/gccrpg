#ifndef __UTILISABLE_HPP__
#define __UTILISABLE_HPP__

#include "Ramassable.hpp"

class Utilisable : public Ramassable {

protected :
  int _emplacement ;

public :
  Utilisable() ;
  bool aCompetencesRequises(Perso) ;
  void utiliser() ;
  virtual ~Utilisable() ;
}

#endif
