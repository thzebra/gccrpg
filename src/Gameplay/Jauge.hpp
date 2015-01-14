#ifndef __JAUGE_HPP__
#define __JAUGE_HPP__

class Jauge {
private :
  int _max ;
  int _niveau ;

public :
  Jauge(int max) ;
  Jauge(int max, int niveau) ;
  virtual bool estBleue() ;
  virtual bool estRouge() ;
  virtual bool estVerte() ;
  virtual int getMax() ;
  virtual int getNiveau() ;
  virtual ~Jauge() ;
} ;

#endif
