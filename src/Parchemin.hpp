#ifndef __USAGEUNIQUE_HPP__
#define __USAGEUNIQUE_HPP__

class UsageUnique : public Utilisable {

protected :
  Effet effet ;
  
public :
  UsageUnique() ;
  Effet getEffet() ;
  ~UsageUnique() ;

}

#endif
