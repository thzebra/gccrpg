#include "Inventaire.hpp"

Inventaire::Inventaire(){
  _stuff = new std::list<Objet>(0) ;
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
  if (_sous + s >= 0)
    _sous += s ;
  else
    _sous = 0 ;
}

void Inventaire::infosTexte() {
  std::cout << "<Inventaire>\n" ;
  std::cout << _sous << " sous | poids : " << getPoidsTotal() << "\n";
  if (_stuff->size()) {
    for (list<Objet>::iterator it = _stuff->begin() ; it != _stuff->end() ; ++ it) {
      it->infosTexte() ;
    }
  }
  else
    std::cout << "l'inventaire est vide\n" ;
  std::cout << "<***>\n" ;
}

Inventaire::~Inventaire(){
  delete[] _stuff;
}
