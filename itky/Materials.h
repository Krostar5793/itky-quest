#include "DocumentObjectModel.h"

#include <string>

class Materials final : public DocumentObjectModel {
  private:
    std::string name;
    std::string rarity;
    std::string price;
    std::string description;
    std::string effection;
    std::string whenEnable;

  public:
    Materials();
    Materials(
      std::string,
      std::string,
      std::string,
      std::string,
      std::string,
      std::string
    );
    ~Materials();

    void write();

};
