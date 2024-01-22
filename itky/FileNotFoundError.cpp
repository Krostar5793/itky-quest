#include "FileNotFoundError.h"

FileNotFoundError :: FileNotFoundError()
  : message("itky: fatal error: file not found\nexecution terminated.")
{}

FileNotFoundError :: FileNotFoundError(const std::string& message)
  : message(message)
{}

FileNotFoundError :: ~FileNotFoundError() = default;

std::string FileNotFoundError :: what() {
  return message;
}
