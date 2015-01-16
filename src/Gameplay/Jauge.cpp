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

void modifier(int ajout){
  return std::min(_max, std::max(0, _niveau + ajout));
}

Jauge::~Jauge() {}
