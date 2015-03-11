#include "codegen.hpp"

int main()
{
  Field hello("Hello\n", "World!\n");
  std::cout << hello.output();
  return 0;
}
