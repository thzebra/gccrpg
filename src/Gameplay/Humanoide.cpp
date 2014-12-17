#include "Humanoide.hpp"
#include <cstring>

Humanoide::Humanoide(char * nom, int vie, int mana, int attaqueBase, int defenseBase, int force, int dexterite, int chance, int vitesse, int charisme, int intelligence, Coordonnees c = Coordonnees(0, 0)) {
  _nom = strcpy(_nom, nom) ;
  _vie = Jauge(vie) ;
  _mana = Jauge(mana) ;
  _attaqueBase = attaqueBase ;
  _defenseBase = defenseBase ;
  _carac = new std::map<Caracteristique, int> {
    {(Caracteristique::FORCE, str)}, 
    {(Caracteristique::DEXTERITE, dex)},
    {(Caracteristique::CHANCE, lck)},
    {(Caracteristique::VITESSE, vitesse)},
    {(Caracteristique::CHARISME, charisme)},
    {(Caracteristique::INTELLIGENCE, intelligence)}
  };
  _coordonnees = Coordonnees(&c) ;
}

int Humanoide::getCharisme() const {
  return _carac[CHARISME] ;
}

int Humanoide::getIntelligence() const {
  return _carac[INTELLIGENCE] ;
}

Humanoide::~Humanoide {
  _vie.~Jauge() ;
  _mana.~Jauge() ;
  _coordonnees.~Coordonnees() ;
}
