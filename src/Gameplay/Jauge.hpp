#ifndef __JAUGE_HPP__
#define __JAUGE_HPP__

class Jauge {
private :
  int _max ;
  int _niveau ;

public :
  Jauge() ;
  Jauge(int max) ;
  Jauge(int max, int niveau) ;
  virtual bool isNul() ;
  virtual bool isCritique() ;
  virtual bool isLessThanMoitie() ;
  virtual int getMax() ;
  virtual int getNiveau() ;
  void modifier(int ajout) ;
  virtual ~Jauge() ;
} ;

#endif
