#include "fileManager.h"

fileManager :: fileManager(const std::string fileName) {
  this->fileName = fileName;
}

bool fileManager :: isEndOfFile() {
  return infile.eof();
}
