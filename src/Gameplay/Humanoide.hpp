#ifndef __HUMANOIDE_HPP__
#define __HUMANOIDE_HPP__

#include "Creature.hpp"

class Humanoide : public Creature {

protected : 
  int _race ;
  
public :
  Humanoide(char * nom, int vie, int mana, int attaqueBase, int defenseBase, int force, int dexterite, int chance, int vitesse, int charisme, int intelligence, Coordonnees c = Coordonnees(0, 0)) ;
  virtual int getCharisme() const ;
  virtual int getIntelligence() const ;
  virtual ~Humanoide() ;
}

#endif
