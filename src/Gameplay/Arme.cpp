#include "Arme.hpp"

Arme::Arme(){  
  _estAUneMain = true;
  _degats = 1;
  _element = Elements::Neutre;
  _enchantement = new std::list<Enchantement>();
}
