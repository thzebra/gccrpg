#ifndef __PERSO_HPP__
#define __PERSO_HPP__

#include <map>

#include "PNJ.hpp"
#include "Talent.hpp"

class Perso : public PNJ {

protected :
  std::map<Talent, int> _talents ;
  
public :
  Perso(char * nom, int vie, int mana, int attaqueBase,
	int defenseBase, int force, int dexterite, int chance,
	int vitesse, Race_Humanoide race, Inventaire stuff, 
	Coordonnees c = Coordonnees(0, 0)) ;
  Perso Perso(char * nom, Race_Humanoide race) ;
  void upgradeTalent(Talent t) ;
  void forgetTalent(Talent t) ;
  int getTalentLevel(Talent t) ;
  ~Perso() ;
} ;

#endif
