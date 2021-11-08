/*
algos by Alfonso Gonzalez
https://github.com/alfonsogonzalez/algos
https://www.youtube.com/c/AlfonsoGonzalezSpaceEngineering

Implementation of ListNode struct
*/
#include "ListNode.hpp"

ListNode::ListNode() : val( 0 ), next( nullptr ) {};
ListNode::ListNode( int val ) : val( val ), next( nullptr ) {};
ListNode::ListNode( int val, ListNode* next ) : val( val ), next( next ) {};
