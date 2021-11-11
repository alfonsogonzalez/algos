/*
algos by Alfonso Gonzalez
https://github.com/alfonsogonzalez/algos
https://www.youtube.com/c/AlfonsoGonzalezSpaceEngineering

Tests of BinTreeTraverse class
*/
#include "../BinTreeTraverser.hpp"

// Google testing library
#include <gtest/gtest.h>

TEST( BinTreeTraverser, BinTreeTraverserBasicConstruction ) {
  EXPECT_NO_THROW( BinTreeTraverser traverser( "preorder" ) );
  EXPECT_NO_THROW( BinTreeTraverser traverser( "inorder" ) );
  EXPECT_NO_THROW( BinTreeTraverser traverser( "postorder" ) );
}

TEST( BinTreeTraverser, InvalidMethodExpectThrow ) {
  EXPECT_THROW( const BinTreeTraverser traverser( "astrodynamics" ),
                std::runtime_error );
}

TEST( BinTreeTraverser, PreOrderBasicUsage ) {
  const BinTreeNode node2( 1 );
  const BinTreeNode node1( 4 );
  const BinTreeNode node0( 3, &node1, &node2 );

  BinTreeTraverser   traverser( "preorder" );
  std::vector< int > sol = traverser.traverse( &node0 );

  EXPECT_EQ( sol[ 0 ], 3 );
  EXPECT_EQ( sol[ 1 ], 4 );
  EXPECT_EQ( sol[ 2 ], 1 );
}

TEST( BinTreeTraverser, InOrderBasicUsage ) {
  const BinTreeNode node2( 3 );
  BinTreeNode       node1( 2 );
  BinTreeNode       node0( 1 );

  node0.right = &node1;
  node1.left  = &node2;

  BinTreeTraverser   traverser( "inorder" );
  std::vector< int > sol = traverser.traverse( &node0 );

  EXPECT_EQ( sol[ 0 ], 1 );
  EXPECT_EQ( sol[ 1 ], 3 );
  EXPECT_EQ( sol[ 2 ], 2 );
}

TEST( BinTreeTraverser, PostOrderBasicUsage ) {
  const BinTreeNode node2( 3 );
  BinTreeNode       node1( 2 );
  BinTreeNode       node0( 1 );

  node0.right = &node1;
  node1.left  = &node2;

  BinTreeTraverser   traverser( "postorder" );
  std::vector< int > sol = traverser.traverse( &node0 );

  EXPECT_EQ( sol[ 0 ], 3 );
  EXPECT_EQ( sol[ 1 ], 2 );
  EXPECT_EQ( sol[ 2 ], 1 );
}

TEST( BinTreeTraverser, SetterGetter ) {
  const BinTreeNode node2( 3 );
  BinTreeNode       node1( 2 );
  BinTreeNode       node0( 1 );

  node0.right = &node1;
  node1.left  = &node2;

  BinTreeTraverser traverser( "postorder" );

  {
    std::vector< int > sol = traverser.traverse( &node0 );
    EXPECT_EQ( sol[ 0 ], 3 );
    EXPECT_EQ( sol[ 1 ], 2 );
    EXPECT_EQ( sol[ 2 ], 1 );
  }

  traverser.set_method( "inorder" );
  EXPECT_EQ( traverser.method(), "inorder" );

  {
    std::vector< int > sol = traverser.traverse( &node0 );
    EXPECT_EQ( sol[ 0 ], 1 );
    EXPECT_EQ( sol[ 1 ], 3 );
    EXPECT_EQ( sol[ 2 ], 2 );
  }
}

int main( int argc, char **argv ) {
  ::testing::InitGoogleTest( &argc, argv );
  return RUN_ALL_TESTS();
}