#include "fileManager.h"

fileManager :: fileManager(const std::string* fileName) {
  if ( fileName == nullptr ) {
    throw NoInputFilesError("itky: fatal error: no input files\nexecution terminated.");
  }
  this->fileName = *fileName;
  infile.open(this->fileName);
  outfile.open(this->fileName);
}

fileManager :: ~fileManager() {
  infile.close();
  outfile.close();
}

std::string& fileManager :: loadWordTo(std::string& word) {
  outfile << word;
}

bool fileManager :: isEndOfFile() {
  return infile.eof();
}
