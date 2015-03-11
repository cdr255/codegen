#include "codegen.hpp"

int main()
{
  Field hello("Hello\n");
  std::cout << hello.output();
  return 0;
}
