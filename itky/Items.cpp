#include "Items.h"

Items :: Items() = default;

Items :: Items(
  std::string name,
  std::string rarity,
  std::string price,
  std::string description,
  std::string effection,
  std::string whenEnable,
  std::string isConsumable
) :
  name(name),
  rarity(rarity),
  description(description),
  effection(effection),
  whenEnable(whenEnable),
  isConsumable(isConsumable)
{}

Items :: ~Items() {}
