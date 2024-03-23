#include "DocumentObjectModel.h"

#include <string>

class Armors : DocumentObjectModel {
  private:
    std::string name;
    std::string type;
    std::string rarity;
    std::string price;
    std::string description;
    std::string effection;

  public:
    Armors() = default;
    Armors(
      std::string,
      std::string,
      std::string,
      std::string,
      std::string,
      std::string
    );
    ~Armors();

};
