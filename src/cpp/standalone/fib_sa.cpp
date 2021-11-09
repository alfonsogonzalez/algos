/*
algos by Alfonso Gonzalez
https://github.com/alfonsogonzalez/algos
https://www.youtube.com/c/AlfonsoGonzalezSpaceEngineering

Standalone call to fibonacci sequence functions
*/
#include <iostream>

#include "../fib.hpp"

int main() {
  std::cout << "0! = "  << fib_rec( 0 )  << std::endl;
  std::cout << "1! = "  << fib_rec( 1 )  << std::endl;
  std::cout << "2! = "  << fib_rec( 2 )  << std::endl;
  std::cout << "3! = "  << fib_rec( 3 )  << std::endl;
  std::cout << "4! = "  << fib_rec( 4 )  << std::endl;
  std::cout << "9! = "  << fib_rec( 5 )  << std::endl;
  std::cout << "14! = " << fib_rec( 14 ) << std::endl;
  return 0;
}
