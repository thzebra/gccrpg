#ifndef __PNJ_HPP__
#define __PNJ_HPP__

#include "Humanoide.hpp"
#include "Inventaire.hpp"

class Objet ;
class Inventaire ;

class PNJ {
  
protected : 
  Inventaire * _stuff ;
  Humanoide * _corps ;
  
public :
  PNJ() ;
  PNJ(string nom, int vie, int mana,
      int attaqueBase, int defenseBase,
      int force, int dexterite, int chance, int vitesse,
      Race_Humanoide race, Coordonnees * c) ;
  virtual int getPoids() const ;
  virtual int getPoidsMax() const ;
  virtual void utiliserObjet(Objet o, Creature c) ;
  virtual void pickObjet(Objet o) ;
  virtual void pickSous(int s) ;
  virtual void dumpObjet(Objet o) ;
  virtual int getPrix(Objet o) const ;
  virtual void vendre(Objet o) ;
  virtual int getSous() const ;
  virtual PNJ * createElfe(string nom) ;
  virtual PNJ * createOrc(string nom) ;
  virtual PNJ * createHumain(string nom) ;
  virtual ~PNJ() ;
} ;

#endif
