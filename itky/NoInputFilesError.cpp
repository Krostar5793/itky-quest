#include "NoInputFilesError.h"

NoInputFilesError :: NoInputFilesError()
  : message("itky: \033[31m fatal error: \033[m no input files\nexecution terminated.")
{}

NoInputFilesError :: NoInputFilesError(const std::string& message)
  : message(message)
{}

NoInputFilesError :: ~NoInputFilesError() = default;

std::string NoInputFilesError :: what() {
  return message;
}
