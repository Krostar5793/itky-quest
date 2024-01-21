#include <iostream>
#include <fstream>
#include <vector>
#include <string>

int main(int argc, char* argv[]) {
  std::int8_t c;
  std::ifstream input;
  std::vector<std::string> args(argv, argv + argc);

  for ( auto& arg : args ) std::cout << arg << std::endl;

  return 0;
}
