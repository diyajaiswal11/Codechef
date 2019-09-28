def fac(n):
    f=1 
    for j in range(1,n+1): 
        f=f*j 
    return f
t=int(input())
for i in range(t):
    n,k=list(map(int,input().split()))
    a=list(map(int,input().split()))
    a.sort() 
    b=a[0:k] 
    x=b.count(a[k-1])
    y=a.count(a[k-1])
    p=fac(y)/(fac(x)*fac(y-x)) 
    print(int(p))