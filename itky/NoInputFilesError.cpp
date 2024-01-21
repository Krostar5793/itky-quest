#include "NoInputFilesError.h"

NoInputFilesError :: NoInputFilesError(const std::string& message)
  : message(message)
{}

NoInputFilesError :: ~NoInputFilesError() = default;

std::string NoInputFilesError :: what() {
  return message;
}
