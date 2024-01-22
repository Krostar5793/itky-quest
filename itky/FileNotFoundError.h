#pragma once

#include <exception>
#include <string>

class FileNotFoundError final : public std::exception {
  private:
    std::string message;

  public:
    FileNotFoundError();
    FileNotFoundError(const std::string& message);
    ~FileNotFoundError();
    std::string what();

};
