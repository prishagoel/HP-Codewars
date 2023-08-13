n = int(input())
ans = 0
for i in range(1, n + 1):
   if i % 5 == 0 and i % 3 == 0:
      ans += 0
   elif i % 3 == 0:
      ans += 3
   elif i % 5 == 0:
      ans += 5
   else:
      ans += i
print(ans)