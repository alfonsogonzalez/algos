/*
algos by Alfonso Gonzalez
https://github.com/alfonsogonzalez/algos
https://www.youtube.com/c/AlfonsoGonzalezSpaceEngineering

Interface of BinTreeTraverse class
*/
#include <functional>
#include <vector>

#include "BinTreeNode.hpp"

class BinTreeTraverser {
 public:
  virtual ~BinTreeTraverser() = default;

  BinTreeTraverser( const std::string& method );

  std::vector< int > traverse( const BinTreeNode* node );

  void set_method( const std::string& method );
  std::string method() const noexcept;

 private:
  std::string m_method_name;
  std::function< void( const BinTreeNode*, std::vector< int >& ) > m_method;
};

void preorder( const BinTreeNode* node, std::vector< int >& sol );
void inorder( const BinTreeNode* node, std::vector< int >& sol );
void postorder( const BinTreeNode* node, std::vector< int >& sol );
