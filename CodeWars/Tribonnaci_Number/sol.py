x = int(input())

trib = [0, 0, 1]

if x <= 1:
   print("YES")
   exit(0)

while trib[-1] < x:
   trib.append(trib[-1] + trib[-2] + trib[-3])

if trib[-1] == x:
   print("YES")
else :
   print("NO")