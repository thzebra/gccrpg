#ifndef __OBJET_HPP__
#define __OBJET_HPP__

class Objet {
protected :
  char * _nom ;

public :
  Objet(char *) ;
  char * getNom() ;
  ~Objet() ;
}

#endif
