#include "Materials.h"

Materials :: Materials() = default;

Materials :: Materials(
  std::string name,
  std::string rarity,
  std::string price,
  std::string description,
  std::string effection,
  std::string whenEnable
) :
  name(name),
  rarity(rarity),
  price(price),
  description(description),
  effection(effection),
  whenEnable(whenEnable)
{}

Materials :: ~Materials() {}
