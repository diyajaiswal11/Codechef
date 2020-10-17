#https://www.codechef.com/problems/L56LABY
for _ in range(int(input())):
    n,m = list(map(int,input().split()))
    arr = []
    ma = 0
    for i in range(n):
        arr.append(list(map(int,input().split())))
        ma = max(max(arr[-1]),ma )
    visited=[]
    for i in range(n):
        visited.append([0]*m)
    v=[]
    for i in range(ma+1):
        v.append([])
    for i in range(n):
        for j in range(m):
            if arr[i][j] > 0:
                v[arr[i][j]].append((i,j))
    for i in range(ma,0,-1):
        for cx,cy in v[i]:
            if visited[cx][cy] == 2:
                continue
            if cx+1 < n and arr[cx+1][cy]!=-1 and visited[cx+1][cy]==0:
                visited[cx+1][cy] = 1
                v[i-1].append((cx+1,cy))
            if cx-1 > -1 and arr[cx-1][cy]!=-1 and visited[cx-1][cy]==0:
                visited[cx-1][cy] = 1
                v[i-1].append((cx-1,cy))
            if cy+1 < m and arr[cx][cy+1]!=-1 and visited[cx][cy+1]==0:
                visited[cx][cy+1] = 1
                v[i-1].append((cx,cy+1))
            if cy-1 > -1 and arr[cx][cy-1]!=-1 and visited[cx][cy-1]==0:
                visited[cx][cy-1] = 1
                v[i-1].append((cx,cy-1))
            visited[cx][cy] = 2
    for i in range(n):
        st = ''
        for j in range(m):
            if arr[i][j] ==-1:
                st += 'B'
            elif visited[i][j]>0:
                st+='Y'
            else:
                st+='N'
        print(st)
