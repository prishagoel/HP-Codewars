N = int(10**5 + 10)
prime = [True] * N
prime[0] = prime[1] = False
for i in range(2, N):
   if prime[i]:
      for j in range(i * i, N, i):
         prime[j] = False
n = int(input())
a = list(map(int, input().split()))

can = [False] * (n + 1)
can_max = [0] * (n + 1)
can[0] = True

for i in range(1, n + 1):
   Sum = 0
   for j in range(i, 0, -1):
      Sum += a[j - 1]
      if prime[Sum] and can[j - 1]:
         can[i] = True
         can_max[i] = max(can_max[i], 1 + can_max[j - 1])

if can[n]:
   print("HAPPY")
   print(can_max[n])
else:
   print("UNHAPPY")