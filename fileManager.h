#pragma once

#include <iostream>
#include <fstream>
#include <string>

class fileManager {
  private:
    std::string fileName;
    std::ifstream infile;
    std::ofstream outfile;

  public:
    fileManager() = delete;
    fileManager(const std::string fileName);
    fileManager(const fileManager& file) = default;
    virtual ~fileManager() = default;

    fileManager& operator=(const fileManager& file) = default;

    bool isEndOfFile();

};
