/*
algos by Alfonso Gonzalez
https://github.com/alfonsogonzalez/algos
https://www.youtube.com/c/AlfonsoGonzalezSpaceEngineering

Interface of ListNode struct
*/

struct ListNode {
  ListNode();
  ListNode( int val );
  ListNode( int val, ListNode* next );
  int       val;
  ListNode* next;
};
