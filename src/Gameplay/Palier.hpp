#ifndef __PALIER_HPP__
#define __PALIER_HPP__

#define PALIER_NIVEAU_MAX 20

class Palier {
private :
  static int _paliers[PALIER_NIVEAU_MAX];
  
  Palier() ;
  ~Palier() ;  
public :
  static int fibonacci(int n) ;
  static int niveau(int exp) ;
} ;

#endif 
