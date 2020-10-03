
t=int(input())
while t>0:
    tom=int(input())
    if tom%2!=0:
        print(tom//2)
    else:
        while(tom%2==0):
            tom//=2
        print(tom//2)
    t-=1
