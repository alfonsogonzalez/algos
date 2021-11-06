'''
algos by Alfonso Gonzalez
https://github.com/alfonsogonzalez/algos
https://www.youtube.com/c/AlfonsoGonzalezSpaceEngineering

Implementation of reverse_string function
'''

def reverse_string( s ):
	hold = ''
	idx0 = 0
	idx1 = len( s ) - 1
	while idx0 < idx1:
		hold      = s[ idx0 ]
		s[ idx0 ] = s[ idx1 ]
		s[ idx1 ] = hold
		idx0     += 1
		idx1     -= 1
