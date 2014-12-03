#include "Talent.hpp"
#include <cstring>

Talent::Talent(char * nom) {
  strcpy(_nom, nom) ;
}

char Talent::getNom() {
  return _nom ;
}

Talent::~Talent() {
}
