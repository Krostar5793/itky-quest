#pragma once

#include <string>
#include <exception>

class NoInputFilesError final : public std::exception {
  private:
    std::string message;

  public:
    NoInputFilesError(const std::string& message);
    ~NoInputFilesError();
    std::string what();
};
