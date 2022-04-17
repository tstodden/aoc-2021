#include "window.h"

#include <sstream>
#include <stdexcept>
#include <vector>

int sum_window(const int i, const std::vector<int> vec) {
  const int kMaxIndex = vec.size() - 1;

  if (i + 2 > kMaxIndex) {
    std::ostringstream error;
    error << i << " is out of range.";
    throw std::out_of_range(error.str());
  }

  return vec[i] + vec[i + 1] + vec[i + 2];
}
