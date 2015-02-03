#include "Effet.hpp"

Effet::Effet() {}

Effet::Effet(int t) {
  _timer = t ;
  _aCommence = false ;
}

bool Effet::isFini() const {
  return _timer == 0 ;
}

void Effet::step() {
  _aCommence = true ;
  if (isFini())
    endEffet() ;
  if (_timer > 0)
    --_timer ;
}

void Effet::endEffet() {}

Effet::~Effet() {}
