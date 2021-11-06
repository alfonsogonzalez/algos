/*
algos by Alfonso Gonzalez
https://github.com/alfonsogonzalez/algos
https://www.youtube.com/c/AlfonsoGonzalezSpaceEngineering

Tests of in-place string reversal function
*/

#include "../reverse_string.hpp"

// Google testing library
#include <gtest/gtest.h>

TEST( ReverseString, BasicUsage ) {
  const char          str[]     = "astrodynamics";
  const char          str_rev[] = "scimanydortsa";
  const int           len       = strlen( str );
  std::vector< char > s( str, str + len );

  reverse_string( s );

  for ( int n = 0; n < len; ++n ) {
    EXPECT_EQ( s[ n ], str_rev[ n ] );
  }
}

int main( int argc, char **argv ) {
  ::testing::InitGoogleTest( &argc, argv );
  return RUN_ALL_TESTS();
}