#ifndef __CREATURE_HPP__
#define __CREATURE_HPP__

#define MAX_NOM_CREATURE 50

#include "GeneralIncludes.hpp"

#include "Alteration.hpp"
#include "Buff.hpp"
#include "Caracteristique.hpp"
#include "Coordonnees.hpp"
#include "Jauge.hpp"

class Alteration ;

class Creature {

protected :
  std::string * _nom ;
  Jauge * _vie ;
  Jauge * _mana ;
  map<Caracteristique, int> * _carac ;
  int _attaqueBase ;
  int _defenseBase ;
  Coordonnees * _coordonnees ;
  list<Buff> * _buffs ;
  list<Alteration> * _etat ;
  
  
public :
  Creature() ;
  Creature(string nom , int vie, int mana, int attaqueBase, int defenseBase, int force, int dexterite, int chance, int vitesse, Coordonnees * c) ;
  Creature(Creature &c) ;
  virtual string * getNom() const ;
  virtual bool estVivant() const ;
  virtual int getForce() const ;
  virtual int getDexterite() const ;
  virtual int getChance() const ;
  virtual int getVitesse() const ;
  virtual int getAttaque() const ;
  virtual int getDefense() const ;
  virtual int getVie() const ;
  virtual int getVieMax() const ;
  virtual int getMana() const ;
  virtual int getManaMax() const ;
  virtual void modifVie(int i) ;
  virtual void modifMana(int i) ;
  virtual void modifCarac(Caracteristique carac, int i) ;
  virtual Coordonnees * getCoordonnees() const ;
  virtual list<Alteration> * getEtat() const ;
  virtual list<Buff> * getBuffs() const ;
  virtual void addAlteration(Alteration &a) ;
  virtual void removeAlteration(Alteration &a) ;
  virtual void addBuff(Buff &b) ;
  virtual void removeBuff(Buff &b) ;
  virtual void attaquer(Creature * c) ;
  virtual void bouger(Direction d, int npas = 1) ;
  virtual ~Creature() ;
} ;

#endif
