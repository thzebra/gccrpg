#include "Perso.hpp"
#include "Palier.hpp"

Perso::Perso(char * nom, int vie, int mana, int attaqueBase, int defenseBase, int force, int dexterite, int chance, int vitesse, Inventaire stuff, Coordonnees c = Coordonnees(0, 0)) {
  _corps = Humanoide(nom, vie, mana, attaqueBase, defenseBase, force, dexterite, chance, vitesse, stuff, c) ;
  _stuff = Inventaire(&stuff) ;
  _talents = new std::map<Talent, int> ;
}

void Perso::upgradeTalent(Talent t) {
  ++_talents[t] ;
}

void Perso::forgetTalent(Talent t) {
  --_talents[t] ;
}

int Perso::getTalentLevel(Talent t) {
  Palier p = Palier() ;
  return p.niveau(_talents[t]) ;
}
