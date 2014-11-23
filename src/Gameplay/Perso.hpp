#ifndef __PERSO_HPP__
#define __PERSO_HPP__

class Perso : Humain {

  int _force ;
  int _charisme ;
  int _intelligence ;
  int _chance ;
  int _dexterite ;
  Inventaire _stuff ;

public :

  int getForce() const ;
  int getCharisme() const ;
  int getIntelligence() const ;
  int getChance() const ;
  int getDexterite() const ;
  int getPoidsMax() const ;
  ~Perso() ;

}

#endif
