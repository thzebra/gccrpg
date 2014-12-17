#ifndef __EFFET_HPP__
#define __EFFET_HPP__

class Effet {

protected :
  int _timer ;
  
public :
  Effet(int t) ;
  virtual bool isFini() const ;
  virtual ~Effet() ;
}

#endif
