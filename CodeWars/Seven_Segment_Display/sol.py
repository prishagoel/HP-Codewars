n = int(input())

if n % 2 == 0:
   print ("THE MAXIMUM NUMBER FORMED IS " + '1' * (n // 2))
else :
   print ("THE MAXIMUM NUMBER FORMED IS " + '7' + '1' * ((n - 3) // 2))

Min = ""
while n >= 6:
   Min += "0"
   n -= 6

if n == 1:
   Min = Min[:-1]
   Min += '8'
elif n == 2:
   Min += '1'
elif n == 3:
   Min += '7'
elif n == 4:
   Min += '4'
elif n == 5:
   Min += '2'

print ("THE MINIMUM NUMBER FORMED IS " + Min)