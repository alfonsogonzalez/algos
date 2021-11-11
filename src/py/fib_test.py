'''
algos by Alfonso Gonzalez
https://github.com/alfonsogonzalez/algos
https://www.youtube.com/c/AlfonsoGonzalezSpaceEngineering

Tests of fibonacci sequence functions
'''
import fib

def test_fib_rec():
	assert fib.fib_rec( 0 )  == 0
	assert fib.fib_rec( 1 )  == 1
	assert fib.fib_rec( 2 )  == 1
	assert fib.fib_rec( 3 )  == 2
	assert fib.fib_rec( 4 )  == 3
	assert fib.fib_rec( 5 )  == 5
	assert fib.fib_rec( 14 ) == 377

def test_fib_itr():
	assert fib.fib_itr( 0 )  == 0
	assert fib.fib_itr( 1 )  == 1
	assert fib.fib_itr( 2 )  == 1
	assert fib.fib_itr( 3 )  == 2
	assert fib.fib_itr( 4 )  == 3
	assert fib.fib_itr( 5 )  == 5
	assert fib.fib_itr( 14 ) == 377
	