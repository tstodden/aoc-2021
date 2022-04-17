#include "input.h"

#include <cstdlib>
#include <fstream>
#include <vector>

const char* kInputFilename = "day_2/input.txt";

const int kLineBufferSize = 10;

std::vector<Command> read_input() {
  auto result = std::vector<Command>();

  auto fs = std::ifstream(kInputFilename);

  char line[kLineBufferSize];
  while (fs.good()) {
    fs.getline(line, kLineBufferSize);
    result.push_back(Command(line));
  }

  return result;
}
