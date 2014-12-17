#ifndef __INVENTAIRE_HPP__
#define __INVENTAIRE_HPP__

#include "Objet.hpp"

class Inventaire {

protected :

  std::list<Objet*> _stuff ;

public :
  Inventaire() ;
  virtual int getPoidsTotal() const;
  virtual bool contient(Objet& obj) const;
  virtual void retirer(Objet& obj) ;
  virtual void ajouter(Objet&obj) ;
  virtual ~Inventaire() ;
}

#endif
