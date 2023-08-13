f, p = map(int, input().split())
if f == p:
   print("Draw")
   exit(0)
if f == 1:
   print("Ferb")
elif p == 1:
   print("Phineas")
else:
   if p < f:
      print("Ferb")
   else:
      print("Phineas")