#include "MessageManager.h"

void MessageManager :: printTextFile(const std::string fileName) {
  std::ifstream infile(fileName);
  if ( !infile ) throw FileNotFoundError();
  std::string line;
  while ( std::getline(infile, line) ) {
    if ( infile.eof() ) break;
    std::cout << line << std::endl;
  }
}

void MessageManager :: help() {
  printTextFile("./messages/help.txt");
}

void MessageManager :: version() {
  printTextFile("./messages/version.txt");
}

MessageManager* MessageManager :: getInstance() {
  static MessageManager _instance;
  return &_instance;
}
