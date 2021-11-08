'''
algos by Alfonso Gonzalez
https://github.com/alfonsogonzalez/algos
https://www.youtube.com/c/AlfonsoGonzalezSpaceEngineering

Implementation of swap_nodes_pairs function
'''

def swap_nodes_pairs( head ):
	if head and head.next:
		head.val, head.next.val = head.next.val, head.val
		swap_nodes_pairs( head.next.next )
	return head
