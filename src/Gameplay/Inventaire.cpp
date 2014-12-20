#include "Inventaire.hpp"

Inventaire::Inventaire(){
  _stuff = new std::list<Objet>();
  _sous = 0 ;
}


int Inventaire::getPoidsTotal() const{
  int poids = 0;
  for(Objet item : _stuff)
    poids += item.getPoids(); // :)
  return poids;
}


bool Inventaire::contient(Objet obj) const{
  for(Objet item : _stuff)
    if(item == obj)
      return true;
  return false;
}


void Inventaire::retirer(Objet obj){
  _stuff.remove(obj) ;
}


void Inventaire::ajouter(Objet obj){
  _stuff.add(obj);
}


Inventaire::~Inventaire(){
  delete _stuff;
}

