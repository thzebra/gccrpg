#include "Palier.hpp"
#include "Objet.hpp"
#include "Jauge.hpp"
#include "Effet.hpp"
#include "Monstre.hpp"
#include "Creature.hpp"
#include "Humanoide.hpp"
#include "PNJ.hpp"
#include "Perso.hpp"
#include "Element.hpp"
#include "Inventaire.hpp"
#include "Talent.hpp"
#include "Enchantement.hpp"
#include "Caracteristique.hpp"
#include "Utilisable.hpp"

int main() {
  Perso * toto = ((Perso*)nullptr)->createPerso("titi", ELFE) ;
  return 0 ;
}
