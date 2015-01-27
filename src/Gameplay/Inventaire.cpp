#include "Inventaire.hpp"

Inventaire::Inventaire(){
  _stuff = new std::list<Objet>();
  _sous = 0 ;
}


int Inventaire::getPoidsTotal() const{
  int poids = 0;
  for (const Objet &item : *_stuff)
    poids += item.getPoids(); // :)
  return poids;
}


bool Inventaire::contient(Objet &obj) const{
  for(Objet &item : *_stuff)
    if(item == obj)
      return true;
  return false;
}


void Inventaire::retirer(Objet & obj){
  _stuff->erase(std::find(_stuff->begin(), _stuff->end(), obj)) ;
}


void Inventaire::ajouter(Objet & obj){
  _stuff->push_front(obj) ;
}

void Inventaire::vendre(Objet &o) {
  _sous += o.getValeur() ;
  _stuff->erase(std::find(_stuff->begin(), _stuff->end(), o)) ;
}
  
int Inventaire::getSous() {
  return _sous ;
}

void Inventaire::pickSous(int s) {
  _sous += s ;
}


Inventaire::~Inventaire(){
  delete _stuff;
}
