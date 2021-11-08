'''
algos by Alfonso Gonzalez
https://github.com/alfonsogonzalez/algos
https://www.youtube.com/c/AlfonsoGonzalezSpaceEngineering

Tests of swap_nodes_pairs function
'''

from swap_nodes_pairs import swap_nodes_pairs
from ListNode import ListNode

def test_swap_nodes_pairs_basic_usage():
	node4 = ListNode( 4 )
	node3 = ListNode( 3, node4 )
	node2 = ListNode( 2, node3 )
	node1 = ListNode( 1, node2 )

	swap_nodes_pairs( node1 )

	assert node1.val == 2
	assert node2.val == 1
	assert node3.val == 4
	assert node4.val == 3
	assert node4.next is None	
