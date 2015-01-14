#include "Coordonnees.hpp"

Coordonnees::Coordonnees(int x, int y) {
  _x = x ;
  _y = y ;
}

int Coordonnees::getx() {
  return _x ;
}

int Coordonnees::gety() {
  return _y ;
}

void Coordonnees::moveHaut(int i = 1) {
  _y += i ;
}

void Coordonnees::moveBas(int i = 1) {
  _y -= i ;
}

void Coordonnees::moveGauche(int i = 1) {
  _x -= i ;
}

void Coordonnees::moveDroite(int i = 1) {
  _x += i ;
}

Coordonnees::~Coordonnees() {
}
