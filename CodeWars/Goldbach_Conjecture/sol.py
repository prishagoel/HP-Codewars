from math import sqrt

def is_prime(x):
   if x <= 1:
      return False
   for i in range(2, int(sqrt(x) + 1)):
      if x % i == 0:
         return False
   return True

a, b = 0, 0

for i in range(2, n):
   if is_prime(i):
      if is_prime(n - i):
         if i <= n - i:
            a = i
            b = n - i

print(a, b)