def cost(s):
   cst = 0
   for c in s:
      if c >= 'a':
         cst += ord(c) - ord('a') + 1
      else:
         cst += ord(c) - ord('A') + 27
   return cst

n, k = map(int, input().split())

pre = [0] * (n + 1)

for i in range(n):
   s = input()
   pre[i + 1] = pre[i] + cost(s)

ans = int(10**9)
for i in range(k, n + 1):
   ans = min(ans, pre[i] - pre[i - k])

print(ans)