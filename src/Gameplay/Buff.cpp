#include "Buff.hpp"

Buff::Buff() {}

Buff::Buff(Caracteristique c, int m) {
  _stat = new Stat(c) ;
  _modif = m ;
}

Buff::Buff(Talent t, int m) {
  _stat = new Stat(t) ;
  _modif = m ;
}

pair<Stat, int> Buff::getModificateur() {
  pair<Stat, int> retour (*_stat, _modif) ; 
  return retour ;
}
    
Buff::~Buff() {
  delete _stat ;
}
