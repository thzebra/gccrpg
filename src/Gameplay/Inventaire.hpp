#ifndef __INVENTAIRE_HPP__
#define __INVENTAIRE_HPP__

#include "Objet.hpp"

class Inventaire {

protected :

  std::list _stuff ;

public :
  Inventaire() ;
  int getPoidsTotal() ;
  bool contient(Objet) ;
  void retirer(Objet) ;
  void ajouter(Objet) ;
  ~Inventaire() ;

}

#endif
