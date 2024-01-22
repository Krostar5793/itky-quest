#pragma once

#include <iostream>
#include <fstream>
#include <string>

#include "NoInputFilesError.h"
#include "FileNotFoundError.h"
#include "FailedToLoadDataError.h"

class FileManager final {
  private:
    std::string filePath{};
    std::ifstream infile{};
    std::ofstream outfile{};

  public:
    FileManager() = default;
    FileManager(const std::string filePath);
    FileManager(const FileManager& file) = default;
    ~FileManager();

    FileManager& operator=(const FileManager& file);

    std::string& loadWordTo(std::string& word);
    std::string& loadLineTo(std::string& line);

    std::string getFilePath();
    bool isEndOfFile();

};
