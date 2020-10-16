'''
Problem Link - https://www.codechef.com/COOK120B/problems/ORTHODOX
'''
from sys import stdin,stdout
from math import *
from collections import *
from functools import reduce
from operator import ior

mod = 1000000007

def gcd(a,b):
	while b:
		a,b = b,a%b
	return a

def lcm(a,b): return (a*b) // gcd(a,b)

def set_bits(X):
	c = 0
	while X:
		X &= (X-1);c += 1
	return c

def compute_MOD(N,M): return (N%M + M) % M

def solve(arr):
	cur,ans = set(),set()
	for i in arr:
	  cur = {i | b for b in cur} | {i}
	  ans |= cur      
	return len(ans)

def get_array(): return list(map(int, stdin.readline().split()))
 
def get_ints(): return map(int, stdin.readline().split())

def get_int(): return int(stdin.readline())

def get_input(): return stdin.readline().strip()

def main():
    tc = get_int()
    while(tc):
    	N = get_int()
    	arr = get_array()
    	if solve(arr) == ((N*(N+1))//2):
    		stdout.write('YES\n')
    	else:
    		stdout.write('NO\n')
    	tc-=1

if __name__ == "__main__":
    main()

