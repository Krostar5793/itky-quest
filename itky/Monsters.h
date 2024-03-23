#include "DocumentObjectModel.h"

#include <string>

class Monsters : public DocumentObjectModel {
  private:
    std::string name;
    std::string status;
    std::string appearAt;
    std::string description;

  public:
    Monsters() = default;
    Monsters(
      std::string,
      std::string,
      std::string,
      std::string
    );
    ~Monsters();

};
