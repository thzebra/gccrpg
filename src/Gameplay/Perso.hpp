#ifndef __PERSO_HPP__
#define __PERSO_HPP__

#include "PNJ.hpp"
#include "Talent.hpp"

class Perso : public PNJ {

protected :
  std::list<Talent, int> _talents ;
  
public :
  Perso(char *, int, int, int, int, int, Inventaire) ;
  int getPoidsMax() const ;
  void incrementerTalent(Talent t, int exp) ;
  int getNiveau(Talent t) ;
  bool aCompetencesRequises(Objet o) const ;
  ~Perso() ;

}

#endif
