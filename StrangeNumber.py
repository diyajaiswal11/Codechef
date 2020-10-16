'''
Problem Link - https://www.codechef.com/APRIL20B/problems/STRNO/'''

from sys import stdin,stdout
import math 
def primeFactors(n):
	c = 0	
	while n % 2 == 0: 
		c +=1 
		n = n // 2
	for i in range(3,int(math.sqrt(n))+1,2): 		
		while n % i== 0: 
			c+=1
			n = n // i
	if n > 1: 
		c +=1
	return c 
for i in range(int(stdin.readline())):
	X,K = map(int,stdin.readline().split())
	L = primeFactors(X)
	if (K<=L):
		stdout.write('1'+'\n')
	else:
		stdout.write('0'+'\n')
