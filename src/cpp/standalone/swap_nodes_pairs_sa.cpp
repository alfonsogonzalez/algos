/*
algos by Alfonso Gonzalez
https://github.com/alfonsogonzalez/algos
https://www.youtube.com/c/AlfonsoGonzalezSpaceEngineering

Standalone call to swap_nodes_pairs function
*/
#include <iostream>

#include "../swap_nodes_pairs.hpp"

int main() {
  ListNode node4( 4 );
  ListNode node3( 3, &node4 );
  ListNode node2( 2, &node3 );
  ListNode node1( 1, &node2 );

  {
    ListNode* ptr = &node1;

    while ( ptr->next ) {
      std::cout << ptr->val << ", ";
      ptr = ptr->next;
    }
    std::cout << ptr->val << std::endl;
  }

  swap_nodes_pairs( &node1 );

  {
    ListNode* ptr = &node1;

    while ( ptr->next ) {
      std::cout << ptr->val << ", ";
      ptr = ptr->next;
    }
    std::cout << ptr->val << std::endl;
  }

  return 0;
}
