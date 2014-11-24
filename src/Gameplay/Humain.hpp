#ifndef __HUMAIN_HPP__
#define __HUMAIN_HPP__

class Humain : public Creature {

protected :
  int _nom ;

public :
  Humain(int, char *) ;
  char * getNom() ;
  void setNom(char *) ;
  ~Humain() ;
}

#endif
