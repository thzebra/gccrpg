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


Inventaire::~Inventaire(){
  delete _stuff;
}


  
