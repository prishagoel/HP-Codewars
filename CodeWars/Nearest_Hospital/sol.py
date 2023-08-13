from collections import deque

dx = [-1, 1, 0, 0]
dy = [0, 0, -1, 1]
n, m = map(int, input().split())
a = []
dist = [[0 for i in range(m)] for j in range(n)]
vis = [[False for i in range(m)] for j in range(n)]

q = deque()

for i in range(n):
   L = list(map(int, input().split()))
   a.append(L)
   for j in range(m):
      if a[i][j] != 0:
         dist[i][j] = 0
         q.append([i, j])
         vis[i][j] = 1

def check(x, y) :
   return x >= 0 and x < n and y >= 0 and y < m and (not vis[x][y])

while len(q) > 0:
   C = q.popleft()
   x, y = C[0], C[1]
   for i in range(4):
      nx, ny = x + dx[i], y + dy[i]
      if check(nx, ny):
         vis[nx][ny] = True
         dist[nx][ny] = dist[x][y] + 1
         q.append([nx, ny])

ans = 0
for i in range(n):
   for j in range(m):
      ans += dist[i][j]

print(ans)