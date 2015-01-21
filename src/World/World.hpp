#ifndef WORLD_HPP
#define WORLD_HPP

#include "GeneralIncludes.hpp"
#include "Coordonnees.hpp"

class World{

private:
  map<Coordonnees, Tile> *_tiles;
  
public:
  void generateNewWorld();
  Tile getTile(const Coordonnees c);
};


#endif
