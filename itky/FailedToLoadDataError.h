#pragma once

#include <exception>
#include <string>

class FailedToLoadDataError final : public std::exception {
  private:
    std::string message;

  public:
    FailedToLoadDataError(const std::string message);
    ~FailedToLoadDataError();
    std::string what();

};
