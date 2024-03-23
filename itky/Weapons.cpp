#include "Weapons.h"

Weapons :: Weapons() = default;

Weapons :: Weapons(
  std::string name,
  std::string type,
  std::string rarity,
  std::string price,
  std::string description,
  std::string effection
) :
  name(name),
  type(type),
  rarity(rarity),
  price(price),
  description(description),
  effection(effection)
{}

Weapons :: ~Weapons() {}
