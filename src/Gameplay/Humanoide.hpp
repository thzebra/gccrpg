#ifndef __HUMANOIDE_HPP__
#define __HUMANOIDE_HPP__

#include "Creature.hpp"

enum Race_Humanoide {ELFE, HUMAIN, ORC} ;

class Humanoide : public Creature {

protected : 
  Race_Humanoide _race ;
  
public :
  Humanoide() ;
  Humanoide(string nom, int vie, int mana, int attaqueBase,
	    int defenseBase, int force, int dexterite, int chance,
	    int vitesse, int charisme, int intelligence,
	    Race_Humanoide race, Coordonnees * c) ;
  virtual int getCharisme() const ;
  virtual int getIntelligence() const ;
  virtual ~Humanoide() ;
} ;

#endif
