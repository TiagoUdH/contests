n = int(input())

v = []

for i in range(n):
  v.append(int(input()))
  
v.sort()

ans = v[len(v) - 1] - v[0]
    
print(ans)