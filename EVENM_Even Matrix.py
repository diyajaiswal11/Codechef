#https://www.codechef.com/JUNE20B/problems/EVENM
tc = int(input())
while(tc):
    n = int(input())
    A = [[0] * n for _ in range(n)]
    i, j, di, dj = 0, 0, 0, 1
    for k in range(n*n):
        A[i][j] = k + 1
        if A[(i+di)%n][(j+dj)%n]:
            di, dj = dj, -di
        i += di
        j += dj
    for i in A:
        print(*i)
    tc-= 1
