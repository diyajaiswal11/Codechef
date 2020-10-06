for _ in range(int(input())):
    k=int(input())
    l=1
    a = [[0 for i in range(8)] for j in range(8)]
    a[0][0]='O'
    for i in range(8):
        for j in range(8):
            if((j!=0 or i!=0)):
                if(l<=k):
                    a[i][j]='.'
                else:
                    a[i][j]='X'
            l+=1
    for i in range(8):
        for j in range(8):
            print(a[i][j],end='')
        print('\n')

