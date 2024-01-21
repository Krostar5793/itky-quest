#include <string>
#include <exception>

class NoInputFilesError : public std::exception {
  private:
    std::string message;

  public:
    NoInputFilesError(const std::string& message);
    std::string what();
};
