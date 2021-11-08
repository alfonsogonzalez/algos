'''
algos by Alfonso Gonzalez
https://github.com/alfonsogonzalez/algos
https://www.youtube.com/c/AlfonsoGonzalezSpaceEngineering

Implementation of reverse_linked_list function
'''
from ListNode import ListNode

def reverse_linked_list( head ):
	if not ( head or head.next ):
		return head

	nodes = [ ListNode() ] * 100
	idx   = 0
	while( head.next ):
		nodes[ idx ] = head
		head         = head.next
		idx         += 1
	nodes[ idx ] = head

	for n in range( idx // 2 + 1 ):
		nodes[ n ].val, nodes[ idx - n ].val =\
			nodes[ idx - n ].val, nodes[ n ].val

	return head
