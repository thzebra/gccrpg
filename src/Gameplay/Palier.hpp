#ifndef __PALIER_HPP__
#define __PALIER_HPP__

#define PALIER_NIVEAU_MAX 20

class Palier {
private :
  int _paliers[PALIER_NIVEAU_MAX] ;
  int fibonacci(int n) ;
  
public :
  Palier() ;
  int niveau(int exp) ;
  ~Palier() ;  
} ;

#endif 
