#include "UnknownCommandError.h"

UnknownCommandError :: UnknownCommandError()
  : message("Unknown command: ")
{}

UnknownCommandError :: UnknownCommandError(const std::string message)
  : message(message)
{}

UnknownCommandError :: ~UnknownCommandError() = default;

std::string UnknownCommandError :: what() const noexcept {
  return message;
}
