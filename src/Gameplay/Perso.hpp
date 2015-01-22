#ifndef __PERSO_HPP__
#define __PERSO_HPP__

#include "GeneralIncludes.hpp"

#include "PNJ.hpp"
#include "Talent.hpp"

class Perso : public PNJ {

protected :
  std::map<Talent, int> * _talents ;
  
public :
  Perso() ;
  Perso(string nom, int vie, int mana, int attaqueBase,
	int defenseBase, int force, int dexterite, int chance,
	int vitesse, int charisme, int intelligence,
	Race_Humanoide race, Coordonnees * c) ;
  Perso * createPerso(string nom, Race_Humanoide race) ;
  Perso * createElfe(string nom) ;
  Perso * createOrc(string nom) ;
  Perso * createHumain(string nom) ;
  void upgradeTalent(Talent t) ;
  void forgetTalent(Talent t) ;
  int getTalentLevel(Talent t) ;
  void utiliserObjet(Objet o, Creature c) ;
  ~Perso() ;
} ;

#endif
