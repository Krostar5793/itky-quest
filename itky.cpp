#include <iostream>
#include <fstream>
#include <vector>
#include <string>

#include "fileManager.h"

int main(int argc, char* argv[]) {
  std::int8_t c;
  fileManager filen();
  fileManager file(argv[1]);
  std::vector<std::string> args(argv, argv + argc);

  std::string word;
  // while ( true ) {
  //   infile >> word;
  //   if ( infile.eof() ) break;
  //   std::cout << word << std::endl;
  // }

  return 0;
}
