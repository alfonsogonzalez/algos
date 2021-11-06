/*
algos by Alfonso Gonzalez
https://github.com/alfonsogonzalez/algos
https://www.youtube.com/c/AlfonsoGonzalezSpaceEngineering

Implementation of in-place string reversal function
*/

#include "reverse_string.hpp"

void reverse_string( std::vector< char >& s ) {
  char hold;
  int  idx0 = 0;
  int  idx1 = s.size() - 1;

  while ( idx0 < idx1 ) {
    hold      = s[ idx0 ];
    s[ idx0 ] = s[ idx1 ];
    s[ idx1 ] = hold;
    ++idx0;
    --idx1;
  }
}
