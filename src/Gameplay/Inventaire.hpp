#ifndef __INVENTAIRE_HPP__
#define __INVENTAIRE_HPP__

class Inventaire {
  // une liste chaînée d'objets

public :
  Inventaire() ;
  int getPoidsTotal() ;
  bool contient(Objet) ;
  void retirer(Objet) ;
  void ajouter(Objet) ;
  ~Inventaire() ;
}
