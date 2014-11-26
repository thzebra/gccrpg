#ifndef __PERSO_HPP__
#define __PERSO_HPP__

#include "Inventaire.hpp"
#include "Coordonnees.hpp"

class Perso : public PNJ {

protected :
  std::list<Talent, int> _talents ;
  Humanoide _race ;

public :
  Perso(char *, int, int, int, int, int, Inventaire) ;
  int getPoidsMax() const ;
  void incrementerTalent(Talent, int) ;
  int getNiveau(Talent) ;
  ~Perso() ;

}

#endif
