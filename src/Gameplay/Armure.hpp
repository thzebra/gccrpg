#ifndef __ARMURE_HPP__
#define __ARMURE_HPP__

class Armure : public Utilisable {

protected :
  int _defense ;
  
public :
  Armure() ;
  int getDefense() ;
  virtual ~Armure() ;

}

#endif
