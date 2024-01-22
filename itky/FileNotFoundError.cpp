#include "FileNotFoundError.h"

FileNotFoundError :: FileNotFoundError(const std::string& message)
  : message(message)
{}

FileNotFoundError :: ~FileNotFoundError() = default;

std::string FileNotFoundError :: what() {
  return message;
}
