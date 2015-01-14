#ifndef __COORDONNEES_HPP__
#define __COORDONNEES_HPP__

enum Direction {HAUT, BAS, GAUCHE, DROITE} ;

class Coordonnees {
protected :
  int _x, _y ;

public :
  Coordonnees(int x, int y) ;
  int getx() ;
  int gety() ;
  void moveHaut(int i = 1) ;
  void moveBas(int i = 1) ;
  void moveGauche(int i = 1) ;
  void moveDroite(int i = 1) ;
  ~Coordonnees() ;
} ;

#endif
