#include "cpplib.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

#include "limits"

std::string CPPLib::PrintHelloWorld() { return "**** Hello World ****"; }
std::string CPPLib::PrintIntro() {
  string line = "Anu Nair"; 
  return line;

}

// Calculates the Nth Fibonacci number
int CPPLib::fib(int N) {
  if (N == 0) {
    return 0;
  }

  if (N == 1) {
    return 1;
  }

  return fib(N - 1) + fib(N - 2);
}

int CPPLib::FindMax(const std::vector<int> &inputs) {
  int result = std::numeric_limits<int>::min();
  for (auto n : inputs) {
    if (n > result) {
      result = n;
    }
  }
  return result;
}
