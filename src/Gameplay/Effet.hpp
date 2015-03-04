#ifndef __EFFET_HPP__
#define __EFFET_HPP__

struct Creature ;

class Effet {

protected :
  int _timer ;
  bool _aCommence ;
  
public :
  Effet() ;
  Effet(int t) ;
  virtual void affecter(Creature * c) ;
  virtual bool isFini() const ;
  virtual void endEffet() ;
  virtual void step() ;
  virtual ~Effet() ;
} ;

#endif
