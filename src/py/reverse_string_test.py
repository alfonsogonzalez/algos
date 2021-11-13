'''
algos by Alfonso Gonzalez
https://github.com/alfonsogonzalez/algos
https://www.youtube.com/c/AlfonsoGonzalezSpaceEngineering

Implementation of reverse_string function
'''

from reverse_string import reverse_string

def test_reverse_string_basic_usage():
	word = [ l for l in 'astrodynamics' ]
	rev  = 'scimanydortsa'

	print( ''.join( word ) )
	reverse_string( word )
	print( ''.join( word ) )

	for n in range( len( rev ) ):
		assert word[ n ] == rev[ n ]

if __name__ == '__main__':
	test_reverse_string_basic_usage()
