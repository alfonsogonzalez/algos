'''
algos by Alfonso Gonzalez
https://github.com/alfonsogonzalez/algos
https://www.youtube.com/c/AlfonsoGonzalezSpaceEngineering

Implementation of factorial functions
'''

def factorial_rec( n ):
	if n == 0 or n == 1:
		return 1
	else:
		return n * factorial_rec( n - 1 )

def factorial_itr( n ):
	if n == 0 or n == 1:
		return 1
	else:
		product = 1
		for i in range( 2, n + 1 ):
			product *= i

		return product
