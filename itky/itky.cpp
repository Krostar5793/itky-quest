#include <iostream>
#include <fstream>
#include <vector>
#include <string>

#include "fileManager.h"
#include "NoInputFilesError.h"
#include "FileNotFoundError.h"

#define DOCS "../docs/"

[[deprecated]]
int main(int argc, char* argv[]) {
  const std::vector<std::string> args(argv, argv + argc);
  const std::int8_t numberOfParams(argc);
  const std::string fileName(DOCS + std::string(argv[1]));
  fileManager file;

  try {
    file = fileManager(fileName);
    std::cout << file.getFileName() << std::endl;
  } catch ( NoInputFilesError& e ) {
    std::cout << e.what() << std::endl;
    return -1;
  } catch ( FileNotFoundError& e ) {
    std::cout << e.what() << std::endl;
    return -1;
  }

  std::string word;
  while ( true ) {
    file.loadLineTo(word);
    if ( file.isEndOfFile() ) break;
    std::cout << word << std::endl;
  }

  return 0;
}
