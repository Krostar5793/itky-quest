#include "FileManager.h"

// FileManager :: FileManager() = default;

FileManager :: FileManager(const std::string fileName) {
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

FileManager :: ~FileManager() {
  infile.close();
  outfile.close();
}

FileManager& FileManager :: operator=(const FileManager& file) {
  this->fileName = file.fileName;
  return *this;
}

std::string& FileManager :: loadWordTo(std::string& word) {
  infile >> word;
  std::cout << word << std::endl;
  if ( !infile ) {
    throw FailedToLoadDataError();
  }
  return word;
}

std::string& FileManager :: loadLineTo(std::string& line) {
  std::getline(infile, line);
  if ( !infile ) {
    throw FailedToLoadDataError();
  }
  return line;
}

std::string FileManager :: getFileName() {
  return fileName;
}

bool FileManager :: isEndOfFile() {
  return infile.eof();
}
