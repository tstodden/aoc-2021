#include "input.h"

#include <cstdlib>
#include <fstream>
#include <vector>

const char* kInputFilename = "day_7/input.txt";

const int kLineBufferSize = 10;

std::vector<int> read_input() {
  auto result = std::vector<int>();

  auto fs = std::ifstream(kInputFilename);

  char line[kLineBufferSize];
  while (fs.good()) {
    fs.getline(line, kLineBufferSize, ',');
    result.push_back(atoi(line));
  }

  return result;
}
