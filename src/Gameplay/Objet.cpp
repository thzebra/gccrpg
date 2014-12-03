#include "Objet.hpp"
#include <cstring>

Objet::Objet(char * nom, Talent t, int modif) {
  strcpy(_nom, nom) ;
  _talentAssocie = t ;
  _modificateur = modif ;
}

char * Objet::getNom() const {
  return _nom ;
}

Talent Objet::getTalent() const {
  return _talentAssocie ;
}

Objet::~Objet() {
  _talentAssocie.~Talent() ;
}
