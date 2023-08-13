n = int(input())
cnt = [0] * 6

for i in range(n):
   x = int(input())
   cnt[x] += 1

for i in range(1, 6):
   print(cnt[i], "user rated the product as", i)
   