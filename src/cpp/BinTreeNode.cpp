/*
algos by Alfonso Gonzalez
https://github.com/alfonsogonzalez/algos
https://www.youtube.com/c/AlfonsoGonzalezSpaceEngineering

Implementation of BinTreeNode struct
*/
#include "BinTreeNode.hpp"

BinTreeNode::BinTreeNode( int val, const BinTreeNode* left,
                          const BinTreeNode* right )
    : val( val ), left( left ), right( right ) {};

BinTreeNode::BinTreeNode( int val, const BinTreeNode* left )
    : val( val ), left( left ), right( nullptr ) {};

BinTreeNode::BinTreeNode( int val )
    : val( val ), left( nullptr ), right( nullptr ) {};
