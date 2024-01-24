#include <iostream>
#include <fstream>
#include <string>
#include <vector>

#include "CommandManager.h"
#include "UnknownCommandError.h"

int main(int argc, char* argv[]) {
  const CommandManager* commandManager(CommandManager::getInstance());

  try {
    commandManager->command(argv[1]);
  } catch ( const UnknownCommandError& e ) {
    std::cout << e.what() << std::endl;
    return -1;
  }
  
  return 0;
}
