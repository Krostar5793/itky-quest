#include "FileNotFoundError.h"

FileNotFoundError :: FileNotFoundError()
  : message("itky: \033[31m fatal error: \033[m file not found\nexecution terminated.")
{}

FileNotFoundError :: FileNotFoundError(const std::string& message)
  : message(message)
{}

FileNotFoundError :: ~FileNotFoundError() = default;

std::string FileNotFoundError :: what() {
  return message;
}
