#pragma once

#include <iostream>
#include <fstream>
#include <string>

#include "NoInputFilesError.h"
#include "FileNotFoundError.h"
#include "FailedToLoadDataError.h"

class fileManager final {
  private:
    std::string fileName{};
    std::ifstream infile{};
    std::ofstream outfile{};

  public:
    fileManager() = default;
    fileManager(const std::string fileName);
    fileManager(const fileManager& file) = default;
    ~fileManager();

    fileManager& operator=(const fileManager& file);

    std::string& loadWordTo(std::string& word);
    std::string& loadLineTo(std::string& line);

    std::string getFileName();
    bool isEndOfFile();

};
