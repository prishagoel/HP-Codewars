a = list(map(int, input().split()))
a.sort()
k = int(input())
while k > 0:
   a[2] *= 2
   k -= 1
print(sum(a))