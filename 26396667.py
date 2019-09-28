"""import math 
def pow2(n): 
    p = int(math.log(n, 2))
    return p"""
t=int(input())
for i in range(t):
    n=int(input())
    if n==1:
        print("0") 
    else:
        c=0
        while n>=1:
            n=n//2 
            c+=1
        #x=pow2(n) 
        y=pow(2,c-1)%60 
        if y==1:
            print("0") 
        elif y==2:
            print("1") 
        elif y==4:
            print("2")
        elif y==8:
            print("3") 
        elif y==16:
            print("0") 
        elif y==32:
            print("9")
        
    