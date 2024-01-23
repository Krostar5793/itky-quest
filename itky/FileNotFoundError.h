#pragma once

#include <string>

class FileNotFoundError {
  private:
    std::string message;

  public:
    FileNotFoundError();
    FileNotFoundError(std::string message);
    ~FileNotFoundError();
    std::string what() const noexcept;
};
