#include "fileManager.h"

// fileManager :: fileManager() = default;

fileManager :: fileManager(const std::string fileName) {
  if ( &fileName == nullptr ) {
    throw NoInputFilesError();
  }
  this->fileName = fileName;
  infile.open(this->fileName);
  outfile.open(this->fileName);
  if ( (!infile) || (!outfile) ) {
    throw FileNotFoundError();
  }
}

fileManager :: ~fileManager() {
  infile.close();
  outfile.close();
}

fileManager& fileManager :: operator=(const fileManager& file) {
  this->fileName = file.fileName;
  return *this;
}

std::string& fileManager :: loadWordTo(std::string& word) {
  infile >> word;
  std::cout << word << std::endl;
  if ( !infile ) {
    throw FailedToLoadDataError();
  }
  return word;
}

std::string& fileManager :: loadLineTo(std::string& line) {
  std::getline(infile, line);
  if ( !infile ) {
    throw FailedToLoadDataError();
  }
  return line;
}

std::string fileManager :: getFileName() {
  return fileName;
}

bool fileManager :: isEndOfFile() {
  return infile.eof();
}
