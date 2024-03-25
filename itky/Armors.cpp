#include "Armors.h"

Armors :: Armors() = default;

Armors :: Armors(
  std::string name,
  std::string rarity,
  std::string price,
  std::string type,
  std::string description,
  std::string effection
) :
  name(name),
  rarity(rarity),
  price(price),
  type(type),
  description(description),
  effection(effection)
{}

Armors :: ~Armors() {}
