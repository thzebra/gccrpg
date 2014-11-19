#ifndef __RAMASSABLE_HPP__
#define __RAMASSABLE_HPP__

class Ramassable : public Objet {
  
protected :
  int _poids ;
  int _quantite ;
  int _valeur ;

public :
  Ramassable(int, int, int) ;
  int getPoids() ;
  int getQuantite() ;
  int getValeur() ;
  ~Ramassable() ;
}

#endif
