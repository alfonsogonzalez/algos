/*
algos by Alfonso Gonzalez
https://github.com/alfonsogonzalez/algos
https://www.youtube.com/c/AlfonsoGonzalezSpaceEngineering

Tests of reverse_linked_list function
*/
#include "../reverse_linked_list.hpp"

// Google testing library
#include <gtest/gtest.h>

// Base example from LeetCode
TEST( ReverseLinkedList, FunctionLeetCodeExample ) {
  ListNode node4( 4 );
  ListNode node3( 3, &node4 );
  ListNode node2( 2, &node3 );
  ListNode node1( 1, &node2 );

  reverse_linked_list( &node1 );

  EXPECT_EQ( node1.val, 4 );
  EXPECT_EQ( node2.val, 3 );
  EXPECT_EQ( node3.val, 2 );
  EXPECT_EQ( node4.val, 1 );
  EXPECT_EQ( node4.next, nullptr );
}

TEST( ReverseLinkedList, TwoValueListTest ) {
  ListNode node2( 2 );
  ListNode node1( 1, &node2 );

  reverse_linked_list( &node1 );

  EXPECT_EQ( node1.val, 2 );
  EXPECT_EQ( node2.val, 1 );
  EXPECT_EQ( node2.next, nullptr );
}

TEST( ReverseLinkedList, OneValueListTest ) {
  ListNode node1( 1 );

  reverse_linked_list( &node1 );

  EXPECT_EQ( node1.val, 1 );
  EXPECT_EQ( node1.next, nullptr );
}

int main( int argc, char **argv ) {
  ::testing::InitGoogleTest( &argc, argv );
  return RUN_ALL_TESTS();
}