#include "UnknownCommandError.h"

UnknownCommandError :: UnknownCommandError()
  : message("Unknown command ")
{}

UnknownCommandError :: UnknownCommandError(const char* message)
  : message(message)
{}

UnknownCommandError :: ~UnknownCommandError() = default;

const char* UnknownCommandError :: what() const noexcept {
  return message;
}
