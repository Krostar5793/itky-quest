#include "DocumentObjectModel.h"

#include <string>

class Weapons : public DocumentObjectModel {
  private:
    std::string name;
    std::string type;
    std::string rarity;
    std::string price;
    std::string description;
    std::string effection;

  public:
    Weapons() = default;
    Weapons(
      std::string,
      std::string,
      std::string,
      std::string,
      std::string,
      std::string
    );
    ~Weapons();

};
