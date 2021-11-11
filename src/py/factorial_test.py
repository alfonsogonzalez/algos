'''
algos by Alfonso Gonzalez
https://github.com/alfonsogonzalez/algos
https://www.youtube.com/c/AlfonsoGonzalezSpaceEngineering

Implementation of factorial functions
'''
from factorial import factorial_rec, factorial_itr

def test_factorial_recursive():
	assert factorial_rec( 0 ) == 1
	assert factorial_rec( 1 ) == 1
	assert factorial_rec( 2 ) == 2
	assert factorial_rec( 3 ) == 6
	assert factorial_rec( 4 ) == 24

def test_factorial_iterative():
	assert factorial_itr( 0 ) == 1
	assert factorial_itr( 1 ) == 1
	assert factorial_itr( 2 ) == 2
	assert factorial_itr( 3 ) == 6
	assert factorial_itr( 4 ) == 24

if __name__ == '__main__':
	print( '0! = ', factorial_rec( 0 ) )
	print( '1! = ', factorial_rec( 1 ) )
	print( '2! = ', factorial_rec( 2 ) )
	print( '3! = ', factorial_rec( 3 ) )
	print( '4! = ', factorial_rec( 4 ) )
	print( '9! = ', factorial_rec( 9 ) )
