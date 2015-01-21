#include "Talent.hpp"
#include <cstring>

Talent::Talent(string nom) {
  _nom = new string(&nom) ;
}

string * Talent::getNom() {
  return _nom ;
}

Talent::~Talent() {
}
