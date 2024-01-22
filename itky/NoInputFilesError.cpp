#include "NoInputFilesError.h"

NoInputFilesError :: NoInputFilesError()
  : message("itky: fatal error: no input files\nexecution terminated.")
{}

NoInputFilesError :: NoInputFilesError(const std::string& message)
  : message(message)
{}

NoInputFilesError :: ~NoInputFilesError() = default;

std::string NoInputFilesError :: what() {
  return message;
}
