#include "Tile.hpp"

Tile::Tile(){}

Tile::Tile(Object &item, Creature &creat, bool &isObstacle, Terrain &terrain){
  _item = item;
  _creat = creat;
  _isObstacle = isObstacle;
  _terrain = terrain;
}

Object* Tile::getObject() const{
  return _item;
}

Creature* Tile::getCreature() const {return _creat;}

bool Tile::isObstacle() const {return _isObstacle;}

Terrain* Tile::getTerrain() const {return _terrain;}

void Tile::setObject(const Object &item){
  _item = item;
}

void Tile::setCreature(const Creature &c){
  _creat = creat;
}

void Tile::setObstacle(const bool isObstacle){
  _isObstacle = isObstacle;
}

void Tile::setTerrain(const Terrain &terrain){
  _terrain = terrain;
}

Tile::~Tile(){
  delete _creat;
  delete _item;
}

