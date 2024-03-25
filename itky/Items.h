#include "DocumentObjectModel.h"

#include <string>

class Items final : public DocumentObjectModel {
  private:
    std::string name;
    std::string rarity;
    std::string price;
    std::string description;
    std::string effection;
    std::string whenEnable;
    std::string isConsumable;

  public:
    Items();
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

    void write();

};
