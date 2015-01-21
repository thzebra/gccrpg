#include "Jauge.hpp"

Jauge::Jauge() {}

Jauge::Jauge(int max) {
  _max = max ;
  _niveau = max ;
}

Jauge::Jauge(int max, int niveau) {
  _max = max ;
  _niveau = niveau ;
}

bool Jauge::isNul() {
  return (_niveau == 0) ;
}

bool Jauge::isCritique() {
  return (_niveau < (_max*.2)) ;
}

bool Jauge::isLessThanMoitie() {
  return (_niveau < _max*.5) ;
}

int Jauge::getMax() {
  return _max ;
}

int Jauge::getNiveau() {
  return _niveau ;
}

void Jauge::modifier(int ajout){
  if (_niveau + ajout > _max)
    _niveau = _max ;
  else {
    if (_niveau + ajout < 0)
      _niveau = 0 ;
    else
      _niveau += ajout ;
  }
}

Jauge::~Jauge() {}
