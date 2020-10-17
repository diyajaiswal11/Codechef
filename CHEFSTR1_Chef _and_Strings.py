# Problem :: https://www.codechef.com/JULY20B/problems/CHEFSTR1

#Python 

from sys import stdin,stdout               # module to read/write o/p

for _ in range(int(stdin.readline())):     # TestCase Loop  
	N = int(stdin.readline())                # Input
	Intergers = list(map(int,stdin.readline().split()))     # List of inputs
	print(sum([abs(Intergers[n]-Intergers[n-1])-1 for n in range(1,len(Intergers))]))      # total number of strings he has to skip
  
  
