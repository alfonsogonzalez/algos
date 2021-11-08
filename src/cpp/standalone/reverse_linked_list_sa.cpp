/*
algos by Alfonso Gonzalez
https://github.com/alfonsogonzalez/algos
https://www.youtube.com/c/AlfonsoGonzalezSpaceEngineering

Standalone call to reverse_linked_list function
*/
#include <iostream>

#include "../reverse_linked_list.hpp"

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

  reverse_linked_list( &node1 );

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
