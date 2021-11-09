/*
algos by Alfonso Gonzalez
https://github.com/alfonsogonzalez/algos
https://www.youtube.com/c/AlfonsoGonzalezSpaceEngineering

Implementation of factorial functions
*/
#include "factorial.hpp"

int factorial_rec( int n ) {
  if ( n == 0 or n == 1 ) {
    return 1;
  } else {
    return n * factorial_rec( n - 1 );
  }
}

int factorial_itr( int n ) {
  if ( n == 0 or n == 1 ) {
    return 1;
  } else {
    int product = 1;
    for ( int i = 2; i <= n; ++i ) {
      product *= i;
    }
    return product;
  }
}