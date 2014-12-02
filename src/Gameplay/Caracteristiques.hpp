#ifndef __CARACTERISTIQUES_HPP__
#define __CARACTERISTIQUES_HPP__

class Caracteristiques {

private:  
  int _force ;
  int _dexterite ;
  int _chance ;
  int _vitesse ;

public :
  Caracteristiques(int, int, int, int) ;
  Caracteristiques(int, int, int, int, int, int) ;
  int getForce() const ;
  int getDexterite() const ;
  int getChance() const ;
  int getVitesse() const ;
  void setForce(int) ;
  void Dexterite(int) ;
  void setChance(int) ;
  void setVitesse(int) ;
  ~Caracteristiques() ;
}

#endif
