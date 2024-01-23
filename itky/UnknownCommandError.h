#pragma once

#include <string>

class UnknownCommandError {
  private:
    std::string message;

  public:
    UnknownCommandError();
    UnknownCommandError(const std::string message);
    ~UnknownCommandError();

    std::string what() const noexcept;
    
};
