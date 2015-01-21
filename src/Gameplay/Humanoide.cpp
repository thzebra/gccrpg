#include "Humanoide.hpp"
#include <cstring>

Humanoide::Humanoide() {}

Humanoide::Humanoide(string nom, int vie, int mana, int attaqueBase,
		     int defenseBase, int force, int dexterite,
		     int chance, int vitesse, int charisme,
		     int intelligence, Race_Humanoide race,
		     Coordonnees * c) {
  _nom = new string(nom) ;
  _vie = new Jauge(vie) ;
  _mana = new Jauge(mana) ;
  _attaqueBase = attaqueBase ;
  _defenseBase = defenseBase ;
  _carac = new std::map<Caracteristique, int> {
    {Caracteristique::FORCE, force}, 
    {Caracteristique::DEXTERITE, dexterite},
    {Caracteristique::CHANCE, chance},
    {Caracteristique::VITESSE, vitesse},
    {Caracteristique::CHARISME, charisme},
    {Caracteristique::INTELLIGENCE, intelligence}
  };
  _race = race ;
  if (c)
    _coordonnees = new Coordonnees(c) ;
  else
    _coordonnees = new Coordonnees(0, 0) ;
}

int Humanoide::getCharisme() const {
  return (*_carac)[CHARISME] ;
}

int Humanoide::getIntelligence() const {
  return (*_carac)[INTELLIGENCE] ;
}

Humanoide::~Humanoide() {
  _vie->~Jauge() ;
  _mana->~Jauge() ;
  _coordonnees->~Coordonnees() ;
}
