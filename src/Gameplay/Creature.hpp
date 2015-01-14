#ifndef __CREATURE_HPP__
#define __CREATURE_HPP__

#define MAX_NOM_CREATURE 50

#include <map>
#include <list>

#include "Alteration.hpp"
#include "Buff.hpp"
#include "Coordonnees.hpp"
#include "Caracteristique.hpp"
#include "Jauge.hpp"

class Creature {

protected :
  char * _nom[MAX_NOM_CREATURE] ;
  Jauge _vie ;
  Jauge _mana ;
  std::map<Caracteristique, int> _carac ;
  int _attaqueBase ;
  int _defenseBase ;
  Coordonnees _coordonnees ;
  std::list<Buff> _buffs ;
  std::list<Alteration> _etat ;
  
  
public :
  Creature(char * nom , int vie, int mana, int attaqueBase, int defenseBase, int force, int dexterite, int chance, int vitesse, Coordonnees c = Coordonnees(0, 0)) ;
  virtual char * getNom() const ;
  virtual bool estVivant() const ;
  virtual int getForce() const ;
  virtual int getDexterite() const ;
  virtual int getChance() const ;
  virtual int getVitesse() const ;
  virtual int getAttaque() const ;
  virtual int getVie() const ;
  virtual int getVieMax() const ;
  virtual int getMana() const ;
  virtual int getManaMax() const ;
  virtual Coordonnees getCoordonnees() const ;
  virtual std::list<Alteration> getEtat() const ;
  virtual std::list<Buff> getBuffs() const ;
  virtual void addAlteration(Alteration a) ;
  virtual void removeAlteration(Alteration a) ;
  virtual void addBuff(Buff b) ;
  virtual void removeBuff(Buff b) ;
  virtual void updateStat() ;
  virtual void attaquer(Creature c) ;
  virtual void bouger(Direction d) ;
  virtual ~Creature() ;
} ;

#endif
