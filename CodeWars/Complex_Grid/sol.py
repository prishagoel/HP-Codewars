n = int(input())
s = []
for i in range(n):
   s.append(input())
k = int(input())
word = input()
INF = int(10 ** 9)

def match(a, b):
   if a == b:
      return 0
   if a.isupper() and b.islower():
      return 2
   if b.isupper() and a.islower():
      return 2
   return 1

def cost(word1, word2):
   if len(word1) != len(word2):
      return INF
   l = len(word1)
   value = 0
   for i in range(l):
      value += match(word1[i], word2[i])
   return value

ans = INF

for i in range(n):
   for j in range(n - k + 1):
      ans = min(ans, cost(word, s[i][j : j + k]), cost(word, s[i][j : j + k : -1]))

for i in range(n):
   for j in range(n - k + 1):
      t = ""
      l = k
      p = j
      while l > 0:
         l -= 1
         t += s[p][i]
         p += 1
      ans = min(ans, cost(word, t))
      t = t[::-1]
      ans = min(ans, cost(word, t))
   
print(ans)