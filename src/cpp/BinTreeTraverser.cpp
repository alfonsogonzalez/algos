/*
algos by Alfonso Gonzalez
https://github.com/alfonsogonzalez/algos
https://www.youtube.com/c/AlfonsoGonzalezSpaceEngineering

Implementation of BinTreeTraverse class
*/
#include "BinTreeTraverser.hpp"

#include <sstream>

BinTreeTraverser::BinTreeTraverser( const std::string& method_name ) {
  this->set_method( method_name );
}

void BinTreeTraverser::set_method( const std::string& method_name ) {
  if ( method_name.compare( "preorder" ) == 0 ) {
    m_method_name = method_name;
    m_method      = preorder;
  }
  else if ( method_name.compare( "inorder" ) == 0 ) {
  	m_method_name = method_name;
  	m_method      = inorder;
  }
  else if ( method_name.compare( "postorder" ) == 0 ) {
  	m_method_name = method_name;
  	m_method      = postorder;
  }
  else {
    std::ostringstream oss;
    oss << "Binary tree traverser method" << method_name;
    oss << "not implemented.";
    throw std::runtime_error( oss.str() );
  }
}

std::string BinTreeTraverser::method() const noexcept {
  return m_method_name;
}

std::vector< int > BinTreeTraverser::traverse( const BinTreeNode* node ) {
  std::vector< int > sol;
  m_method( node, sol );
  return sol;
}

void preorder( const BinTreeNode* node, std::vector< int >& sol ) {
  if ( node ) {
    sol.emplace_back( node->val );
    preorder( node->left, sol );
    preorder( node->right, sol );
  }
}

void inorder( const BinTreeNode* node, std::vector< int >& sol ) {
  if ( node ) {
    inorder( node->left, sol );
    sol.emplace_back( node->val );
    inorder( node->right, sol );
  }
}

void postorder( const BinTreeNode* node, std::vector< int >& sol ) {
  if ( node ) {
    postorder( node->left, sol );
    postorder( node->right, sol );
    sol.emplace_back( node->val );
 	  }
}