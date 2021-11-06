/*
algos by Alfonso Gonzalez
https://github.com/alfonsogonzalez/algos
https://www.youtube.com/c/AlfonsoGonzalezSpaceEngineering

Interface of swap_nodes_pairs function
and ListNode struct
*/

struct ListNode {
  ListNode();
  ListNode( int val );
  ListNode( int val, ListNode* next );
  int       val;
  ListNode* next;
};

ListNode* swap_nodes_pairs( ListNode* head );