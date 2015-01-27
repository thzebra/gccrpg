#include "Coordonnees.hpp"

Coordonnees::Coordonnees(int x, int y) {
  _x = x ;
  _y = y ;
}

Coordonnees::Coordonnees(Coordonnees &c) {
  this->_x = c._x ;
  this->_y = c._y ;
}

Coordonnees::Coordonnees(Coordonnees *c) {
 this->_x = c->_x ;
 this->_y = c->_y ;
} 

int Coordonnees::getx() {
  return _x ;
}

int Coordonnees::gety() {
  return _y ;
}

void Coordonnees::moveDir(Direction d, int i) {
  switch (d) {
  case HAUT :
    Coordonnees::moveHaut(i) ;
    break ;
  case BAS :
    Coordonnees::moveBas(i) ;
    break ;
  case GAUCHE :
    Coordonnees::moveGauche(i) ;
    break ;
  case DROITE :
    Coordonnees::moveDroite(i) ;
  }
}

void Coordonnees::moveHaut(int i) {
  _y += i ;
}

void Coordonnees::moveBas(int i) {
  _y -= i ;
}

void Coordonnees::moveGauche(int i) {
  _x -= i ;
}

void Coordonnees::moveDroite(int i) {
  _x += i ;
}

Coordonnees::~Coordonnees() {
}
