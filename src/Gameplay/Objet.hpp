#ifndef __OBJET_HPP__
#define __OBJET_HPP__

#include "Talent.hpp"

#define MAX_NOM 50 ;

class Objet {
protected :
  char _nom[MAX_NOM] ;
  int _poids ;
  int _valeur ;
  
public :
  Objet(char * nom, int poids, int valeur) ;
  virtual char * getNom() const ;
  virtual int getPoids() const ;
  virtual int getValeur() const ;
  virtual ~Objet() ;
}

#endif
