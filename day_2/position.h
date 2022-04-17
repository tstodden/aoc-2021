#include <string>

enum class Direction {
  kUp = 0,
  kForward,
  kDown,
};

class Command {
 public:
  Command(const char* str);

  Direction direction();

  int distance();

 private:
  std::string command_str;
};
