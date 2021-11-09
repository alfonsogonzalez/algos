'''
algos by Alfonso Gonzalez
https://github.com/alfonsogonzalez/algos
https://www.youtube.com/c/AlfonsoGonzalezSpaceEngineering

Implementation of fibonacci sequence functions
'''

def fib_rec( n ):
	if n == 0:
		return 0
	elif n == 1:
		return 1
	else:
		return fib_rec( n - 1 ) + fib_rec( n - 2 )

def fib_itr( n ):
	if n == 0:
		return 0
	elif n == 1:
		return 1
	else:
		val0    = 1
		val1    = 1
		val_fib = 1
		for i in range( 2, n ):
			val_fib = val0 + val1
			val0    = val1
			val1    = val_fib
		return val_fib
