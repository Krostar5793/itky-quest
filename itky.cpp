#include <iostream>
#include <fstream>
#include <vector>
#include <string>

#include "fileManager.h"
#include "NoInputFilesError.h"

#define DOCS "/docs/"

int main(int argc, char* argv[]) {
  const std::vector<std::string> args(argv, argv + argc);
  const std::int8_t numberOfParams(argc);
  const std::string fileName(DOCS + std::string(argv[1]));
  fileManager file();

  try {
    fileManager file = fileManager(&fileName);
  } catch ( NoInputFilesError& e ) {
    std::cout << e.what() << std::endl;
  }

  std::string word;
  while ( true ) {
    file.loadWordTo(word);
    if ( file.isEndOfFile() ) break;
    std::cout << word << std::endl;
  }

  return 0;
}
