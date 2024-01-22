#pragma once

#include <iostream>
#include <fstream>
#include <string>

#include "NoInputFilesError.h"
#include "FileNotFoundError.h"
#include "FailedToLoadDataError.h"

class FileManager final {
  private:
    std::string fileName{};
    std::ifstream infile{};
    std::ofstream outfile{};

  public:
    FileManager() = default;
    FileManager(const std::string fileName);
    FileManager(const FileManager& file) = default;
    ~FileManager();

    FileManager& operator=(const FileManager& file);

    std::string& loadWordTo(std::string& word);
    std::string& loadLineTo(std::string& line);

    std::string getFileName();
    bool isEndOfFile();

};
