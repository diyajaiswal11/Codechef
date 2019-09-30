# cook your dish here
for _ in range(int(input())):
    n=int(input())
    l=[]
    sh1=['d','f']
    sh2=['j','k']
    time=0
    for __ in range(n):
        l.append(input())
    s=list(set(l))
    # print(s)
    for i in s:
        a=l.count(i)
        t=0.2
        for j in range(1,len(i)):
            if (i[j] in sh1 and i[j-1] in sh1) or (i[j] in sh2 and i[j-1] in sh2):
                t+=0.4
            else:
                t+=0.2
        time+=t+(t/2)*(a-1)
    print(round(time*10))
            