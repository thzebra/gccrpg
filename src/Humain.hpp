#ifndef __HUMAIN_HPP__
#define __HUMAIN_HPP__

class Humain : Creature {

public :
  Humain(int, char *) ;
  char * getNom() ;
  void setNom(char *) ;

private :
  int _nom ;

}
