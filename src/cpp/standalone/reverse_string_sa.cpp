/*
algos by Alfonso Gonzalez
https://github.com/alfonsogonzalez/algos
https://www.youtube.com/c/AlfonsoGonzalezSpaceEngineering

Standalone call to reverse_string function

*/

#include <cstring>
#include <iostream>

#include "../reverse_string.hpp"

int main() {
  const char          str[] = "astrodynamics";
  const int           len   = strlen( str );
  std::vector< char > s( str, str + len );

  std::cout << len << std::endl;

  for ( char c : s ) {
    std::cout << c;
  }
  std::cout << std::endl;

  reverse_string( s );
  for ( char c : s ) {
    std::cout << c;
  }
  std::cout << std::endl;

  return 0;
}
