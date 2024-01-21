#include "NoInputFilesError.h"

NoInputFilesError :: NoInputFilesError(const std::string& message)
  : message(message)
{}

std::string NoInputFilesError :: what() {
  return message;
}
