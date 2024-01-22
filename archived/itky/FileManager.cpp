#include "FileManager.h"

// FileManager :: FileManager() = default;

FileManager :: FileManager(const std::string filePath) {
  this->filePath = filePath;
}

FileManager :: ~FileManager() {
  if ( infile.is_open() ) infile.close();
  if ( outfile.is_open() ) outfile.close();
}

FileManager& FileManager :: operator=(const FileManager& file) {
  this->filePath = file.filePath;
  return *this;
}

std::string& FileManager :: loadWordTo(std::string& word) {
  infile.open(filePath);
  infile >> word;
  if ( !infile ) {
    throw FailedToLoadDataError();
  }
  infile.close();
  return word;
}

std::string& FileManager :: loadLineTo(std::string& line) {
  infile.open(filePath);
  std::getline(infile, line);
  if ( !infile ) {
    throw FailedToLoadDataError();
  }
  return line;
  infile.close();
}

std::string FileManager :: getFilePath() {
  return filePath;
}

bool FileManager :: isEndOfFile() {
  return infile.eof();
}
