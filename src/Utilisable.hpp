#ifndef __UTILISABLE_HPP__
#define __UTILISABLE_HPP__

class Utilisable : public Ramassable {

protected :
  int _emplacement ;
  Effet _effet ;

public :
  Utilisable() ;
  bool aCompetencesRequises(Perso) ;
  ~Utilisable() ;
}

#endif
