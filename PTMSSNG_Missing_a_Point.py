 Problem ::  https://www.codechef.com/JULY20B/problems/PTMSSNG
 
 
 #Python Solution ::
 
 
from sys import stdin,stdout            # Module to read/write

def xor(l):                             # Xor value of entire list
	xor= 0
	n=len(l)
	for i in range(n):
		xor = xor ^ l[i]
	return xor

for _ in range(int(stdin.readline())):            # Test Cases Loop
	N = int(stdin.readline())                       # Input
	X= []
	Y = []
	for _ in range((N*4)-1):                        # Loop for finding missing point.
		X1 , Y1 = map(int,stdin.readline().split())   #Input all the values
		X.append(X1)
		Y.append(Y1)
	print(xor(X),xor(Y))                            # Xor property makes the result
  
  
