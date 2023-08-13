N = int(input())
for i in range(N):
   x = input()
   chk = 0
   for c in x:
      if c == '7':
         chk = 1
         break
   if chk:
      print(x)
      exit(0)

print("DOES NOT EXIST")