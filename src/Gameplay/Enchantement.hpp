#ifndef __ENCHANTEMENT_HPP__
#define __ENCHANTEMENT_HPP__

#include "Element.hpp"
#include "Caracteristique.hpp"
#include "Objet.hpp"

class Enchantement {
protected :
  Element _elt ;
  std::map<Caracteristique, int> _modifCaracs ;
  int _modifAttaque ;
  int _modifDefense ;
  
public :
  Enchantement(Element elt, std::map<Caracteristique, int> modifCaracs, int modifAttaque, int modifDefense) ;
  Element getElement() ;
  int getModificateur(Caracteristique c) ;
  int getModifAttaque() ;
  int getModifDefense() ;
  bool isApplicable(Objet o) ;
  ~Enchantement() ;
} ;

#endif