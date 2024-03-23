#include "DocumentObjectModel.h"

#include <string>

class Materials : public DocumentObjectModel {
  private:
    std::string name;
    std::string rarity;
    std::string price;
    std::string whenEnable;
    std::string description;
    std::string effection;
    std::string isConsumable;

  public:
    Materials() = default;
    Materials(
      std::string,
      std::string,
      std::string,
      std::string,
      std::string,
      std::string,
      std::string
    );
    ~Materials();
};
