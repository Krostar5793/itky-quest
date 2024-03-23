#include <iostream>
#include <fstream>
#include <string>
#include <vector>

#include "CommandManager.h"
#include "UnknownCommandError.h"
#include "ParamsNotFoundError.h"

int main(int argc, char* argv[]) {
  const uint8_t numberOfCommands = argc - 1;
  std::vector<std::string> params;

  for ( int i = 1; i < argc; i++ ) {
    params.emplace_back(argv[i]);
  }

  try {
    CommandManager :: getInstance()->command(params);
  } catch ( const UnknownCommandError& e ) {
    std::cout << e.what() << std::endl;
    return -1;
  } catch ( const ParamsNotFoundError& e ) {
    std::cout << e.what() << std::endl;
  }
  
  return 0;
}
