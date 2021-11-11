/*
algos by Alfonso Gonzalez
https://github.com/alfonsogonzalez/algos
https://www.youtube.com/c/AlfonsoGonzalezSpaceEngineering

Tests of factorial functions
*/
#include "../factorial.hpp"

// Google testing library
#include <gtest/gtest.h>

TEST( Factorial, BasicUsageRecursive ) {
  EXPECT_EQ( factorial_rec( 0 ), 1  );
  EXPECT_EQ( factorial_rec( 1 ), 1  );
  EXPECT_EQ( factorial_rec( 2 ), 2  );
  EXPECT_EQ( factorial_rec( 3 ), 6  );
  EXPECT_EQ( factorial_rec( 4 ), 24 );
}

TEST( Factorial, BasicUsageIterative ) {
  EXPECT_EQ( factorial_itr( 0 ), 1  );
  EXPECT_EQ( factorial_itr( 1 ), 1  );
  EXPECT_EQ( factorial_itr( 2 ), 2  );
  EXPECT_EQ( factorial_itr( 3 ), 6  );
  EXPECT_EQ( factorial_itr( 4 ), 24 );
}

int main( int argc, char **argv ) {
  ::testing::InitGoogleTest( &argc, argv );
  return RUN_ALL_TESTS();
}