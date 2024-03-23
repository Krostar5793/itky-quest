#pragma once

#include <string>

class ParamsNotFoundError {
  private:
    std::string message;

  public:
    ParamsNotFoundError();
    ParamsNotFoundError(const std::string message);
    ~ParamsNotFoundError();

    std::string what() const noexcept;
    
};
