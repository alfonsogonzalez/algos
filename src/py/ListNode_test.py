'''
algos by Alfonso Gonzalez
https://github.com/alfonsogonzalez/algos
https://www.youtube.com/c/AlfonsoGonzalezSpaceEngineering

Tests of ListNode class
'''
from ListNode import ListNode

def test_ListNode_basic_construction():
	node = ListNode( 3 )
	assert node.val == 3
	assert node.next is None

	node4 = ListNode()
	node3 = ListNode( 3, node4 )
	node2 = ListNode( 2, node3 )
	node1 = ListNode( 1, node2 )

	assert node4.val == 0
	assert node3.val == 3
	assert node2.val == 2
	assert node1.val == 1

	assert node4.next is None
	assert node3.next is node4
	assert node2.next is node3
	assert node1.next is node2
