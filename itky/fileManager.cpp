#include "fileManager.h"

// fileManager :: fileManager() = default;

fileManager :: fileManager(const std::string fileName) {
  if ( &fileName == nullptr ) {
    throw NoInputFilesError("itky: fatal error: no input files\nexecution terminated.");
  }
  this->fileName = fileName;
  infile.open(this->fileName);
  outfile.open(this->fileName);
}

// fileManager :: fileManager(const fileManager& file) = default;

fileManager :: ~fileManager() {
  infile.close();
  outfile.close();
}

fileManager& fileManager :: operator=(const fileManager& file) {
  this->fileName = file.fileName;
  return *this;
}

std::string& fileManager :: loadWordTo(std::string& word) {
  outfile << word;
  return word;
}

std::string fileManager :: getFileName() {
  return fileName;
}

bool fileManager :: isEndOfFile() {
  return infile.eof();
}
