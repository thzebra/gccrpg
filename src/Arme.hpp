#ifndef __ARME_HPP__
#define __ARME_HPP__

class Arme : public Utilisable {
protected :
  
  bool _estAUneMain ;
  int degats ;

public :
  Arme() ;
  void attaquer(Creature) ;
  ~Arme() ;
}

#endif
