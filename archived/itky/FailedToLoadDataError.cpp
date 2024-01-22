#include "FailedToLoadDataError.h"

FailedToLoadDataError :: FailedToLoadDataError()
  : message("itky: \033[31m fatal error: \033[m failed to load data\nexecution terminated.")
{}

FailedToLoadDataError :: FailedToLoadDataError(const std::string message)
  : message(message)
{}

FailedToLoadDataError :: ~FailedToLoadDataError() = default;

std::string FailedToLoadDataError :: what() {
  return message;
}
