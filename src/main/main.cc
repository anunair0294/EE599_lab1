#include <iostream>
#include "src/lib/cpplib.h"

int main() {
  // Print Hello world!
  CPPLib s;
  std::cout << s.PrintHelloWorld() << std::endl;
  std::cout << s.PrintIntro() << std::endl;
  
  return 0;
}