/*
algos by Alfonso Gonzalez
https://github.com/alfonsogonzalez/algos
https://www.youtube.com/c/AlfonsoGonzalezSpaceEngineering

Implementation of reverse_linked_list function
*/
#include "reverse_linked_list.hpp"

#include <bits/stdc++.h>  // for std::swap function

/*
#include <vector>

ListNode* reverse_linked_list( ListNode* head ) {
  std::vector< ListNode* > pointers;
  ListNode* next = head;
  while ( next->next ) {
        pointers.emplace_back( next );
        next = next->next;
  }
  pointers.emplace_back( next );

  const int len = pointers.size() - 1;
  for( int idx = 0; idx < len / 2 + 1; ++idx ) {
        std::swap( pointers[ idx ]->val, pointers[ len - idx ]->val );
  }

  return head;
}
*/

ListNode* reverse_linked_list( ListNode* head ) {
  ListNode* pointers[ 100 ];
  int       idx  = 0;
  ListNode* next = head;
  while ( next->next ) {
    pointers[ idx ] = next;
    next            = next->next;
    ++idx;
  }
  pointers[ idx ] = next;

  for ( int n = 0; n < idx / 2 + 1; ++n ) {
    std::swap( pointers[ n ]->val, pointers[ idx - n ]->val );
  }

  return head;
}
