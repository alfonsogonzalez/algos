/*
algos by Alfonso Gonzalez
https://github.com/alfonsogonzalez/algos
https://www.youtube.com/c/AlfonsoGonzalezSpaceEngineering

Interfaces of BinTreeNode struct
*/

struct BinTreeNode {
  BinTreeNode( int, const BinTreeNode*, const BinTreeNode* );
  BinTreeNode( int, const BinTreeNode* );
  BinTreeNode( int );
  int                val;
  const BinTreeNode* left;
  const BinTreeNode* right;
};
