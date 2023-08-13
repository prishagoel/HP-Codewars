a = list(map(int, input().split()))
a.sort()
k = int(input())
while k > 0:
   a[0] *= 2
   a.sort()
   k -= 1
print(sum(a))