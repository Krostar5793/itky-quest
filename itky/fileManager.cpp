#include "fileManager.h"

// fileManager :: fileManager() = default;

fileManager :: fileManager(const std::string* fileName) {
  if ( fileName == nullptr ) {
    throw NoInputFilesError("itky: fatal error: no input files\nexecution terminated.");
  }
  this->fileName = *fileName;
  infile.open(this->fileName);
  outfile.open(this->fileName);
}

// fileManager :: fileManager(const fileManager& file) = default;

fileManager :: ~fileManager() {
  infile.close();
  outfile.close();
}

// fileManager& fileManager :: operator=(const fileManager& file) = default;

std::string& fileManager :: loadWordTo(std::string& word) {
  outfile << word;
  return word;
}

bool fileManager :: isEndOfFile() {
  return infile.eof();
}
