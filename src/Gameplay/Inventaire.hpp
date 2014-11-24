#ifndef __INVENTAIRE_HPP__
#define __INVENTAIRE_HPP__

class Inventaire {

protected :

  std::list _inventaire ;

public :
  Inventaire() ;
  int getPoidsTotal() ;
  bool contient(Objet) ;
  void retirer(Objet) ;
  void ajouter(Objet) ;
  ~Inventaire() ;

}
