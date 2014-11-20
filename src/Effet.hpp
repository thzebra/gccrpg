#ifndef __EFFET_HPP__
#define __EFFET_HPP__

class Effet {

protected :
  int _duree ;
  
public :
  Effet() ;
  void declencher() ;
  int getDuree() ;
  bool dureeEstInfinie() ;
  ~Effet() ;
}

#endif
