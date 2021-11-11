/*
algos by Alfonso Gonzalez
https://github.com/alfonsogonzalez/algos
https://www.youtube.com/c/AlfonsoGonzalezSpaceEngineering

Tests of fibonacci sequence functions
*/
#include "../fib.hpp"

// Google testing library
#include <gtest/gtest.h>

TEST( Fib, BasicUsageRecursive ) {
  EXPECT_EQ( fib_rec( 0 ), 0 );
  EXPECT_EQ( fib_rec( 1 ), 1 );
  EXPECT_EQ( fib_rec( 2 ), 1 );
  EXPECT_EQ( fib_rec( 3 ), 2 );
  EXPECT_EQ( fib_rec( 4 ), 3 );
  EXPECT_EQ( fib_rec( 5 ), 5 );
  EXPECT_EQ( fib_rec( 14 ), 377 );
}

TEST( Fib, BasicUsageIterative ) {
  EXPECT_EQ( fib_itr( 0 ), 0 );
  EXPECT_EQ( fib_itr( 1 ), 1 );
  EXPECT_EQ( fib_itr( 2 ), 1 );
  EXPECT_EQ( fib_itr( 3 ), 2 );
  EXPECT_EQ( fib_itr( 4 ), 3 );
  EXPECT_EQ( fib_itr( 5 ), 5 );
  EXPECT_EQ( fib_itr( 14 ), 377 );
}

int main( int argc, char **argv ) {
  ::testing::InitGoogleTest( &argc, argv );
  return RUN_ALL_TESTS();
}