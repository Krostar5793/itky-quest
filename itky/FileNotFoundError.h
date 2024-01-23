#pragma once

#include <exception>
#include <string>

class FileNotFoundError final : public std::exception {
  private:
    const char* message;

  public:
    FileNotFoundError();
    FileNotFoundError(const char*& message);
    ~FileNotFoundError();
    const char* what() const noexcept override;
};
