#ifndef __ARME_HPP__
#define __ARME_HPP__

class Arme : public Utilisable {

protected :
  
  bool _estAUneMain ;
  int _degats ;
  Element _element ;
  std::list<Enchantement> _enchantements ;

public :
  Arme() ;
  bool estAUneMain() ;
  int getAttaque() ;
  Element getElement();
  virtual ~Arme() ;
} ;

#endif
