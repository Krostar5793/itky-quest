#include "Monsters.h"

Monsters :: Monsters() = default;

Monsters :: Monsters(
  std::string name,
  std::string status,
  std::string imageUrl,
  std::string appearAt,
  std::string description
) :
  name(name),
  status(status),
  imageUrl(imageUrl),
  appearAt(appearAt),
  description(description)
{}

Monsters :: ~Monsters() {}
