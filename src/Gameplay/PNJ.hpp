#ifndef __PNJ_HPP__
#define __PNJ_HPP__

#include "Humanoide.hpp"
#include "Inventaire.hpp"

class Objet ;

class PNJ {
  
private : 
  Inventaire _stuff ;
  Humanoide _corps ;
  
public :
  PNJ(char * nom, int vie, int mana,
      int attaqueBase, int defenseBase,
      int force, int dexterite, int chance, int vitesse,
      Race_Humanoide race,
      Inventaire stuff, Coordonnees c = Coordonnees(0, 0)) ;
  virtual int getPoids() const ;
  virtual int getPoidsMax() const ;
  virtual void utiliserObjet(Objet o, Creature c) ;
  virtual void pickObjet(Objet o) ;
  virtual void pickSous(int s) ;
  virtual void dumpObjet(Objet o) ;
  virtual int getPrix(Objet o) const ;
  virtual void vendre(Objet o) ;
  virtual int getSous() const ;
  virtual PNJ createElfe(char * nom) ;
  virtual PNJ createOrc(char * nom) ;
  virtual PNJ createHumain(char * nom) ;
  virtual ~PNJ() ;
} ;

#endif
