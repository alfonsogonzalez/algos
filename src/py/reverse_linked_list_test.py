'''
algos by Alfonso Gonzalez
https://github.com/alfonsogonzalez/algos
https://www.youtube.com/c/AlfonsoGonzalezSpaceEngineering

Tests of reverse_linked_list function
'''

from reverse_linked_list import reverse_linked_list
from ListNode import ListNode

def test_reverse_linked_list_basic_usage():
	node4 = ListNode( 4 )
	node3 = ListNode( 3, node4 )
	node2 = ListNode( 2, node3 )
	node1 = ListNode( 1, node2 )

	reverse_linked_list( node1 )

	assert node1.val == 4
	assert node2.val == 3
	assert node3.val == 2
	assert node4.val == 1
	assert node4.next is None	

def test_reverse_linked_list_two_values():
	node2 = ListNode( 2 )
	node1 = ListNode( 1, node2 )

	reverse_linked_list( node1 )

	assert node1.val == 2
	assert node2.val == 1
	assert node2.next is None	

def test_reverse_linked_list_one_value():
	node1 = ListNode( 1 )

	reverse_linked_list( node1 )

	assert node1.val == 1
	assert node1.next is None	

if __name__ == '__main__':
	node4 = ListNode( 4 )
	node3 = ListNode( 3, node4 )
	node2 = ListNode( 2, node3 )
	node1 = ListNode( 1, node2 )

	print( 'before:' )
	print( node1.val )
	print( node2.val )
	print( node3.val )
	print( node4.val )

	reverse_linked_list( node1 )

	print()
	print( 'after:' )
	print( node1.val )
	print( node2.val )
	print( node3.val )
	print( node4.val )

