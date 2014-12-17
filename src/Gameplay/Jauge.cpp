#include "Jauge.hpp"

Jauge::Jauge(int max) {
  _max = max ;
  _niveau = max ;
}

Jauge::Jauge(int max, int niveau) {
  _max = max ;
  _niveau = niveau ;
}

bool Jauge::estVerte() {
  return (_niveau <= _max && _niveau > 0) ;
}

bool Jauge::estRouge() {
  return (_niveau < 0) ;
}

bool Jauge::estBleue() {
  return (_niveau > max) ;
}

int Jauge::getMax() {
  return _max ;
}

int Jauge::getNiveau() {
  return _niveau ;
}

Jauge::~Jauge() {}
