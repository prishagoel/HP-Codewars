n = int(input())
sm = 0
for i in range(n):
   x = int(input())
   sm += x

print ("WON" if sm % 100 == 0 else "LOSE")