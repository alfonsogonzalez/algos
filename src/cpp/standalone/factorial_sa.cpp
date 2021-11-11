/*
algos by Alfonso Gonzalez
https://github.com/alfonsogonzalez/algos
https://www.youtube.com/c/AlfonsoGonzalezSpaceEngineering

Standalone call to factorial functions
*/
#include <iostream>

#include "../factorial.hpp"

int main() {
  std::cout << "0! = " << factorial_rec( 0 ) << std::endl;
  std::cout << "1! = " << factorial_rec( 1 ) << std::endl;
  std::cout << "2! = " << factorial_rec( 2 ) << std::endl;
  std::cout << "3! = " << factorial_rec( 3 ) << std::endl;
  std::cout << "4! = " << factorial_rec( 4 ) << std::endl;
  std::cout << "9! = " << factorial_rec( 9 ) << std::endl;
  return 0;
}
