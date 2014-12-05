#ifndef __UTILISABLE_HPP__
#define __UTILISABLE_HPP__

#include "Ramassable.hpp"

class Utilisable : public Ramassable {

protected :
  Emplacement _emplacement ;
  
public :
  Utilisable(char * nom, Talent t, int modif, int poids, int qte, int valeur, Emplacement e) ;
  void utiliser() ;
  virtual ~Utilisable() ;
}

#endif
