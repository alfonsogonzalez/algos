/*
algos by Alfonso Gonzalez
https://github.com/alfonsogonzalez/algos
https://www.youtube.com/c/AlfonsoGonzalezSpaceEngineering

Implementation of swap_nodes_pairs function
*/
#include "swap_nodes_pairs.hpp"

#include <bits/stdc++.h>  // for std::swap function

ListNode* swap_nodes_pairs( ListNode* head ) {
  if ( head && head->next ) {
    std::swap( head->val, head->next->val );
    swap_nodes_pairs( head->next->next );
  }
  return head;
}
