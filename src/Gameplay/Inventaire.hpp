#ifndef __INVENTAIRE_HPP__
#define __INVENTAIRE_HPP__

#include "GeneralIncludes.hpp"
#include "Objet.hpp"

class Objet ;

class Inventaire {

protected :

  int _sous ;
  std::list<Objet> * _stuff ;

public :
  Inventaire() ;
  virtual int getPoidsTotal() const;
  virtual bool contient(Objet& obj) const;
  virtual void retirer(Objet& obj) ;
  virtual void ajouter(Objet&obj) ;
  virtual void vendre(Objet &o) ;
  virtual int getSous() ;
  virtual void pickSous(int s) ;
  virtual void infosTexte() ;
  virtual ~Inventaire() ;
} ;

#endif
