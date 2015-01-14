#include "Arme.hpp"

Arme::Arme(){  
  _estAUneMain = true;
  _degats = 1;
  _element = Elements::Neutre;
  _enchantement = new std::list<Enchantement>();
}

bool Arme::estAUneMain(){ return _estAUneMain;}

int Arme::getAttaque(){
  int degats = _degats;
  // TODO : parcourir les enchantements pour ajouter les dégats potentiels
  return degats;
}

Element Arme::getElement(){ return _element;}


~Arme::Arme(){
  delete _enchantement;
}
