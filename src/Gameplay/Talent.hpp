#ifndef __TALENT_HPP__
#define __TALENT_HPP__

// on avait pas dit que talent c'était une enum ?

#define MAX_NOM 50

class Talent {

protected :
  char _nom[MAX_NOM] ;

public :
  Talent (char *) ;
  char * getNom() ;
  ~Talent() ;
} ;

#endif
