#include "ParamsNotFoundError.h"

ParamsNotFoundError :: ParamsNotFoundError()
  : message("Params Not Found :")
{}

ParamsNotFoundError :: ParamsNotFoundError(const std::string message)
  : message(message)
{}

ParamsNotFoundError :: ~ParamsNotFoundError() = default;

std::string ParamsNotFoundError :: what() const noexcept {
  return message;
}
