def factor(x):
   ans = 0
   i = 1
   while i * i <= x:
      if x % i == 0:
         ans += 1
         if i * i != x:
            ans += 1
      i += 1
   return ans

ans = 0

n = int(input())

for i in range(1, n + 1, 2):
   if factor(i) == 8:
      ans += 1

print(ans)