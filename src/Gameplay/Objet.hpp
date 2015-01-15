#ifndef __OBJET_HPP__
#define __OBJET_HPP__

#include <list>

#include "Talent.hpp"
#include "Perso.hpp"
#include "Element.hpp"
#include "Enchantement.hpp"
#include "Caracteristique.hpp"

#define MAX_NOM_OBJET 50

#include <list>

#include "Element.hpp"
#include "Enchantement.hpp"
#include "Talent.hpp"

class Objet {
protected :
  char _nom[MAX_NOM_OBJET] ;
  int _poids ;
  int _valeur ;
  Element _elt ;
  std::list<Enchantement> _enchantements ;
  
public :
  Objet(char * nom, int poids, int valeur) ;
  virtual char * getNom() const ;
  virtual int getPoids() const ;
  virtual int getValeur() const ;
  virtual int getModificateur(Talent t) ;
  virtual int getModificateur(Caracteristique c) ;
  virtual int getAttaque() ;
  virtual int getDefense() ;
  virtual void utiliser(Perso p) ;
  virtual Talent getTalent() ;
  virtual Element getElement() ;
  virtual ~Objet() ;
} ;

#endif
