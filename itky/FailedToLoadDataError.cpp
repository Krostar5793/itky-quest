#include "FailedToLoadDataError.h"

FailedToLoadDataError :: FailedToLoadDataError(const std::string message)
  : message(message)
{}

FailedToLoadDataError :: ~FailedToLoadDataError() = default;

std::string FailedToLoadDataError :: what() {
  return message;
}
