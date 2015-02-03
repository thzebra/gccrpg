#include "Stat.hpp"

Stat::Stat() {}

Stat::Stat(Caracteristique c) {
  _s.c = c ;
  _typeS = CARACTERISTIQUE ;
}

Stat::Stat(Talent t) {
  _s.t = t ;
  _typeS = TALENT ;
}

Stat::~Stat() {}
