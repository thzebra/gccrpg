#ifndef __PARCHEMIN_HPP__
#define __PARCHEMIN_HPP__

class Parchemin : public Utilisable {

protected :
  Effet effet ;
  
public :
  Parchemin() ;
  Effet getEffet() ;
  virtual ~Parchemin() ;

}

#endif
