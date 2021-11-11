/*
algos by Alfonso Gonzalez
https://github.com/alfonsogonzalez/algos
https://www.youtube.com/c/AlfonsoGonzalezSpaceEngineering

Implementations of fibonacci sequence functions
*/
#include "fib.hpp"

int fib_rec( int n ) {
  if ( n == 0 ) {
    return 0;
  } else if ( n == 1 ) {
    return 1;
  } else {
    return fib_rec( n - 1 ) + fib_rec( n - 2 );
  }
}

int fib_itr( int n ) {
  if ( n == 0 ) {
    return 0;
  } else if ( n == 1 ) {
    return 1;
  } else {
    int val0    = 1;
    int val1    = 1;
    int val_fib = 1;

    for ( int i = 2; i < n; ++i ) {
      val_fib = val0 + val1;
      val0    = val1;
      val1    = val_fib;
    }

    return val_fib;
  }
}
