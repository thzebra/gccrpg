#ifndef __PERSO_HPP__
#define __PERSO_HPP__

#include "PNJ.hpp"
#include "Talent.hpp"

class Perso : public PNJ {

protected :
  std::map<Talent, int> _talents ;
  
public :
  Perso(char * nom, int vie, int mana, int attaqueBase, int defenseBase, int force, int dexterite, int chance, int vitesse, Inventaire stuff, Humanoide race, Coordonnees c = Coordonnees(0, 0)) ;
  void upgradeTalent(Talent t) ;
  void forgetTalent(Talent t) ;
  int getTalentLevel(Talent t) ;
  ~Perso() ;
}

#endif
