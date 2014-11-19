#ifndef __ARME_HPP__
#define __ARME_HPP__

class Arme : public Utilisable {
protected :
  
  Effet effet ;
  bool _estAUneMain ;

public :
  Arme() ;
  void attaquer(Creature) ;
  ~Arme() ;
}

#endif
