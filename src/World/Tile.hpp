#ifndef TILE_HPP
#define TILE_HPP

#include "GeneralIncludes.hpp"
#include "Coordonnees.hpp"
#include "Terrain.hpp"

class Tile{

private:
  Object *_item;
  Creature *_creat;
  bool _isObstacle;
  Terrain *_terrain;
public:
  Tile();
  Tile(Object &item, Creature &creat, bool &isObstacle, Terrain &terrain);
  Object* getObject() const;
  Creature* getCreature() const;
  bool isObstacle() const;
  Terrain* getTerrain() const;

  void setObject(const Object &item);
  void setCreature(const Creature &c);
  void setObstacle(const bool isObstacle);
  void setTerrain(const Terrain &terrain);

  ~Tile();
  
};


#endif
