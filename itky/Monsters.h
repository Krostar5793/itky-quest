/*
画像アップロード、ステータスの詳細が未決定なので、
monsterコマンドは未実装。
*/

#include "DocumentObjectModel.h"

#include <string>

class Monsters final : public DocumentObjectModel {
  private:
    std::string name;
    std::string status;
    std::string imageUrl;
    std::string appearAt;
    std::string description;

  public:
    Monsters();
    Monsters(
      std::string,
      std::string,
      std::string,
      std::string,
      std::string
    );
    ~Monsters();

    void write();

};
