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
