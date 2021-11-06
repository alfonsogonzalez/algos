/*
algos by Alfonso Gonzalez
https://github.com/alfonsogonzalez/algos
https://www.youtube.com/c/AlfonsoGonzalezSpaceEngineering

Implementation of swap_nodes_pairs function
and ListNode struct
*/
#include "swap_nodes_pairs.hpp"

#include <bits/stdc++.h>  // for std::swap function

ListNode::ListNode() : val( 0 ), next( nullptr ) {};
ListNode::ListNode( int val ) : val( val ), next( nullptr ) {};
ListNode::ListNode( int val, ListNode* next ) : val( val ), next( next ) {};

ListNode* swap_nodes_pairs( ListNode* head ) {
  if ( head ) {
    if ( head->next ) {
      std::swap( head->val, head->next->val );
      if ( head->next->next ) {
        swap_nodes_pairs( head->next->next );
      }
    }
  }
  return head;
}
