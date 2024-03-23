#include "CommandManager.h"
#include "MessageManager.h"
#include "CommandListManager.h"
#include "ParamsNotFoundError.h"
#include "UnknownCommandError.h"

void CommandManager :: command(std::vector<std::string> params) {
  CommandListManager* commandListManager = CommandListManager :: getInstance();
  MessageManager* messageManager = MessageManager :: getInstance();
  params_it = params.begin();
  params_it_end = params.end();
  if ( params_it == params_it_end ) {
    messageManager->help();
    return;
  }
  std::map<std::string, CommandFunctionType> commands(commandListManager->getCommandList());
  std::map<std::string, CommandFunctionType>::const_iterator it = commands.find(*params_it);
  if ( it != commands.end() ) {
    params_it++;
    try {
      it->second();
    } catch ( const ParamsNotFoundError& e ) {
      throw e;
    }
  }
  else throw UnknownCommandError(UnknownCommandError().what() + *params_it);
}

void CommandManager :: help() {
  MessageManager :: getInstance()->help();
}

void CommandManager :: version() {
  MessageManager :: getInstance()->version();
}

void CommandManager :: edit() {
  const std::string name = *(params_it + 1);
  const std::string rarity = *(params_it + 2);
  const std::string price = *(params_it + 3);
  const std::string whenEnable = *(params_it + 4);
  const std::string description = *(params_it + 5);
  const std::string effection = *(params_it + 6);
  const std::string isConsumable = *(params_it + 7);

  if ( *params_it == "armors" ) {
    std::cout << "Edit Armors.md" << std::endl;
  } else if ( *params_it == "items" ) {
    std::cout << "Edit Items.md" << std::endl;
  } else if ( *params_it == "materials" ) {
    std::cout << "Edit Materials.md" << std::endl;
  } else if ( *params_it == "monsters" ) {
    std::cout << "Edit Monsters.md" << std::endl;
  } else if ( *params_it == "weapons" ) {
    std::cout << "Edit Weapons.md" << std::endl;
  } else if ( params_it == params_it_end ) {
    std::cout << "E" << std::endl;
    throw ParamsNotFoundError("Error: Params not found");
  } else {
    throw ParamsNotFoundError("Error: Incorrect params\nParams available:\n    items, materials, monsters, weapons");
  }
}

void CommandManager :: view() {
  if ( *params_it == "armors" ) {
    std::cout << "View Armors.md" << std::endl;
  } else if ( *params_it == "items" ) {
    std::cout << "View Items.md" << std::endl;
  } else if ( *params_it == "materials" ) {
    std::cout << "View Materials.md" << std::endl;
  } else if ( *params_it == "monsters" ) {
    std::cout << "View Monsters.md" << std::endl;
  } else if ( *params_it == "weapons" ) {
    std::cout << "View Weapons.md" << std::endl;
  } else if ( params_it == params_it_end ) {
    std::cout << "E" << std::endl;
    throw ParamsNotFoundError("Error: Params not found");
  } else {
    throw ParamsNotFoundError("Error: Incorrect params\nParams available:\n    items, materials, monsters, weapons");
  }
}

CommandManager* CommandManager :: getInstance() {
  static CommandManager _instance;
  return &_instance;
}
