#include "DocumentObjectModel.h"

#include <string>

class Items : public DocumentObjectModel {
  private:
    std::string name;
    std::string rarity;
    std::string price;
    std::string whenEnable;
    std::string description;
    std::string effection;
    std::string isConsumable;

  public:
    Items() = default;
    Items(
      std::string,
      std::string,
      std::string,
      std::string,
      std::string,
      std::string,
      std::string
    );
    ~Items();

};
