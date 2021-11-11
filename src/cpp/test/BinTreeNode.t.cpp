/*
algos by Alfonso Gonzalez
https://github.com/alfonsogonzalez/algos
https://www.youtube.com/c/AlfonsoGonzalezSpaceEngineering

Tests of BinTreeNode struct
*/
#include "../BinTreeNode.hpp"

// Google testing library
#include <gtest/gtest.h>

TEST( BinTreeNode, NodeBasicConstruction ) {
  const BinTreeNode node( 5 );
  EXPECT_EQ( node.val, 5 );
  EXPECT_EQ( node.left, nullptr );
  EXPECT_EQ( node.right, nullptr );
}

TEST( BinTreeNode, TreeBasicConstruction ) {
  const BinTreeNode node2( 5 );
  const BinTreeNode node1( 3 );
  const BinTreeNode node2( 0, node1, node2 );
}

int main( int argc, char **argv ) {
  ::testing::InitGoogleTest( &argc, argv );
  return RUN_ALL_TESTS();
}