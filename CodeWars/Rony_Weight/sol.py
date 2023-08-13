Sum = list(map(int, input().split()))
tot = sum(Sum) // 4
Sum.sort()
wt = [0] * 5
wt[2] = tot - Sum[0] - Sum[9]
wt[4] = Sum[8] - wt[2]
wt[0] = Sum[1] - wt[2]
wt[1] = Sum[0] - wt[0]
wt[3] = Sum[9] - wt[4]
print(*wt)