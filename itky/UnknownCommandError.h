#pragma once

#include <exception>

class UnknownCommandError final : std::exception {
  private:
    const char* message;

  public:
    UnknownCommandError();
    UnknownCommandError(const char* message);
    ~UnknownCommandError();
    const char* what() const noexcept override;
};
