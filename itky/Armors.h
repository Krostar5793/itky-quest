#include "DocumentObjectModel.h"

#include <string>

class Armors final : public DocumentObjectModel {
  private:
    std::string name;
    std::string rarity;
    std::string price;
    std::string type;
    std::string description;
    std::string effection;

  public:
    Armors();
    Armors(
      std::string,
      std::string,
      std::string,
      std::string,
      std::string,
      std::string
    );
    ~Armors();

    void write();

};
